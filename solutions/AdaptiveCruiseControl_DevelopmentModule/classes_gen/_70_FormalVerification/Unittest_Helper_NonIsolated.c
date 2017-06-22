#include "Unittest_Helper_NonIsolated.h"


#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "___BlockMessages.h"



void  Unittest_Helper_NonIsolated_run_tests(Unittest_Helper_TestSuite_t *(suites[]), uint32_t suite_count) 
{
  for ( uint32_t j = 0 ; j < suite_count; j++ )
  {
    Unittest_Helper_TestSuite_t *suite = suites[j];
    for ( uint8_t i = 0 ; i < suite->test_count; i++ )
    {
      char f_stdout[254] = {
        0      };
      char f_stderr[254] = {
        0      };
      sprintf(f_stdout, ".%s.out", suite->tests[i].name);
      sprintf(f_stderr, ".%s.err", suite->tests[i].name);
      int32_t sout = dup(fileno(stdout));
      int32_t serr = dup(fileno(stderr));
      FILE *fp_out = freopen(f_stdout, "w+", stdout);
      FILE *fp_err = freopen(f_stderr, "w+", stderr);
      uint8_t test_resulte = (*suite->runner)(i);
      fflush(stdout);
      fflush(stderr);
      dup2(sout, fileno(stdout));
      dup2(serr, fileno(stderr));
      
      
      
      
      
      
      int32_t result = test_resulte;
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

