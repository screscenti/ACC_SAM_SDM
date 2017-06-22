#include "Cla_Discrete.h"


#include "SIUnits.h"
#include "___SimulationRuntime.h"
#include "Unittest_Helper.h"
#include "___BlockMessages.h"
#include <stdio.h>









































































































static bool  Cla_Discrete_ifReset(Cla_Discrete_Integrator_Reset_t ResetType, double in1, double prevIn, bool ResetSig);

/* 
 * Message Reporting Function
 */
void  Cla_Discrete_ContractFailures_contractFailed(uint8_t contractID, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("contractFailed: pre- or postcondition failed (");;
  printf("contractID=%d",(((uint8_t )(contractID))));
  printf(" ,location=@%s) \n",loc);;
}

double  Cla_Discrete_IntegratorOutput(double gainval, double sampletime, double prevIn, double prevOut, double initcond, double prevTime, double curTime, bool resetSig, double UpperSaturationLimit, double LowerSaturationLimit) 
{
  double outValue;
  if ( curTime == 0.0 ) 
  {
    outValue = initcond;
  } else
  {
    outValue = (((double )(gainval * (sampletime * prevIn))) + prevOut);
  }
  if ( outValue < LowerSaturationLimit ) 
  {
    return LowerSaturationLimit;
  } else if (outValue > UpperSaturationLimit) {
    return UpperSaturationLimit;
  } else
  {
    return outValue;
  }
}

uint8_t  Cla_Discrete_noOfCoefficients(double Array[10]) 
{
  uint8_t count = 0;
  uint8_t i;
  for ( i = 0 ; i < 10U; i++ )
  {
    if ( isnan(Array[i]) == 0 ) 
    {
      count++;
    } else
    {
      break;
    }
  }
  return count;
}

Cla_Discrete_node_t  Cla_Discrete_MultiplyTwoNodes(Cla_Discrete_node_t one, Cla_Discrete_node_t two) 
{
  Cla_Discrete_node_t result;
  result.coeff = (one.coeff * two.coeff);
  result.power = (one.power + two.power);
  return result;
  
}

Cla_Discrete_equation_t  Cla_Discrete_multiplyEquations(Cla_Discrete_equation_t one, Cla_Discrete_equation_t two, int8_t maxPower) 
{
  /* 
   * multiply equations
   */

  Cla_Discrete_equation_t Resultequation;
  uint8_t count = 0;
  uint8_t i;
  uint8_t j;
  int8_t p;
  Cla_Discrete_node_t nodes[20] = {
    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },
    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    }  };
  for ( i = 0 ; i < one.size; i++ )
  {
    /* 
     * multiply equations one.size
     */

    for ( j = 0 ; j < two.size; j++ )
    {
      /* 
       * multiply equations two.size
       */

      nodes[count] = Cla_Discrete_MultiplyTwoNodes(one.nodes[i], two.nodes[j]);
      count++;
    }
  }
  Cla_Discrete_node_t tmpNodes[11] = {
    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    },    {
      0.0,      0    }
  };
  uint8_t numOfNodes = 0;
  for ( i = 0 ; i < (((uint8_t )(maxPower)) + 1); i++ )
  {
    tmpNodes[i].coeff = 0.0;
  }
  for ( p = maxPower ; p >= 0; p-- )
  {
    /* 
     * multiply equations count>=0
     */

    for ( i = 0 ; i < count; i++ )
    {
      /* 
       * multiply equations count1>=0 inner loop
       */

      if ( nodes[i].power == p ) 
      {
        tmpNodes[numOfNodes].coeff = tmpNodes[numOfNodes].coeff + nodes[i].coeff;
        tmpNodes[numOfNodes].power = nodes[i].power;
      }
    }
    numOfNodes++;
  }
  for ( i = 0 ; i < numOfNodes; i++ )
  {
    /* 
     * multiply equations assign the nodes
     */

    Resultequation.nodes[i] = tmpNodes[i];
  }
  Resultequation.size = numOfNodes;
  return Resultequation;
}

uint8_t  Cla_Discrete_findTransferFuncCoeffs(double Array[10], double arrayDes[11]) 
{
  /* 
   * Return Array
   */

  uint8_t count = Cla_Discrete_noOfCoefficients(Array);
  uint8_t j;
  Cla_Discrete_equation_t InitEquation[10] = {
    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    },    {
      {
        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        },        {
          0.0,          0        }
      },      0    }  };
  Cla_Discrete_equation_t ResultEquation;
  for ( j = 0 ; j < count; j++ )
  {
    /* 
     * ReturnArray equation init
     */

    InitEquation[j].nodes[0].coeff = 1.0;
    InitEquation[j].nodes[0].power = 1;
    
    InitEquation[j].nodes[1].coeff = -Array[j];
    InitEquation[j].nodes[1].power = 0;
    InitEquation[j].size = 2;
  }
  ResultEquation = InitEquation[0];
  if ( count > 1U ) 
  {
    uint8_t i;
    int8_t maxPower = 2;
    for ( i = 0 ; i < count - 1U; i++ )
    {
      /* 
       * ReturnArray result equation
       */

      ResultEquation = Cla_Discrete_multiplyEquations(ResultEquation, InitEquation[i + 1U], maxPower);
      maxPower++;
    }
  }
  uint8_t k = 0;
  while (k < ResultEquation.size)
  {
    arrayDes[k] = ResultEquation.nodes[k].coeff;
    k++;
  }
  return ResultEquation.size;
}

