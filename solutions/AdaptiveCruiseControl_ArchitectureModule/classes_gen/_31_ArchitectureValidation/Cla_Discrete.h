#ifndef CLA_DISCRETE_H
#define CLA_DISCRETE_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>

#include "Cla_Operators.h"

#include "Cla_Sources.h"

#include <math.h>



#ifdef __cplusplus
extern "C" {
#endif

typedef struct Cla_Discrete____rb_DiscreteDifference_in1 Cla_Discrete____rb_DiscreteDifference_in1_t;
struct Cla_Discrete____rb_DiscreteDifference_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_DiscreteIIRFilter_in1 Cla_Discrete____rb_DiscreteIIRFilter_in1_t;
struct Cla_Discrete____rb_DiscreteIIRFilter_in1 {
  double data[9];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_DiscreteIIRFilter_out1 Cla_Discrete____rb_DiscreteIIRFilter_out1_t;
struct Cla_Discrete____rb_DiscreteIIRFilter_out1 {
  double data[9];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_Memory_in1 Cla_Discrete____rb_Memory_in1_t;
struct Cla_Discrete____rb_Memory_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_UnitDelay_in1 Cla_Discrete____rb_UnitDelay_in1_t;
struct Cla_Discrete____rb_UnitDelay_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegerDelay_in1 Cla_Discrete____rb_IntegerDelay_in1_t;
struct Cla_Discrete____rb_IntegerDelay_in1 {
  double data[10];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_DiscreteFIRfilter_in1 Cla_Discrete____rb_DiscreteFIRfilter_in1_t;
struct Cla_Discrete____rb_DiscreteFIRfilter_in1 {
  double data[10];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_TransferFcnFirstOrder_out1 Cla_Discrete____rb_TransferFcnFirstOrder_out1_t;
struct Cla_Discrete____rb_TransferFcnFirstOrder_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_TransferFcnRealZero_in1 Cla_Discrete____rb_TransferFcnRealZero_in1_t;
struct Cla_Discrete____rb_TransferFcnRealZero_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_TransferFcnLeadorLag_in1 Cla_Discrete____rb_TransferFcnLeadorLag_in1_t;
struct Cla_Discrete____rb_TransferFcnLeadorLag_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_TransferFcnLeadorLag_out1 Cla_Discrete____rb_TransferFcnLeadorLag_out1_t;
struct Cla_Discrete____rb_TransferFcnLeadorLag_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_DiscreteTransferFcn_in1 Cla_Discrete____rb_DiscreteTransferFcn_in1_t;
struct Cla_Discrete____rb_DiscreteTransferFcn_in1 {
  double data[10];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_DiscreteTransferFcn_out1 Cla_Discrete____rb_DiscreteTransferFcn_out1_t;
struct Cla_Discrete____rb_DiscreteTransferFcn_out1 {
  double data[10];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_DiscreteZeroPole_in1 Cla_Discrete____rb_DiscreteZeroPole_in1_t;
struct Cla_Discrete____rb_DiscreteZeroPole_in1 {
  double data[10];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_DiscreteZeroPole_out1 Cla_Discrete____rb_DiscreteZeroPole_out1_t;
struct Cla_Discrete____rb_DiscreteZeroPole_out1 {
  double data[10];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICInt_in1 Cla_Discrete____rb_IntegratorICInt_in1_t;
struct Cla_Discrete____rb_IntegratorICInt_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICInt_out1 Cla_Discrete____rb_IntegratorICInt_out1_t;
struct Cla_Discrete____rb_IntegratorICInt_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICExt_in1_dataInput Cla_Discrete____rb_IntegratorICExt_in1_dataInput_t;
struct Cla_Discrete____rb_IntegratorICExt_in1_dataInput {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICExt_out1 Cla_Discrete____rb_IntegratorICExt_out1_t;
struct Cla_Discrete____rb_IntegratorICExt_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICIntReset_in1_dataInput Cla_Discrete____rb_IntegratorICIntReset_in1_dataInput_t;
struct Cla_Discrete____rb_IntegratorICIntReset_in1_dataInput {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICIntReset_out1 Cla_Discrete____rb_IntegratorICIntReset_out1_t;
struct Cla_Discrete____rb_IntegratorICIntReset_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICExtReset_in1_dataInput Cla_Discrete____rb_IntegratorICExtReset_in1_dataInput_t;
struct Cla_Discrete____rb_IntegratorICExtReset_in1_dataInput {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorICExtReset_out1 Cla_Discrete____rb_IntegratorICExtReset_out1_t;
struct Cla_Discrete____rb_IntegratorICExtReset_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICInt_in1 Cla_Discrete____rb_IntegratorLimICInt_in1_t;
struct Cla_Discrete____rb_IntegratorLimICInt_in1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICInt_out1 Cla_Discrete____rb_IntegratorLimICInt_out1_t;
struct Cla_Discrete____rb_IntegratorLimICInt_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICExt_in1_dataInput Cla_Discrete____rb_IntegratorLimICExt_in1_dataInput_t;
struct Cla_Discrete____rb_IntegratorLimICExt_in1_dataInput {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICExt_out1 Cla_Discrete____rb_IntegratorLimICExt_out1_t;
struct Cla_Discrete____rb_IntegratorLimICExt_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICIntReset_in1_dataInput Cla_Discrete____rb_IntegratorLimICIntReset_in1_dataInput_t;
struct Cla_Discrete____rb_IntegratorLimICIntReset_in1_dataInput {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICIntReset_out1 Cla_Discrete____rb_IntegratorLimICIntReset_out1_t;
struct Cla_Discrete____rb_IntegratorLimICIntReset_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICExtReset_in1_dataInput Cla_Discrete____rb_IntegratorLimICExtReset_in1_dataInput_t;
struct Cla_Discrete____rb_IntegratorLimICExtReset_in1_dataInput {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_IntegratorLimICExtReset_out1 Cla_Discrete____rb_IntegratorLimICExtReset_out1_t;
struct Cla_Discrete____rb_IntegratorLimICExtReset_out1 {
  double data[1];
  uint8_t pos;
};

typedef struct Cla_Discrete____rb_Derivative_in1 Cla_Discrete____rb_Derivative_in1_t;
struct Cla_Discrete____rb_Derivative_in1 {
  double data[1];
  uint8_t pos;
};

typedef enum Cla_Discrete_PID_Reset Cla_Discrete_PID_Reset_t;
enum Cla_Discrete_PID_Reset{
  Cla_Discrete_PID_Reset__RISING,
  Cla_Discrete_PID_Reset__FALLING,
  Cla_Discrete_PID_Reset__EITHER,
  Cla_Discrete_PID_Reset__LEVEL
};

typedef enum Cla_Discrete_Integrator_Reset Cla_Discrete_Integrator_Reset_t;
enum Cla_Discrete_Integrator_Reset{
  Cla_Discrete_Integrator_Reset__RISING,
  Cla_Discrete_Integrator_Reset__FALLING,
  Cla_Discrete_Integrator_Reset__EITHER,
  Cla_Discrete_Integrator_Reset__LEVEL,
  Cla_Discrete_Integrator_Reset__SAMPLED_LEVEL
};

typedef struct Cla_Discrete_node Cla_Discrete_node_t;
struct Cla_Discrete_node {
  double coeff;
  int8_t power;
};

typedef struct Cla_Discrete_equation Cla_Discrete_equation_t;
struct Cla_Discrete_equation {
  Cla_Discrete_node_t nodes[11];
  uint8_t size;
};

#define CLA_DISCRETE______smartcon__FirstOrderHold__UnitDelay__out1__firstSum_minus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__FirstOrderHold__ZeroOrderHold__out1__firstSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__FirstOrderHold__ZeroOrderHold__out1__thirdSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__FirstOrderHold__firstSum_out1__pdt_multiply_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__FirstOrderHold__pdt_out1__thirdSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICInt__D_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Sum__plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICInt__P_out1__Sum__plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExt__D_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__finalSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExt__P_out1__finalSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExt__finalSum_out1__out1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExt__in2_I0__Integrator_in2_x0_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExt__in3_D0__Filter_in2_x0_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICIntReset__D_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__finalSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICIntReset__P_out1__finalSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExtReset__D_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__finalSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDControllerPIDParallelICExtReset__P_out1__finalSum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__DerivativeGain_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__FilterCoefficient_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__ProportionalGain_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__SetpointWeightingDerivative_out1__Sum3_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__SetpointWeightingProportional_out1__Sum1_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__Sum_out1__out1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__in1_ref__SetpointWeightingDerivative_in1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__in1_ref__SetpointWeightingProportional_in1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__in1_ref__Sum2_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__in2_dataInput__Sum1_minus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__in2_dataInput__Sum2_minus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICInt__in2_dataInput__Sum3_minus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__DerivativeGain_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__FilterCoefficient_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__ProportionalGain_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__SetpointWeightingDerivative_out1__Sum3_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__SetpointWeightingProportional_out1__Sum1_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__Sum_out1__out1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in1_ref__SetpointWeightingDerivative_in1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in1_ref__SetpointWeightingProportional_in1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in1_ref__Sum2_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in2_dataInput__Sum1_minus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in2_dataInput__Sum2_minus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in2_dataInput__Sum3_minus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in3_I0__Integrator_in2_x0_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExt__in4_D0__Filter_in2_x0_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICIntReset__DerivativeGain_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICIntReset__ProportionalGain_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICIntReset__SetpointWeightingDerivative_out1__Sum3_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICIntReset__SetpointWeightingProportional_out1__Sum1_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICIntReset__Sum_out1__out1_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExtReset__DerivativeGain_out1__SumD_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExtReset__ProportionalGain_out1__Sum_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExtReset__SetpointWeightingDerivative_out1__Sum3_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExtReset__SetpointWeightingProportional_out1__Sum1_plus_execute(in)((((double )(in))))
#define CLA_DISCRETE______smartcon__DiscretePIDController2DOFICExtReset__Sum_out1__out1_execute(in)((((double )(in))))
typedef struct Cla_Discrete____DiscreteDifference_data Cla_Discrete____DiscreteDifference_data_t;
/* 
 * instance data for block DiscreteDifference
 */
struct Cla_Discrete____DiscreteDifference_data {
  double vinit;
  Cla_Discrete____rb_DiscreteDifference_in1_t ___in1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____DiscreteIIRFilter_data Cla_Discrete____DiscreteIIRFilter_data_t;
/* 
 * instance data for block DiscreteIIRFilter
 */
struct Cla_Discrete____DiscreteIIRFilter_data {
  double Numerator[10];
  double Denominator[10];
  double InitialStates;
  uint8_t countN;
  uint8_t countD;
  Cla_Discrete____rb_DiscreteIIRFilter_in1_t ___in1_history;
  Cla_Discrete____rb_DiscreteIIRFilter_out1_t ___out1_history;
  bool __preconditionFailed_FilterOrder;
  bool __preconditionFailed_Denominator0;
  bool __preconditionFailed_NumDenCoeffMatch;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____Memory_data Cla_Discrete____Memory_data_t;
/* 
 * instance data for block Memory
 */
struct Cla_Discrete____Memory_data {
  double vinit;
  Cla_Discrete____rb_Memory_in1_t ___in1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____UnitDelay_data Cla_Discrete____UnitDelay_data_t;
/* 
 * instance data for block UnitDelay
 */
struct Cla_Discrete____UnitDelay_data {
  double X0;
  Cla_Discrete____rb_UnitDelay_in1_t ___in1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegerDelay_data Cla_Discrete____IntegerDelay_data_t;
/* 
 * instance data for block IntegerDelay
 */
struct Cla_Discrete____IntegerDelay_data {
  double vinit;
  uint8_t NumDelays;
  Cla_Discrete____rb_IntegerDelay_in1_t ___in1_history;
  bool __preconditionFailed_numdelayRange;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____DiscreteFIRfilter_data Cla_Discrete____DiscreteFIRfilter_data_t;
/* 
 * instance data for block DiscreteFIRfilter
 */
struct Cla_Discrete____DiscreteFIRfilter_data {
  double IC;
  double NumCoeffs[10];
  uint8_t count;
  Cla_Discrete____rb_DiscreteFIRfilter_in1_t ___in1_history;
  bool __preconditionFailed_FilterOrder;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____TransferFcnFirstOrder_data Cla_Discrete____TransferFcnFirstOrder_data_t;
/* 
 * instance data for block TransferFcnFirstOrder
 */
struct Cla_Discrete____TransferFcnFirstOrder_data {
  double PoleZ;
  double ICPrevOutput;
  Cla_Discrete____rb_TransferFcnFirstOrder_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____TransferFcnRealZero_data Cla_Discrete____TransferFcnRealZero_data_t;
/* 
 * instance data for block TransferFcnRealZero
 */
struct Cla_Discrete____TransferFcnRealZero_data {
  double ZeroZ;
  double ICPrevInput;
  Cla_Discrete____rb_TransferFcnRealZero_in1_t ___in1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____TransferFcnLeadorLag_data Cla_Discrete____TransferFcnLeadorLag_data_t;
/* 
 * instance data for block TransferFcnLeadorLag
 */
struct Cla_Discrete____TransferFcnLeadorLag_data {
  double PoleZ;
  double ZeroZ;
  double ICPrevInput;
  double ICPrevOutput;
  Cla_Discrete____rb_TransferFcnLeadorLag_in1_t ___in1_history;
  Cla_Discrete____rb_TransferFcnLeadorLag_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____DiscreteTransferFcn_data Cla_Discrete____DiscreteTransferFcn_data_t;
/* 
 * instance data for block DiscreteTransferFcn
 */
struct Cla_Discrete____DiscreteTransferFcn_data {
  double Numerator[10];
  double Denominator[10];
  double InitialStates;
  uint8_t countN;
  uint8_t countD;
  Cla_Discrete____rb_DiscreteTransferFcn_in1_t ___in1_history;
  Cla_Discrete____rb_DiscreteTransferFcn_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____DiscreteZeroPole_data Cla_Discrete____DiscreteZeroPole_data_t;
/* 
 * instance data for block DiscreteZeroPole
 */
struct Cla_Discrete____DiscreteZeroPole_data {
  double Zeros[10];
  double Poles[10];
  double Gain;
  uint8_t countN;
  uint8_t countD;
  double Numerator[11];
  double Denominator[11];
  Cla_Discrete____rb_DiscreteZeroPole_in1_t ___in1_history;
  Cla_Discrete____rb_DiscreteZeroPole_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorICInt_data Cla_Discrete____IntegratorICInt_data_t;
/* 
 * instance data for block IntegratorICInt
 */
struct Cla_Discrete____IntegratorICInt_data {
  double gainval;
  double InitialCondition;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorICInt_in1_t ___in1_history;
  Cla_Discrete____rb_IntegratorICInt_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorICExt_data Cla_Discrete____IntegratorICExt_data_t;
/* 
 * instance data for block IntegratorICExt
 */
struct Cla_Discrete____IntegratorICExt_data {
  double gainval;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorICExt_in1_dataInput_t ___in1_dataInput_history;
  Cla_Discrete____rb_IntegratorICExt_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorICIntReset_data Cla_Discrete____IntegratorICIntReset_data_t;
/* 
 * instance data for block IntegratorICIntReset
 */
struct Cla_Discrete____IntegratorICIntReset_data {
  double gainval;
  double InitialCondition;
  Cla_Discrete_Integrator_Reset_t ExternalReset;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorICIntReset_in1_dataInput_t ___in1_dataInput_history;
  Cla_Discrete____rb_IntegratorICIntReset_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorICExtReset_data Cla_Discrete____IntegratorICExtReset_data_t;
/* 
 * instance data for block IntegratorICExtReset
 */
struct Cla_Discrete____IntegratorICExtReset_data {
  double gainval;
  Cla_Discrete_Integrator_Reset_t ExternalReset;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorICExtReset_in1_dataInput_t ___in1_dataInput_history;
  Cla_Discrete____rb_IntegratorICExtReset_out1_t ___out1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorLimICInt_data Cla_Discrete____IntegratorLimICInt_data_t;
/* 
 * instance data for block IntegratorLimICInt
 */
struct Cla_Discrete____IntegratorLimICInt_data {
  double gainval;
  double InitialCondition;
  double UpperSaturationLimit;
  double LowerSaturationLimit;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorLimICInt_in1_t ___in1_history;
  Cla_Discrete____rb_IntegratorLimICInt_out1_t ___out1_history;
  bool __preconditionFailed_LimitViolation;
  bool __preconditionFailed_ImproperLimits;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorLimICExt_data Cla_Discrete____IntegratorLimICExt_data_t;
/* 
 * instance data for block IntegratorLimICExt
 */
struct Cla_Discrete____IntegratorLimICExt_data {
  double gainval;
  double UpperSaturationLimit;
  double LowerSaturationLimit;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorLimICExt_in1_dataInput_t ___in1_dataInput_history;
  Cla_Discrete____rb_IntegratorLimICExt_out1_t ___out1_history;
  bool __preconditionFailed_ImproperLimits;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorLimICIntReset_data Cla_Discrete____IntegratorLimICIntReset_data_t;
/* 
 * instance data for block IntegratorLimICIntReset
 */
struct Cla_Discrete____IntegratorLimICIntReset_data {
  double gainval;
  double InitialCondition;
  double UpperSaturationLimit;
  double LowerSaturationLimit;
  Cla_Discrete_Integrator_Reset_t ExternalReset;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorLimICIntReset_in1_dataInput_t ___in1_dataInput_history;
  Cla_Discrete____rb_IntegratorLimICIntReset_out1_t ___out1_history;
  bool __preconditionFailed_LimitViolation;
  bool __preconditionFailed_ImproperLimits;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____IntegratorLimICExtReset_data Cla_Discrete____IntegratorLimICExtReset_data_t;
/* 
 * instance data for block IntegratorLimICExtReset
 */
struct Cla_Discrete____IntegratorLimICExtReset_data {
  double gainval;
  double UpperSaturationLimit;
  double LowerSaturationLimit;
  Cla_Discrete_Integrator_Reset_t ExternalReset;
  double ___simIncr;
  double prevTime;
  Cla_Discrete____rb_IntegratorLimICExtReset_in1_dataInput_t ___in1_dataInput_history;
  Cla_Discrete____rb_IntegratorLimICExtReset_out1_t ___out1_history;
  bool __preconditionFailed_ImproperLimits;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____Derivative_data Cla_Discrete____Derivative_data_t;
/* 
 * instance data for block Derivative
 */
struct Cla_Discrete____Derivative_data {
  double IC;
  double ___simIncr;
  Cla_Discrete____rb_Derivative_in1_t ___in1_history;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____TappedDelay_data Cla_Discrete____TappedDelay_data_t;
/* 
 * instance data for block TappedDelay
 */
struct Cla_Discrete____TappedDelay_data {
  double vinit;
  double NumDelays;
  double ___simIncr;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete____DiscreteStateSpace_data Cla_Discrete____DiscreteStateSpace_data_t;
/* 
 * instance data for block DiscreteStateSpace
 */
struct Cla_Discrete____DiscreteStateSpace_data {
  double A;
  double B;
  double C;
  double D;
  double X0;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data_t;
/* 
 * instance data for block __delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1
 */
struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t;
/* 
 * instance data for block __delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t;
/* 
 * instance data for block __delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t;
/* 
 * instance data for block __delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
struct Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data_t;
/* 
 * instance data for block __delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1
 */
struct Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t;
/* 
 * instance data for block __delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput
 */
struct Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t;
/* 
 * instance data for block __delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
struct Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t;
/* 
 * instance data for block __delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput
 */
struct Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data {
  double delayInitVal;
  double delayedValue;
  bool __anyPreconditionFailed;
};

void  Cla_Discrete_ContractFailures_contractFailed(uint8_t contractID, char *loc);

double  Cla_Discrete_IntegratorOutput(double gainval, double sampletime, double prevIn, double prevOut, double initcond, double prevTime, double curTime, bool resetSig, double UpperSaturationLimit, double LowerSaturationLimit);

uint8_t  Cla_Discrete_noOfCoefficients(double Array[10]);

uint8_t  Cla_Discrete_findTransferFuncCoeffs(double Array[10], double arrayDes[11]);

Cla_Discrete_node_t  Cla_Discrete_MultiplyTwoNodes(Cla_Discrete_node_t one, Cla_Discrete_node_t two);

Cla_Discrete_equation_t  Cla_Discrete_multiplyEquations(Cla_Discrete_equation_t one, Cla_Discrete_equation_t two, int8_t maxPower);

void  Cla_Discrete____DiscreteDifference_init(Cla_Discrete____DiscreteDifference_data_t *___id);

void  Cla_Discrete____DiscreteIIRFilter_init(Cla_Discrete____DiscreteIIRFilter_data_t *___id);

void  Cla_Discrete____Memory_init(Cla_Discrete____Memory_data_t *___id);

void  Cla_Discrete____UnitDelay_init(Cla_Discrete____UnitDelay_data_t *___id);

void  Cla_Discrete____IntegerDelay_init(Cla_Discrete____IntegerDelay_data_t *___id);

void  Cla_Discrete____DiscreteFIRfilter_init(Cla_Discrete____DiscreteFIRfilter_data_t *___id);

void  Cla_Discrete____TransferFcnFirstOrder_init(Cla_Discrete____TransferFcnFirstOrder_data_t *___id);

void  Cla_Discrete____TransferFcnRealZero_init(Cla_Discrete____TransferFcnRealZero_data_t *___id);

void  Cla_Discrete____TransferFcnLeadorLag_init(Cla_Discrete____TransferFcnLeadorLag_data_t *___id);

void  Cla_Discrete____DiscreteTransferFcn_init(Cla_Discrete____DiscreteTransferFcn_data_t *___id);

void  Cla_Discrete____DiscreteZeroPole_init(Cla_Discrete____DiscreteZeroPole_data_t *___id);

void  Cla_Discrete____IntegratorICInt_init(Cla_Discrete____IntegratorICInt_data_t *___id);

void  Cla_Discrete____IntegratorICExt_init(Cla_Discrete____IntegratorICExt_data_t *___id);

void  Cla_Discrete____IntegratorICIntReset_init(Cla_Discrete____IntegratorICIntReset_data_t *___id);

void  Cla_Discrete____IntegratorICExtReset_init(Cla_Discrete____IntegratorICExtReset_data_t *___id);

void  Cla_Discrete____IntegratorLimICInt_init(Cla_Discrete____IntegratorLimICInt_data_t *___id);

void  Cla_Discrete____IntegratorLimICExt_init(Cla_Discrete____IntegratorLimICExt_data_t *___id);

void  Cla_Discrete____IntegratorLimICIntReset_init(Cla_Discrete____IntegratorLimICIntReset_data_t *___id);

void  Cla_Discrete____IntegratorLimICExtReset_init(Cla_Discrete____IntegratorLimICExtReset_data_t *___id);

void  Cla_Discrete____Derivative_init(Cla_Discrete____Derivative_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_init(Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id);

void  Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_init(Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id);

void  Cla_Discrete____DiscreteDifference_execute(Cla_Discrete____DiscreteDifference_data_t *___id, double in1, double *out);

void  Cla_Discrete____DiscreteIIRFilter_execute(Cla_Discrete____DiscreteIIRFilter_data_t *___id, double in1, double *out1);

void  Cla_Discrete____Memory_execute(Cla_Discrete____Memory_data_t *___id, double in1, double *out1);

void  Cla_Discrete____UnitDelay_execute(Cla_Discrete____UnitDelay_data_t *___id, double in1, double *out1);

void  Cla_Discrete____IntegerDelay_execute(Cla_Discrete____IntegerDelay_data_t *___id, double in1, double *out1);

void  Cla_Discrete____DiscreteFIRfilter_execute(Cla_Discrete____DiscreteFIRfilter_data_t *___id, double in1, double *out1);

void  Cla_Discrete____TransferFcnFirstOrder_execute(Cla_Discrete____TransferFcnFirstOrder_data_t *___id, double in1, double *out1);

void  Cla_Discrete____TransferFcnRealZero_execute(Cla_Discrete____TransferFcnRealZero_data_t *___id, double in1, double *out1);

void  Cla_Discrete____TransferFcnLeadorLag_execute(Cla_Discrete____TransferFcnLeadorLag_data_t *___id, double in1, double *out1);

void  Cla_Discrete____DiscreteTransferFcn_execute(Cla_Discrete____DiscreteTransferFcn_data_t *___id, double in1, double *out1);

void  Cla_Discrete____DiscreteZeroPole_execute(Cla_Discrete____DiscreteZeroPole_data_t *___id, double in1, double *out1);

void  Cla_Discrete____IntegratorICInt_execute(Cla_Discrete____IntegratorICInt_data_t *___id, double in1, double *out1);

void  Cla_Discrete____IntegratorICExt_execute(Cla_Discrete____IntegratorICExt_data_t *___id, double in1_dataInput, double in2_x0, double *out1);

void  Cla_Discrete____IntegratorICIntReset_execute(Cla_Discrete____IntegratorICIntReset_data_t *___id, double in1_dataInput, double in2_reset, double *out1);

void  Cla_Discrete____IntegratorICExtReset_execute(Cla_Discrete____IntegratorICExtReset_data_t *___id, double in1_dataInput, double in2_reset, double in3_x0, double *out1);

void  Cla_Discrete____IntegratorLimICInt_execute(Cla_Discrete____IntegratorLimICInt_data_t *___id, double in1, double *out1);

void  Cla_Discrete____IntegratorLimICExt_execute(Cla_Discrete____IntegratorLimICExt_data_t *___id, double in1_dataInput, double in2_x0, double *out1);

void  Cla_Discrete____IntegratorLimICIntReset_execute(Cla_Discrete____IntegratorLimICIntReset_data_t *___id, double in1_dataInput, double in2_reset, double *out1);

void  Cla_Discrete____IntegratorLimICExtReset_execute(Cla_Discrete____IntegratorLimICExtReset_data_t *___id, double in1_dataInput, double in2_reset, double in3_x0, double *out1);

void  Cla_Discrete____Derivative_execute(Cla_Discrete____Derivative_data_t *___id, double in1, double *out1);

void  Cla_Discrete____ZeroOrderHold_execute(void *___nothing, double in1, double *out1);

void  Cla_Discrete____TappedDelay_execute(Cla_Discrete____TappedDelay_data_t *___id, double in1, double *out1);

void  Cla_Discrete____DiscreteStateSpace_execute(Cla_Discrete____DiscreteStateSpace_data_t *___id, double in1, double *out1);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in, double *out);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out);

void  Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_execute(Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in, double *out);

void  Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out);

void  Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out);

void  Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_execute(Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in, double *out);

void  Cla_Discrete____Memory_update(Cla_Discrete____Memory_data_t *___id, double in1);

void  Cla_Discrete____UnitDelay_update(Cla_Discrete____UnitDelay_data_t *___id, double in1);

void  Cla_Discrete____IntegerDelay_update(Cla_Discrete____IntegerDelay_data_t *___id, double in1);

void  Cla_Discrete____IntegratorICInt_update(Cla_Discrete____IntegratorICInt_data_t *___id, double in1);

void  Cla_Discrete____IntegratorLimICInt_update(Cla_Discrete____IntegratorLimICInt_data_t *___id, double in1);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in);

void  Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDControllerPIDParallelICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in);

void  Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_update(Cla_Discrete______delay_DiscretePIDController2DOFICInt__FilterCoefficient_out1__Filter_in1_data_t *___id, double in);

void  Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDController2DOFICExt__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in);

void  Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDController2DOFICIntReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in);

void  Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_update(Cla_Discrete______delay_DiscretePIDController2DOFICExtReset__FilterCoefficient_out1__Filter_in1_dataInput_data_t *___id, double in);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
