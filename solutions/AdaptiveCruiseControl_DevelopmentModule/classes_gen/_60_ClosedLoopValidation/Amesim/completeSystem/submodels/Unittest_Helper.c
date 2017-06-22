#include "Unittest_Helper.h"


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include "Unittest_Helper.h"
#include "___BlockMessages.h"





































static char *  Unittest_Helper_bool_to_string(bool b);

static FILE *Unittest_Helper_assert_fd = NULL;

void  Unittest_Helper_init_testsuite(Unittest_Helper_TestSuite_t **suites, uint32_t suiteCount) 
{
  if ( Unittest_Helper_assert_fd == NULL ) 
  {
    Unittest_Helper_assert_fd = fopen(".asserts.xml", "w");
    /* 
     * set the opening root element
     */

    fprintf(Unittest_Helper_assert_fd, "<result>\n");
    fflush(Unittest_Helper_assert_fd);
  }
  {
    uint32_t i;
    i = 0;
    for ( ; i < suiteCount; i++ )
    {
      (*suites[i]->init)();
    }
  }
}

void  Unittest_Helper_log_assert_range_int(char const  *testName, char const  *expected, int64_t actual, char const  *nodeId, char const  *modelId) 
{
  fprintf(Unittest_Helper_assert_fd, "<assert expected=\"%s\" actual=\"%lld\" nodeId=\"%s\" modelId=\"%s\"/>", expected, actual, nodeId, modelId);
  fprintf(Unittest_Helper_assert_fd, "\n");
}

void  Unittest_Helper_log_assert_fail_range_int(char const  *testName, char const  *expected, int64_t actual, char const  *nodeId, char const  *modelId, char const  *msg) 
{
  char buffer[255] = {
    0  };
  _snprintf(buffer, 255, msg, actual, expected);
  fprintf(Unittest_Helper_assert_fd, "<assert-failed expected=\"%s\" actual=\"%lld\" nodeId=\"%s\" modelId=\"%s\"> %s </assert-failed>", expected, actual, nodeId, modelId, buffer);
  fprintf(Unittest_Helper_assert_fd, "\n");
  
}

void  Unittest_Helper_log_assert_int(char const  *testName, int64_t expected, int64_t actual, char const  *nodeId, char const  *modelId) 
{
  fprintf(Unittest_Helper_assert_fd, "<assert expected=\"%lld\" actual=\"%lld\" nodeId=\"%s\" modelId=\"%s\"/>", expected, actual, nodeId, modelId);
  fprintf(Unittest_Helper_assert_fd, "\n");
}

void  Unittest_Helper_log_assert_fail_int(char const  *testName, int64_t expected, int64_t actual, char const  *nodeId, char const  *modelId, char const  *msg) 
{
  char buffer[255] = {
    0  };
  _snprintf(buffer, 255, msg, actual, expected);
  fprintf(Unittest_Helper_assert_fd, "<assert-failed expected=\"%lld\" actual=\"%lld\" nodeId=\"%s\" modelId=\"%s\"> %s </assert-failed>", expected, actual, nodeId, modelId, buffer);
  fprintf(Unittest_Helper_assert_fd, "\n");
  
}

void  Unittest_Helper_log_assert_double(char const  *testName, double expected, double actual, char const  *nodeId, char const  *modelId) 
{
  fprintf(Unittest_Helper_assert_fd, "<assert expected=\"%f\" actual=\"%f\" nodeId=\"%s\" modelId=\"%s\"/>", expected, actual, nodeId, modelId);
  fprintf(Unittest_Helper_assert_fd, "\n");
}

void  Unittest_Helper_log_assert_fail_double(char const  *testName, double expected, double actual, char const  *nodeId, char const  *modelId, char const  *msg) 
{
  char buffer[255] = {
    0  };
  _snprintf(buffer, 255, msg, actual, expected);
  fprintf(Unittest_Helper_assert_fd, "<assert-failed expected=\"%f\" actual=\"%f\" nodeId=\"%s\" modelId=\"%s\"> %s </assert-failed>", expected, actual, nodeId, modelId, buffer);
  fprintf(Unittest_Helper_assert_fd, "\n");
}

void  Unittest_Helper_log_assert_bool(char const  *testName, bool expected, bool actual, char const  *nodeId, char const  *modelId) 
{
  fprintf(Unittest_Helper_assert_fd, "<assert expected=\"%s\" actual=\"%s\" nodeId=\"%s\" modelId=\"%s\"/>", Unittest_Helper_bool_to_string(expected), Unittest_Helper_bool_to_string(actual), nodeId, modelId);
  fprintf(Unittest_Helper_assert_fd, "\n");
}