static bool  Cla_Discrete_ifReset(Cla_Discrete_Integrator_Reset_t ResetType, double in1, double prevIn, bool ResetSig) 
{
  switch (ResetType)
  {
    case Cla_Discrete_Integrator_Reset__RISING: {
      return ((in1 > prevIn) && ResetSig) ? (true) : (false);
    }
    case Cla_Discrete_Integrator_Reset__FALLING: {
      return ((in1 < prevIn) && ResetSig) ? (true) : (false);
    }
    case Cla_Discrete_Integrator_Reset__EITHER: {
      return (((in1 > prevIn) || (in1 < prevIn)) && ResetSig) ? (true) : (false);
    }
    case Cla_Discrete_Integrator_Reset__LEVEL: {
      return (ResetSig) ? (true) : (false);
    }
    case Cla_Discrete_Integrator_Reset__SAMPLED_LEVEL: {
      return (ResetSig) ? (true) : (false);
    }
    default: {
      return false;
    }
  }

}

/* 
 * Initialization function for block DiscreteDifference
 */
void  Cla_Discrete____DiscreteDifference_init(Cla_Discrete____DiscreteDifference_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = ___id->vinit;
  ___id->___in1_history.pos = 0;
  
}

/* 
 * Initialization function for block DiscreteIIRFilter
 */
void  Cla_Discrete____DiscreteIIRFilter_init(Cla_Discrete____DiscreteIIRFilter_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_FilterOrder = false;
      ___id->__preconditionFailed_Denominator0 = false;
      ___id->__preconditionFailed_NumDenCoeffMatch = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition = ___id->Denominator[0] != 0.0;
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_Denominator0 = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_DiscreteIIRFilter_Denominator0", "Cla_Discrete:DiscreteIIRFilter:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994511911");
        
      }
    }
    
    
  }
  {
    bool __assertCondition = ___id->Denominator[0] != 0.0;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_Denominator0 = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_DiscreteIIRFilter_Denominator0", "Cla_Discrete:DiscreteIIRFilter:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994511911");
      
    }
  }
  
  ___id->___in1_history.data[0] = ___id->InitialStates;
  ___id->___in1_history.data[1] = ___id->InitialStates;
  ___id->___in1_history.data[2] = ___id->InitialStates;
  ___id->___in1_history.data[3] = ___id->InitialStates;
  ___id->___in1_history.data[4] = ___id->InitialStates;
  ___id->___in1_history.data[5] = ___id->InitialStates;
  ___id->___in1_history.data[6] = ___id->InitialStates;
  ___id->___in1_history.data[7] = ___id->InitialStates;
  ___id->___in1_history.data[8] = ___id->InitialStates;
  ___id->___in1_history.pos = 8;
  
  ___id->___out1_history.data[0] = ___id->InitialStates;
  ___id->___out1_history.data[1] = ___id->InitialStates;
  ___id->___out1_history.data[2] = ___id->InitialStates;
  ___id->___out1_history.data[3] = ___id->InitialStates;
  ___id->___out1_history.data[4] = ___id->InitialStates;
  ___id->___out1_history.data[5] = ___id->InitialStates;
  ___id->___out1_history.data[6] = ___id->InitialStates;
  ___id->___out1_history.data[7] = ___id->InitialStates;
  ___id->___out1_history.data[8] = ___id->InitialStates;
  ___id->___out1_history.pos = 8;
  
  ___id->countN = Cla_Discrete_noOfCoefficients(___id->Numerator);
  ___id->countD = Cla_Discrete_noOfCoefficients(___id->Denominator);
}

/* 
 * Initialization function for block Memory
 */
void  Cla_Discrete____Memory_init(Cla_Discrete____Memory_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = ___id->vinit;
  ___id->___in1_history.pos = 0;
  
}

/* 
 * Initialization function for block UnitDelay
 */
void  Cla_Discrete____UnitDelay_init(Cla_Discrete____UnitDelay_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = ___id->X0;
  ___id->___in1_history.pos = 0;
  
}

/* 
 * Initialization function for block IntegerDelay
 */
