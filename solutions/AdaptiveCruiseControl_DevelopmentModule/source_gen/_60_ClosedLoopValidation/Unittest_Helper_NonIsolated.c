#include "Unittest_Helper_NonIsolated.h"


#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "___BlockMessages.h"



void  Unittest_Helper_NonIsolated_run_tests(Unittest_Helper_TestSuite_t **suites, uint32_t suite_count) 
{
  {
    uint32_t j;
    j = 0;
    for ( ; j < suite_count; j++ )
    {
      Unittest_Helper_TestSuite_t *suite;
      suite = suites[j];
      {
        uint8_t i;
        i = 0;
        for ( ; i < suite->test_count; i++ )
        {
          char f_stdout[254] = {
            0          };
          char f_stderr[254] = {
            0          };
          int32_t sout;
          int32_t serr;
          FILE *fp_out;
          FILE *fp_err;
          uint8_t test_resulte;
          int32_t result;
          sprintf(f_stdout, ".%s.out", suite->tests[i].name);
          sprintf(f_stderr, ".%s.err", suite->tests[i].name);
          sout = dup(fileno(stdout));
          serr = dup(fileno(stderr));
          fp_out = freopen(f_stdout, "w+", stdout);
          fp_err = freopen(f_stderr, "w+", stderr);
          test_resulte = (*suite->runner)(i);
          fflush(stdout);
          fflush(stderr);
          dup2(sout, fileno(stdout));
          dup2(serr, fileno(stderr));
          
          
          
          
          
          
          result = test_resulte;
          if ( result == 0 ) 
          {
            suite->tests[i].state = UNITTEST_HELPER_TEST_STATE_SUCCESSFUL;
          } else
          {
            suite->tests[i].state = UNITTEST_HELPER_TEST_STATE_FAILURE;
            suite->failed_count++;
          }
        }
      }
    }
  }
}

