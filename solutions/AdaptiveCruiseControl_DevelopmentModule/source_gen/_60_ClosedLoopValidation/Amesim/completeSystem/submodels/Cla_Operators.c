#include "Cla_Operators.h"


#include <math.h>
#include "SIUnits.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include <stdio.h>

































































/* 
 * Message Reporting Function
 */
void  Cla_Operators_PreCondErrors_Atleast2Connections_SumProduct(uint8_t ContractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("Atleast2Connections_SumProduct: There needs to be atleast two input connections (");;
  printf("ContractID=%d",(((uint8_t )(ContractID))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Initialization function for block Sum
 */
void  Cla_Operators____Sum_init(Cla_Operators____Sum_data_t *___id, uint8_t minus_connectionCount, uint8_t plus_connectionCount) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_Atleast2Inputs = false;
    }
    ___id->__anyPreconditionFailed = false;
    
  }
}

/* 
 * Initialization function for block Product
 */
void  Cla_Operators____Product_init(Cla_Operators____Product_data_t *___id, uint8_t divide_connectionCount, uint8_t multiply_connectionCount) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_Atleast2inputs = false;
    }
    ___id->__anyPreconditionFailed = false;
    
  }
}

/* 
 * Execution function for block LogicAND
 */
void  Cla_Operators____LogicAND_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount) 
{
  bool out;
  uint8_t i;
  
  
  
  
  out = ((in[0]));
  {
    for ( i = 0 ; i < (in_connectionCount); i++ )
    {
      out = out && ((in[i]));
    }
  }
  (*out1) = out;
  
  
  
}

/* 
 * Execution function for block LogicOR
 */
void  Cla_Operators____LogicOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount) 
{
  bool out;
  uint8_t i;
  
  
  
  
  out = ((in[0]));
  {
    for ( i = 0 ; i < (in_connectionCount); i++ )
    {
      out = out || ((in[i]));
    }
  }
  (*out1) = out;
  
  
  
}

/* 
 * Execution function for block LogicNAND
 */
void  Cla_Operators____LogicNAND_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount) 
{
  bool out;
  uint8_t i;
  
  
  
  
  out = ((in[0]));
  {
    for ( i = 0 ; i < (in_connectionCount); i++ )
    {
      out = out && ((in[i]));
    }
  }
  (*out1) = !out;
  
  
  
}

/* 
 * Execution function for block LogicNOR
 */
void  Cla_Operators____LogicNOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount) 
{
  bool out;
  uint8_t i;
  
  
  
  
  out = ((in[0]));
  {
    for ( i = 0 ; i < (in_connectionCount); i++ )
    {
      out = out || ((in[i]));
    }
  }
  (*out1) = !out;
  
  
  
}

/* 
 * Execution function for block LogicXOR
 */
void  Cla_Operators____LogicXOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount) 
{
  bool out;
  uint8_t i;
  uint8_t j;
  
  
  
  
  out = ((in[0]));
  j = 0;
  {
    for ( i = 0 ; i < (in_connectionCount); i++ )
    {
      if ( ((in[i])) ) 
      {
        j++;
      }
      out = ((j % 2U) == 0U) ? (false) : (true);
    }
  }
  (*out1) = out;
  
  
  
}

/* 
 * Execution function for block LogicXNOR
 */
void  Cla_Operators____LogicXNOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount) 
{
  bool out;
  uint8_t i;
  uint8_t j;
  
  
  
  
  out = ((in[0]));
  j = 0;
  {
    for ( i = 0 ; i < in_connectionCount; i++ )
    {
      if ( ((in[i])) ) 
      {
        j++;
      }
      out = ((j % 2U) == 0U) ? (true) : (false);
    }
  }
  (*out1) = out;
  
  
  
}

/* 
 * Execution function for block LogicNOT
 */
void  Cla_Operators____LogicNOT_execute(void *___nothing, bool in1, bool *out1) 
{
  
  
  
  
  (*out1) = !in1;
  
  
  
}

/* 
 * Execution function for block CtC_LessThan
 */
void  Cla_Operators____CtC_LessThan_execute(Cla_Operators____CtC_LessThan_data_t *___id, double in1, bool *out1) 
{
  
  
  
  
  (*out1) = (in1 < ___id->ConstantValue) ? (true) : (false);
  
  
  
}

/* 
 * Execution function for block CtC_LessThanEqualTo
 */
void  Cla_Operators____CtC_LessThanEqualTo_execute(Cla_Operators____CtC_LessThanEqualTo_data_t *___id, double in1, bool *out1) 
{
  
  
  
  
  (*out1) = (in1 <= ___id->ConstantValue) ? (true) : (false);
  
  
  
}

/* 
 * Execution function for block CtC_EqualTo
 */