void  Cla_Discrete____IntegerDelay_init(Cla_Discrete____IntegerDelay_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_numdelayRange = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition = (___id->NumDelays <= 10U) && (___id->NumDelays > 0U);
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_numdelayRange = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegerDelay_numdelayRange", "Cla_Discrete:IntegerDelay?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994512084");
        
      }
    }
    
    
  }
  {
    bool __assertCondition = (___id->NumDelays <= 10U) && (___id->NumDelays > 0U);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_numdelayRange = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegerDelay_numdelayRange", "Cla_Discrete:IntegerDelay?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994512084");
      
    }
  }
  
  ___id->___in1_history.data[0] = ___id->vinit;
  ___id->___in1_history.data[1] = ___id->vinit;
  ___id->___in1_history.data[2] = ___id->vinit;
  ___id->___in1_history.data[3] = ___id->vinit;
  ___id->___in1_history.data[4] = ___id->vinit;
  ___id->___in1_history.data[5] = ___id->vinit;
  ___id->___in1_history.data[6] = ___id->vinit;
  ___id->___in1_history.data[7] = ___id->vinit;
  ___id->___in1_history.data[8] = ___id->vinit;
  ___id->___in1_history.data[9] = ___id->vinit;
  ___id->___in1_history.pos = 9;
  
}

/* 
 * Initialization function for block DiscreteFIRfilter
 */
void  Cla_Discrete____DiscreteFIRfilter_init(Cla_Discrete____DiscreteFIRfilter_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_FilterOrder = false;
    }
    ___id->__anyPreconditionFailed = false;
    
    
  }
  
  ___id->___in1_history.data[0] = ___id->IC;
  ___id->___in1_history.data[1] = ___id->IC;
  ___id->___in1_history.data[2] = ___id->IC;
  ___id->___in1_history.data[3] = ___id->IC;
  ___id->___in1_history.data[4] = ___id->IC;
  ___id->___in1_history.data[5] = ___id->IC;
  ___id->___in1_history.data[6] = ___id->IC;
  ___id->___in1_history.data[7] = ___id->IC;
  ___id->___in1_history.data[8] = ___id->IC;
  ___id->___in1_history.data[9] = ___id->IC;
  ___id->___in1_history.pos = 9;
  
  ___id->count = Cla_Discrete_noOfCoefficients(___id->NumCoeffs);
}

/* 
 * Initialization function for block TransferFcnFirstOrder
 */
void  Cla_Discrete____TransferFcnFirstOrder_init(Cla_Discrete____TransferFcnFirstOrder_data_t *___id) 
{
  
  ___id->___out1_history.data[0] = ___id->ICPrevOutput;
  ___id->___out1_history.pos = 0;
  
}

/* 
 * Initialization function for block TransferFcnRealZero
 */
void  Cla_Discrete____TransferFcnRealZero_init(Cla_Discrete____TransferFcnRealZero_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = ___id->ICPrevInput;
  ___id->___in1_history.pos = 0;
  
}

/* 
 * Initialization function for block TransferFcnLeadorLag
 */
void  Cla_Discrete____TransferFcnLeadorLag_init(Cla_Discrete____TransferFcnLeadorLag_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = ___id->ICPrevInput;
  ___id->___in1_history.pos = 0;
  
  ___id->___out1_history.data[0] = ___id->ICPrevOutput;
  ___id->___out1_history.pos = 0;
  
}

/* 
 * Initialization function for block DiscreteTransferFcn
 */
void  Cla_Discrete____DiscreteTransferFcn_init(Cla_Discrete____DiscreteTransferFcn_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = ___id->InitialStates;
  ___id->___in1_history.data[1] = ___id->InitialStates;
  ___id->___in1_history.data[2] = ___id->InitialStates;
  ___id->___in1_history.data[3] = ___id->InitialStates;
  ___id->___in1_history.data[4] = ___id->InitialStates;
  ___id->___in1_history.data[5] = ___id->InitialStates;
  ___id->___in1_history.data[6] = ___id->InitialStates;
  ___id->___in1_history.data[7] = ___id->InitialStates;
  ___id->___in1_history.data[8] = ___id->InitialStates;
  ___id->___in1_history.data[9] = ___id->InitialStates;
  ___id->___in1_history.pos = 9;
  
  ___id->___out1_history.data[0] = 0.0;
  ___id->___out1_history.data[1] = 0.0;
  ___id->___out1_history.data[2] = 0.0;
  ___id->___out1_history.data[3] = 0.0;
  ___id->___out1_history.data[4] = 0.0;
  ___id->___out1_history.data[5] = 0.0;
  ___id->___out1_history.data[6] = 0.0;
  ___id->___out1_history.data[7] = 0.0;
  ___id->___out1_history.data[8] = 0.0;
  ___id->___out1_history.data[9] = 0.0;
  ___id->___out1_history.pos = 9;
  
  ___id->countN = Cla_Discrete_noOfCoefficients(___id->Numerator);
  ___id->countD = Cla_Discrete_noOfCoefficients(___id->Denominator);
}

/* 
 * Initialization function for block DiscreteZeroPole
 */