void  Unittest_Helper_log_assert_fail_bool(char const  *testName, bool expected, bool actual, char const  *nodeId, char const  *modelId, char const  *msg) 
{
  char buffer[255] = {
    0  };
  _snprintf(buffer, 255, msg, actual, expected);
  fprintf(Unittest_Helper_assert_fd, "<assert-failed expected=\"%s\" actual=\"%s\" nodeId=\"%s\" modelId=\"%s\"> %s </assert-failed>", Unittest_Helper_bool_to_string(expected), Unittest_Helper_bool_to_string(actual), nodeId, modelId, buffer);
  fprintf(Unittest_Helper_assert_fd, "\n");
}

static char *  Unittest_Helper_bool_to_string(bool b) 
{
  return (b) ? ("true") : ("false");
}

int32_t  Unittest_Helper_finish_testsuite(Unittest_Helper_TestSuite_t **suites, uint32_t suiteCount) 
{
  FILE *file;
  char path[254] = {
    0  };
  int32_t result;
  /* 
   * set the closing root element
   */

  fprintf(Unittest_Helper_assert_fd, "</result>");
  fclose(Unittest_Helper_assert_fd);
  /* 
   * the format is documented here http://help.catchsoftware.com/display/ET/JUnit+Format
   * and herehttps://svn.jenkins-ci.org/trunk/hudson/dtkit/dtkit-format/dtkit-junit-model/src/main/resources/com/thalesgroup/dtkit/junit/model/xsd/junit-4.xsd
   */

  result = 0;
  
  sprintf(path, "TestResult.xml");
  file = fopen(path, "w+");
  fprintf(file, "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>");
  fprintf(file, "\n");
  fprintf(file, "<testsuites>\n");
  {
    uint32_t i;
    i = 0;
    for ( ; i < suiteCount; i++ )
    {
      Unittest_Helper_TestSuite_t *suite;
      suite = suites[i];
      fprintf(file, "<testsuite name=\"%s\" tests=\"%d\" errors=\"%d\" failures=\"%d\">", suite->name, suite->test_count, suite->error_count, suite->failed_count);
      fprintf(file, "\n");
      
      {
        uint8_t __c;
        __c = 0;
        for ( ; __c < suite->test_count; __c++ )
        {
          Unittest_Helper_Test_t *__it;
          char f_stdout[254];
          FILE *fp_stdout;
          char f_sterr[254];
          FILE *fp_sterr;
          __it = &(suite->tests[__c]);
          fprintf(file, "<testcase name=\"%s\"  assertions=\"%d\" classname=\"%s\">", (*__it).name, (*__it).assertions, (*__it).classname);
          fprintf(file, "\n");
          switch ((*__it).state)
          {
            case UNITTEST_HELPER_TEST_STATE_NOT_RUN: {
              fprintf(file, "<skipped/>");
              break;
            }
            case UNITTEST_HELPER_TEST_STATE_ERROR: {
              /* 
               * test failed with unexpected error like segfault
               */

              fprintf(file, "<error message=\"%s\"  type=\"\"></error>", "todo");
              break;
            }
            case UNITTEST_HELPER_TEST_STATE_FAILURE: {
              /* 
               * an expectation failed
               */

              fprintf(file, "<failure message=\"%s\" type=\"\"  ></failure>", "todo");
              break;
            }
          }

          fprintf(file, "\n");
          sprintf(f_stdout, ".%s.out", (*__it).name);
          fp_stdout = fopen(f_stdout, "r");
          if ( fp_stdout != NULL ) 
          {
            char buf[254] = {
              0            };
            size_t nread;
            fprintf(file, "<system-out>");
            fprintf(file, "\n");
            while ((nread = fread(buf, 1, sizeof(buf), fp_stdout)) > 0)
            {
              fwrite(buf, 1, nread, file);
              fwrite(buf, 1, nread, stdout);
            }
            fclose(fp_stdout);
            fprintf(file, "</system-out>");
            unlink(f_stdout);
          }
          sprintf(f_sterr, ".%s.err", (*__it).name);
          fp_sterr = fopen(f_sterr, "r");
          if ( fp_sterr != NULL ) 
          {
            char buf[254] = {
              0            };
            size_t nread;
            fprintf(file, "<system-err>");
            fprintf(file, "\n");
            while ((nread = fread(buf, 1, sizeof(buf), fp_sterr)) > 0)
            {
              fwrite(buf, 1, nread, file);
              fwrite(buf, 1, nread, stderr);
            }
            fclose(fp_sterr);
            fprintf(file, "</system-err>");
            unlink(f_sterr);
          }
          
          fprintf(file, "\n");
          fprintf(file, "</testcase>");
          fprintf(file, "\n");
          
        }
      }
      result += suite->error_count + suite->failed_count;
      fprintf(file, "</testsuite>");
      fprintf(file, "\n");
      
    }
  }
  fprintf(file, "</testsuites>");
  fclose(file);
  return result;
}