void  Cla_Operators____CtC_EqualTo_execute(Cla_Operators____CtC_EqualTo_data_t *___id, double in1, bool *out1) 
{
  
  
  
  
  (*out1) = (in1 == ___id->ConstantValue) ? (true) : (false);
  
  
  
}

/* 
 * Execution function for block CtC_NotEqualTo
 */
void  Cla_Operators____CtC_NotEqualTo_execute(Cla_Operators____CtC_NotEqualTo_data_t *___id, double in1, bool *out1) 
{
  
  
  
  
  (*out1) = (in1 != ___id->ConstantValue) ? (true) : (false);
  
  
  
}

/* 
 * Execution function for block CtC_GreaterThanEqualTo
 */
void  Cla_Operators____CtC_GreaterThanEqualTo_execute(Cla_Operators____CtC_GreaterThanEqualTo_data_t *___id, double in1, bool *out1) 
{
  
  
  
  
  (*out1) = (in1 >= ___id->ConstantValue) ? (true) : (false);
  
  
  
}

/* 
 * Execution function for block CtC_GreaterThan
 */
void  Cla_Operators____CtC_GreaterThan_execute(Cla_Operators____CtC_GreaterThan_data_t *___id, double in1, bool *out1) 
{
  
  
  
  
  (*out1) = (in1 > ___id->ConstantValue) ? (true) : (false);
  
  
  
}

/* 
 * Execution function for block Sum
 */
void  Cla_Operators____Sum_execute(Cla_Operators____Sum_data_t *___id, double minus[10], double plus[10], double *out1, uint8_t minus_connectionCount, uint8_t plus_connectionCount) 
{
  uint8_t i;
  double result;
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_Atleast2Inputs = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = ((plus_connectionCount) + (minus_connectionCount)) > 1U;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_Atleast2Inputs = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Operators_Sum_Atleast2Inputs", "Cla_Operators:Sum?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#7551716065919005338");
      printf("(connectedCount(minus))=%d\n",(minus_connectionCount));;
      printf("(connectedCount(plus))=%d\n",(plus_connectionCount));;
    }
  }
  
  
  result = 0.0;
  {
    for ( i = 0 ; i < (plus_connectionCount); i++ )
    {
      result += ((plus[i]));
    }
  }
  {
    for ( i = 0 ; i < (minus_connectionCount); i++ )
    {
      result -= ((minus[i]));
    }
  }
  (*out1) = result;
  
  
  
  
}

/* 
 * Execution function for block Gain
 */
void  Cla_Operators____Gain_execute(Cla_Operators____Gain_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  (*out1) = in1 * ___id->Gain;
  
  
  
}

/* 
 * Execution function for block Product
 */
void  Cla_Operators____Product_execute(Cla_Operators____Product_data_t *___id, double divide[10], double multiply[10], double *out1, uint8_t divide_connectionCount, uint8_t multiply_connectionCount) 
{
  uint8_t i;
  double result;
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_Atleast2inputs = false;
  }
  
  {
    bool __assertCondition;
    __assertCondition = ((multiply_connectionCount) + (divide_connectionCount)) > 1U;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_Atleast2inputs = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Operators_Product_Atleast2inputs", "Cla_Operators:Product?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#4168292454015994867");
      printf("(connectedCount(divide))=%d\n",(divide_connectionCount));;
      printf("(connectedCount(divide))=%d\n",(divide_connectionCount));;
      printf("(connectedCount(multiply))=%d\n",(multiply_connectionCount));;
      printf("(connectedCount(multiply))=%d\n",(multiply_connectionCount));;
    }
  }
  
  
  result = 1.0;
  {
    for ( i = 0 ; i < multiply_connectionCount; i++ )
    {
      result *= ((multiply[i]));
    }
  }
  {
    for ( i = 0 ; i < divide_connectionCount; i++ )
    {
      result /= ((divide[i]));
    }
  }
  (*out1) = result;
  
  
  
}

/* 
 * Execution function for block Bias
 */
void  Cla_Operators____Bias_execute(Cla_Operators____Bias_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  (*out1) = in1 + ___id->Bias;
  
  
  
}

/* 
 * Execution function for block Assignment
 */
void  Cla_Operators____Assignment_execute(void *___nothing, double in1_Y0, double in2_U, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block DotProduct
 */
void  Cla_Operators____DotProduct_execute(void *___nothing, double in1, double in2, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block ProductofElements
 */
void  Cla_Operators____ProductofElements_execute(void *___nothing, double in1, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block SliderGain
 */
void  Cla_Operators____SliderGain_execute(void *___nothing, double in1, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block Subtract
 */
void  Cla_Operators____Subtract_execute(void *___nothing, double in1, double in2, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

/* 
 * Execution function for block SumofElements
 */
void  Cla_Operators____SumofElements_execute(void *___nothing, double in1, double *out1) 
{
  
  
  
  
  (*out1) = 0.0;
  
  
  
}