void  Cla_Discrete____DiscreteZeroPole_init(Cla_Discrete____DiscreteZeroPole_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = 0.0;
  ___id->___in1_history.data[1] = 0.0;
  ___id->___in1_history.data[2] = 0.0;
  ___id->___in1_history.data[3] = 0.0;
  ___id->___in1_history.data[4] = 0.0;
  ___id->___in1_history.data[5] = 0.0;
  ___id->___in1_history.data[6] = 0.0;
  ___id->___in1_history.data[7] = 0.0;
  ___id->___in1_history.data[8] = 0.0;
  ___id->___in1_history.data[9] = 0.0;
  ___id->___in1_history.pos = 9;
  
  ___id->___out1_history.data[0] = 0.0;
  ___id->___out1_history.data[1] = 0.0;
  ___id->___out1_history.data[2] = 0.0;
  ___id->___out1_history.data[3] = 0.0;
  ___id->___out1_history.data[4] = 0.0;
  ___id->___out1_history.data[5] = 0.0;
  ___id->___out1_history.data[6] = 0.0;
  ___id->___out1_history.data[7] = 0.0;
  ___id->___out1_history.data[8] = 0.0;
  ___id->___out1_history.data[9] = 0.0;
  ___id->___out1_history.pos = 9;
  
  {
    ___id->Numerator[0] = 0.0;
    ___id->Numerator[1] = 0.0;
    ___id->Numerator[2] = 0.0;
    ___id->Numerator[3] = 0.0;
    ___id->Numerator[4] = 0.0;
    ___id->Numerator[5] = 0.0;
    ___id->Numerator[6] = 0.0;
    ___id->Numerator[7] = 0.0;
    ___id->Numerator[8] = 0.0;
    ___id->Numerator[9] = 0.0;
    ___id->Numerator[10] = 0.0;
  }
  {
    ___id->Denominator[0] = 0.0;
    ___id->Denominator[1] = 0.0;
    ___id->Denominator[2] = 0.0;
    ___id->Denominator[3] = 0.0;
    ___id->Denominator[4] = 0.0;
    ___id->Denominator[5] = 0.0;
    ___id->Denominator[6] = 0.0;
    ___id->Denominator[7] = 0.0;
    ___id->Denominator[8] = 0.0;
    ___id->Denominator[9] = 0.0;
    ___id->Denominator[10] = 0.0;
  }
  ___id->countN = Cla_Discrete_findTransferFuncCoeffs(___id->Zeros, ___id->Numerator);
  ___id->countD = Cla_Discrete_findTransferFuncCoeffs(___id->Poles, ___id->Denominator);
}

/* 
 * Initialization function for block IntegratorICInt
 */
void  Cla_Discrete____IntegratorICInt_init(Cla_Discrete____IntegratorICInt_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = 0.0;
  ___id->___in1_history.pos = 0;
  
  ___id->___out1_history.data[0] = ___id->InitialCondition;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block IntegratorICExt
 */
void  Cla_Discrete____IntegratorICExt_init(Cla_Discrete____IntegratorICExt_data_t *___id) 
{
  
  ___id->___in1_dataInput_history.data[0] = 0.0;
  ___id->___in1_dataInput_history.pos = 0;
  
  ___id->___out1_history.data[0] = 0.0;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block IntegratorICIntReset
 */
void  Cla_Discrete____IntegratorICIntReset_init(Cla_Discrete____IntegratorICIntReset_data_t *___id) 
{
  
  ___id->___in1_dataInput_history.data[0] = 0.0;
  ___id->___in1_dataInput_history.pos = 0;
  
  ___id->___out1_history.data[0] = ___id->InitialCondition;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block IntegratorICExtReset
 */
void  Cla_Discrete____IntegratorICExtReset_init(Cla_Discrete____IntegratorICExtReset_data_t *___id) 
{
  
  ___id->___in1_dataInput_history.data[0] = 0.0;
  ___id->___in1_dataInput_history.pos = 0;
  
  ___id->___out1_history.data[0] = 0.0;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block IntegratorLimICInt
 */
void  Cla_Discrete____IntegratorLimICInt_init(Cla_Discrete____IntegratorLimICInt_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_LimitViolation = false;
      ___id->__preconditionFailed_ImproperLimits = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition = (___id->InitialCondition <= ___id->UpperSaturationLimit) && (___id->InitialCondition >= ___id->LowerSaturationLimit);
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_LimitViolation = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICInt_LimitViolation", "Cla_Discrete:IntegratorLimICInt?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515604");
        
      }
    }
    {
      bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_ImproperLimits = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICInt_ImproperLimits", "Cla_Discrete:IntegratorLimICInt:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515612");
        
      }
    }
    
    
  }
  {
    bool __assertCondition = (___id->InitialCondition <= ___id->UpperSaturationLimit) && (___id->InitialCondition >= ___id->LowerSaturationLimit);
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_LimitViolation = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICInt_LimitViolation", "Cla_Discrete:IntegratorLimICInt?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515604");
      
    }
  }
  {
    bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ImproperLimits = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICInt_ImproperLimits", "Cla_Discrete:IntegratorLimICInt:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515612");
      
    }
  }
  
  ___id->___in1_history.data[0] = 0.0;
  ___id->___in1_history.pos = 0;
  
  ___id->___out1_history.data[0] = ___id->InitialCondition;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block IntegratorLimICExt
 */
void  Cla_Discrete____IntegratorLimICExt_init(Cla_Discrete____IntegratorLimICExt_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_ImproperLimits = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_ImproperLimits = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICExt_ImproperLimits", "Cla_Discrete:IntegratorLimICExt?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515704");
        
      }
    }
    
    
  }
  {
    bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ImproperLimits = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICExt_ImproperLimits", "Cla_Discrete:IntegratorLimICExt?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515704");
      
    }
  }
  
  ___id->___in1_dataInput_history.data[0] = 0.0;
  ___id->___in1_dataInput_history.pos = 0;
  
  ___id->___out1_history.data[0] = 0.0;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0;
}

/* 
 * Initialization function for block IntegratorLimICIntReset
 */
void  Cla_Discrete____IntegratorLimICIntReset_init(Cla_Discrete____IntegratorLimICIntReset_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_LimitViolation = false;
      ___id->__preconditionFailed_ImproperLimits = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition = ___id->InitialCondition <= ___id->UpperSaturationLimit && ___id->InitialCondition >= ___id->LowerSaturationLimit;
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_LimitViolation = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICIntReset_LimitViolation", "Cla_Discrete:IntegratorLimICIntReset?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515827");
        
      }
    }
    {
      bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_ImproperLimits = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICIntReset_ImproperLimits", "Cla_Discrete:IntegratorLimICIntReset:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515835");
        
      }
    }
    
    
  }
  {
    bool __assertCondition = ___id->InitialCondition <= ___id->UpperSaturationLimit && ___id->InitialCondition >= ___id->LowerSaturationLimit;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_LimitViolation = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICIntReset_LimitViolation", "Cla_Discrete:IntegratorLimICIntReset?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515827");
      
    }
  }
  {
    bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ImproperLimits = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICIntReset_ImproperLimits", "Cla_Discrete:IntegratorLimICIntReset:1?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515835");
      
    }
  }
  
  ___id->___in1_dataInput_history.data[0] = 0.0;
  ___id->___in1_dataInput_history.pos = 0;
  
  ___id->___out1_history.data[0] = ___id->InitialCondition;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block IntegratorLimICExtReset
 */
void  Cla_Discrete____IntegratorLimICExtReset_init(Cla_Discrete____IntegratorLimICExtReset_data_t *___id) 
{
  {
    /* 
     * initialization of preConditon members
     */

    {
      /* 
       * initialization of preConditon members
       */

      ___id->__preconditionFailed_ImproperLimits = false;
    }
    ___id->__anyPreconditionFailed = false;
    {
      bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
      if ( !__assertCondition ) 
      {
        ___id->__preconditionFailed_ImproperLimits = true;
        ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICExtReset_ImproperLimits", "Cla_Discrete:IntegratorLimICExtReset?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515955");
        
      }
    }
    
    
  }
  {
    bool __assertCondition = ___id->LowerSaturationLimit < ___id->UpperSaturationLimit;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_ImproperLimits = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_IntegratorLimICExtReset_ImproperLimits", "Cla_Discrete:IntegratorLimICExtReset?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994515955");
      
    }
  }
  
  ___id->___in1_dataInput_history.data[0] = 0.0;
  ___id->___in1_dataInput_history.pos = 0;
  
  ___id->___out1_history.data[0] = 0.0;
  ___id->___out1_history.pos = 0;
  
  ___id->prevTime = 0.0;
}

/* 
 * Initialization function for block Derivative
 */
void  Cla_Discrete____Derivative_init(Cla_Discrete____Derivative_data_t *___id) 
{
  
  ___id->___in1_history.data[0] = ___id->IC;
  ___id->___in1_history.pos = 0;
  
}

/* 
 * Initialization function for block __delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Initialization function for block __delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Initialization function for block __delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Initialization function for block __delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Initialization function for block __delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_init(Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Initialization function for block __delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Initialization function for block __delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Initialization function for block __delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id) 
{
  
  ___id->delayedValue = ___id->delayInitVal;
}

/* 
 * Execution function for block DiscreteDifference
 */
void  Cla_Discrete____DiscreteDifference_execute(Cla_Discrete____DiscreteDifference_data_t *___id, double in1, double *out) 
{
  
  
  
  
  
  (*out) = in1 - ___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1];
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
  
  
  
}

/* 
 * Execution function for block DiscreteIIRFilter
 */
void  Cla_Discrete____DiscreteIIRFilter_execute(Cla_Discrete____DiscreteIIRFilter_data_t *___id, double in1, double *out1) 
{
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_FilterOrder = false;
    ___id->__preconditionFailed_NumDenCoeffMatch = false;
  }
  
  {
    bool __assertCondition = ___id->countN <= 10U;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_FilterOrder = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_DiscreteIIRFilter_FilterOrder", "Cla_Discrete:DiscreteIIRFilter?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994511907");
      printf("countN=%d\n",___id->countN);;
      
    }
  }
  {
    bool __assertCondition = ___id->countD == ___id->countN;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_NumDenCoeffMatch = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_DiscreteIIRFilter_NumDenCoeffMatch", "Cla_Discrete:DiscreteIIRFilter:2?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994511917");
      printf("countN=%d\n",___id->countN);;
      printf("countD=%d\n",___id->countD);;
      
    }
  }
  
  
  
  uint8_t j;
  double computedValue = 0.0;
  for ( j = 1 ; j < ___id->countN; j++ )
  {
    computedValue += (___id->Numerator[j] * ___id->___in1_history.data[(9 + ((-j + 1) % 9) + ___id->___in1_history.pos) % 9]);
  }
  for ( j = 1 ; j < ___id->countD; j++ )
  {
    computedValue -= (___id->Denominator[j] * ___id->___out1_history.data[(9 + ((-j + 1) % 9) + ___id->___out1_history.pos) % 9]);
  }
  (*out1) = (computedValue + (___id->Numerator[0] * in1)) / ___id->Denominator[0];
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 9] = in1;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 9] = (*out1);
  
  
}

/* 
 * Execution function for block Memory
 */
void  Cla_Discrete____Memory_execute(Cla_Discrete____Memory_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = ___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1];
  
  
  
  
}

/* 
 * Execution function for block UnitDelay
 */
void  Cla_Discrete____UnitDelay_execute(Cla_Discrete____UnitDelay_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = (___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1]);
  
  
  
  
}

/* 
 * Execution function for block IntegerDelay
 */
void  Cla_Discrete____IntegerDelay_execute(Cla_Discrete____IntegerDelay_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = ___id->___in1_history.data[(10 + ((-___id->NumDelays + 1) % 10) + ___id->___in1_history.pos) % 10];
  
  
  
  
}

/* 
 * Execution function for block DiscreteFIRfilter
 */
void  Cla_Discrete____DiscreteFIRfilter_execute(Cla_Discrete____DiscreteFIRfilter_data_t *___id, double in1, double *out1) 
{
  
  {
    /* 
     * initialization of preConditon members
     */

    ___id->__preconditionFailed_FilterOrder = false;
  }
  
  {
    bool __assertCondition = (___id->count - 1) <= 10;
    if ( !__assertCondition ) 
    {
      ___id->__preconditionFailed_FilterOrder = true;
      ___BlockMessages____block_messagelist_Contract_Failed("Cla_Discrete_DiscreteFIRfilter_FilterOrder", "Cla_Discrete:DiscreteFIRfilter?r:0ca882c3-0e34-41b1-9106-a8c077327ab1(ClaStdLib)#3746913008994512219");
      printf("count=%d\n",___id->count);;
      
    }
  }
  
  
  
  uint8_t i;
  double anotherValue = 0.0;
  for ( i = 1 ; i < ___id->count; i++ )
  {
    anotherValue += (___id->NumCoeffs[i] * ___id->___in1_history.data[(10 + ((-(i) + 1) % 10) + ___id->___in1_history.pos) % 10]);
  }
  (*out1) = anotherValue + (in1 * ___id->NumCoeffs[0]);
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 10] = in1;
  
  
  
}

/* 
 * Execution function for block TransferFcnFirstOrder
 */
void  Cla_Discrete____TransferFcnFirstOrder_execute(Cla_Discrete____TransferFcnFirstOrder_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = in1 + (___id->PoleZ * (___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1] - in1));
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block TransferFcnRealZero
 */
void  Cla_Discrete____TransferFcnRealZero_execute(Cla_Discrete____TransferFcnRealZero_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = in1 - (___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1] * ___id->ZeroZ);
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
  
  
  
}

/* 
 * Execution function for block TransferFcnLeadorLag
 */
void  Cla_Discrete____TransferFcnLeadorLag_execute(Cla_Discrete____TransferFcnLeadorLag_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = in1 - (___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1] * ___id->ZeroZ) + (___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1] * ___id->PoleZ);
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block DiscreteTransferFcn
 */
void  Cla_Discrete____DiscreteTransferFcn_execute(Cla_Discrete____DiscreteTransferFcn_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  uint8_t j = 0;
  double computedValue = 0.0;
  uint8_t inHisIndex = (___id->countN - ___id->countD);
  if ( ___id->countD == ___id->countN ) 
  {
    for ( j = 1 ; j < ___id->countN; j++ )
    {
      computedValue += (___id->Numerator[j] * ___id->___in1_history.data[(10 + ((-(j) + 1) % 10) + ___id->___in1_history.pos) % 10]);
    }
    for ( j = 1 ; j < ___id->countD; j++ )
    {
      computedValue -= (___id->Denominator[j] * ___id->___out1_history.data[(10 + ((-(j) + 1) % 10) + ___id->___out1_history.pos) % 10]);
    }
    (*out1) = (computedValue + ___id->Numerator[0] * in1) / ___id->Denominator[0];
  } else
  {
    for ( j = 0 ; j < ___id->countN; j++ )
    {
      computedValue += (___id->Numerator[j] * ___id->___in1_history.data[(10 + ((inHisIndex + 1) % 10) + ___id->___in1_history.pos) % 10]);
      inHisIndex--;
    }
    for ( j = 1 ; j < ___id->countD; j++ )
    {
      computedValue -= (___id->Denominator[j] * ___id->___out1_history.data[(10 + ((-j + 1) % 10) + ___id->___out1_history.pos) % 10]);
    }
    (*out1) = computedValue / ___id->Denominator[0];
  }
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 10] = in1;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 10] = (*out1);
  
  
}

/* 
 * Execution function for block DiscreteZeroPole
 */
void  Cla_Discrete____DiscreteZeroPole_execute(Cla_Discrete____DiscreteZeroPole_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  uint8_t j = 0;
  double computedValue = 0.0;
  if ( ___id->countD == ___id->countN ) 
  {
    for ( j = 1 ; j < ___id->countN; j++ )
    {
      computedValue += (___id->Numerator[j] * ___id->___in1_history.data[(10 + ((-(j) + 1) % 10) + ___id->___in1_history.pos) % 10]);
    }
    for ( j = 1 ; j < ___id->countD; j++ )
    {
      computedValue -= (___id->Denominator[j] * ___id->___out1_history.data[(10 + ((-j + 1) % 10) + ___id->___out1_history.pos) % 10]);
    }
    (*out1) = ((computedValue + (___id->Numerator[0] * in1)) / ___id->Denominator[0]) * ___id->Gain;
  } else
  {
    uint8_t inHisIndex = (___id->countN - ___id->countD);
    for ( j = 0 ; j < ___id->countN; j++ )
    {
      computedValue += (___id->Numerator[j] * ___id->___in1_history.data[(10 + (((inHisIndex) + 1) % 10) + ___id->___in1_history.pos) % 10]);
      inHisIndex--;
    }
    for ( j = 1 ; j < ___id->countD; j++ )
    {
      computedValue -= (___id->Denominator[j] * ___id->___out1_history.data[(10 + ((-j + 1) % 10) + ___id->___out1_history.pos) % 10]);
    }
    (*out1) = (computedValue * ___id->Gain) / ___id->Denominator[0];
  }
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 10] = in1;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 10] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorICInt
 */
void  Cla_Discrete____IntegratorICInt_execute(Cla_Discrete____IntegratorICInt_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], ___id->InitialCondition, ___id->prevTime, ___SimulationRuntime_simTime, false, INFINITY, -INFINITY);
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorICExt
 */
void  Cla_Discrete____IntegratorICExt_execute(Cla_Discrete____IntegratorICExt_data_t *___id, double in1_dataInput, double in2_x0, double *out1) 
{
  
  
  
  
  
  (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], in2_x0, ___id->prevTime, ___SimulationRuntime_simTime, false, INFINITY, -INFINITY);
  ___id->prevTime = ___SimulationRuntime_simTime;
  
  ___id->___in1_dataInput_history.data[(++___id->___in1_dataInput_history.pos) % 1] = in1_dataInput;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorICIntReset
 */
void  Cla_Discrete____IntegratorICIntReset_execute(Cla_Discrete____IntegratorICIntReset_data_t *___id, double in1_dataInput, double in2_reset, double *out1) 
{
  
  
  
  
  
  
  if ( Cla_Discrete_ifReset(___id->ExternalReset, in1_dataInput, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], (in2_reset != 0.0) ? (true) : (false)) ) 
  {
    (*out1) = ___id->InitialCondition;
  } else
  {
    (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], ___id->InitialCondition, ___id->prevTime, ___SimulationRuntime_simTime, (in2_reset != 0.0) ? (true) : (false), INFINITY, -INFINITY);
  }
  
  ___id->___in1_dataInput_history.data[(++___id->___in1_dataInput_history.pos) % 1] = in1_dataInput;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorICExtReset
 */
void  Cla_Discrete____IntegratorICExtReset_execute(Cla_Discrete____IntegratorICExtReset_data_t *___id, double in1_dataInput, double in2_reset, double in3_x0, double *out1) 
{
  
  
  
  
  
  if ( Cla_Discrete_ifReset(___id->ExternalReset, in1_dataInput, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], (in2_reset != 0.0) ? (true) : (false)) ) 
  {
    (*out1) = in3_x0;
  } else
  {
    (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], in3_x0, ___id->prevTime, ___SimulationRuntime_simTime, (in2_reset != 0.0) ? (true) : (false), INFINITY, -INFINITY);
  }
  
  ___id->___in1_dataInput_history.data[(++___id->___in1_dataInput_history.pos) % 1] = in1_dataInput;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorLimICInt
 */
void  Cla_Discrete____IntegratorLimICInt_execute(Cla_Discrete____IntegratorLimICInt_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], ___id->InitialCondition, ___id->prevTime, ___SimulationRuntime_simTime, false, ___id->UpperSaturationLimit, ___id->LowerSaturationLimit);
  
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorLimICExt
 */
void  Cla_Discrete____IntegratorLimICExt_execute(Cla_Discrete____IntegratorLimICExt_data_t *___id, double in1_dataInput, double in2_x0, double *out1) 
{
  
  
  
  
  
  (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], in2_x0, ___id->prevTime, ___SimulationRuntime_simTime, false, ___id->UpperSaturationLimit, ___id->LowerSaturationLimit);
  ___id->prevTime = ___SimulationRuntime_simTime;
  
  ___id->___in1_dataInput_history.data[(++___id->___in1_dataInput_history.pos) % 1] = in1_dataInput;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorLimICIntReset
 */
void  Cla_Discrete____IntegratorLimICIntReset_execute(Cla_Discrete____IntegratorLimICIntReset_data_t *___id, double in1_dataInput, double in2_reset, double *out1) 
{
  
  
  
  
  
  if ( Cla_Discrete_ifReset(___id->ExternalReset, in1_dataInput, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], (in2_reset != 0.0) ? (true) : (false)) ) 
  {
    (*out1) = ___id->InitialCondition;
  } else
  {
    (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], ___id->InitialCondition, ___id->prevTime, ___SimulationRuntime_simTime, (in2_reset != 0.0) ? (true) : (false), ___id->UpperSaturationLimit, ___id->LowerSaturationLimit);
  }
  
  ___id->___in1_dataInput_history.data[(++___id->___in1_dataInput_history.pos) % 1] = in1_dataInput;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block IntegratorLimICExtReset
 */
void  Cla_Discrete____IntegratorLimICExtReset_execute(Cla_Discrete____IntegratorLimICExtReset_data_t *___id, double in1_dataInput, double in2_reset, double in3_x0, double *out1) 
{
  
  
  
  
  
  if ( Cla_Discrete_ifReset(___id->ExternalReset, in1_dataInput, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], (in2_reset != 0.0) ? (true) : (false)) ) 
  {
    (*out1) = in3_x0;
  } else
  {
    (*out1) = Cla_Discrete_IntegratorOutput(___id->gainval, ___id->___simIncr, ___id->___in1_dataInput_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_dataInput_history.pos) % 1], ___id->___out1_history.data[(1 + ((-1 + 1) % 1) + ___id->___out1_history.pos) % 1], in3_x0, ___id->prevTime, ___SimulationRuntime_simTime, (in2_reset != 0.0) ? (true) : (false), ___id->UpperSaturationLimit, ___id->LowerSaturationLimit);
  }
  
  ___id->___in1_dataInput_history.data[(++___id->___in1_dataInput_history.pos) % 1] = in1_dataInput;
  
  ___id->___out1_history.data[(++___id->___out1_history.pos) % 1] = (*out1);
  
  
}

/* 
 * Execution function for block Derivative
 */
void  Cla_Discrete____Derivative_execute(Cla_Discrete____Derivative_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = ((in1 - ___id->___in1_history.data[(1 + ((-1 + 1) % 1) + ___id->___in1_history.pos) % 1]) / ___id->___simIncr);
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
  
  
  
}

/* 
 * Execution function for block ZeroOrderHold
 */
void  Cla_Discrete____ZeroOrderHold_execute(void *___nothing, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = in1;
  
  
  
  
}

/* 
 * Execution function for block TappedDelay
 */
void  Cla_Discrete____TappedDelay_execute(Cla_Discrete____TappedDelay_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = 0.0;
  
  
  
  
}

/* 
 * Execution function for block DiscreteStateSpace
 */
void  Cla_Discrete____DiscreteStateSpace_execute(Cla_Discrete____DiscreteStateSpace_data_t *___id, double in1, double *out1) 
{
  
  
  
  
  
  (*out1) = 0.0;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_execute(Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Execution function for block __delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out) 
{
  
  
  
  
  
  (*out) = ___id->delayedValue;
  
  
  
  
}

/* 
 * Update function for block Memory
 */
void  Cla_Discrete____Memory_update(Cla_Discrete____Memory_data_t *___id, double in1) 
{
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
}

/* 
 * Update function for block UnitDelay
 */
void  Cla_Discrete____UnitDelay_update(Cla_Discrete____UnitDelay_data_t *___id, double in1) 
{
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
}

/* 
 * Update function for block IntegerDelay
 */
void  Cla_Discrete____IntegerDelay_update(Cla_Discrete____IntegerDelay_data_t *___id, double in1) 
{
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 10] = in1;
}

/* 
 * Update function for block IntegratorICInt
 */
void  Cla_Discrete____IntegratorICInt_update(Cla_Discrete____IntegratorICInt_data_t *___id, double in1) 
{
  ___id->prevTime = ___SimulationRuntime_simTime;
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
}

/* 
 * Update function for block IntegratorLimICInt
 */
void  Cla_Discrete____IntegratorLimICInt_update(Cla_Discrete____IntegratorLimICInt_data_t *___id, double in1) 
{
  ___id->prevTime = ___SimulationRuntime_simTime;
  
  ___id->___in1_history.data[(++___id->___in1_history.pos) % 1] = in1;
}

/* 
 * Update function for block __delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

/* 
 * Update function for block __delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

/* 
 * Update function for block __delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

/* 
 * Update function for block __delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

/* 
 * Update function for block __delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_update(Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

/* 
 * Update function for block __delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

/* 
 * Update function for block __delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

/* 
 * Update function for block __delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
void  Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in) 
{
  ___id->delayedValue = in;
}

