#ifndef CLA_OPERATORS_H
#define CLA_OPERATORS_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

#define CLA_OPERATORS____RO_LessThan_execute(in1,in2)((in1 < in2) ? (true) : (false))
#define CLA_OPERATORS____RO_LessThanOrEqualTo_execute(in1,in2)((in1 <= in2) ? (true) : (false))
#define CLA_OPERATORS____RO_EqualTo_execute(in1,in2)((in1 == in2) ? (true) : (false))
#define CLA_OPERATORS____RO_NotEqualTo_execute(in1,in2)(((in1 != in2)) ? (true) : (false))
#define CLA_OPERATORS____RO_GreaterThanOrEqualTo_execute(in1,in2)((in1 >= in2) ? (true) : (false))
#define CLA_OPERATORS____RO_GreaterThan_execute(in1,in2)((in1 > in2) ? (true) : (false))
#define CLA_OPERATORS____UnaryMinus_execute(in1)(-in1)
typedef struct Cla_Operators____CtC_LessThan_data Cla_Operators____CtC_LessThan_data_t;
/* 
 * instance data for block CtC_LessThan
 */
struct Cla_Operators____CtC_LessThan_data {
  double ConstantValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____CtC_LessThanEqualTo_data Cla_Operators____CtC_LessThanEqualTo_data_t;
/* 
 * instance data for block CtC_LessThanEqualTo
 */
struct Cla_Operators____CtC_LessThanEqualTo_data {
  double ConstantValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____CtC_EqualTo_data Cla_Operators____CtC_EqualTo_data_t;
/* 
 * instance data for block CtC_EqualTo
 */
struct Cla_Operators____CtC_EqualTo_data {
  double ConstantValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____CtC_NotEqualTo_data Cla_Operators____CtC_NotEqualTo_data_t;
/* 
 * instance data for block CtC_NotEqualTo
 */
struct Cla_Operators____CtC_NotEqualTo_data {
  double ConstantValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____CtC_GreaterThanEqualTo_data Cla_Operators____CtC_GreaterThanEqualTo_data_t;
/* 
 * instance data for block CtC_GreaterThanEqualTo
 */
struct Cla_Operators____CtC_GreaterThanEqualTo_data {
  double ConstantValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____CtC_GreaterThan_data Cla_Operators____CtC_GreaterThan_data_t;
/* 
 * instance data for block CtC_GreaterThan
 */
struct Cla_Operators____CtC_GreaterThan_data {
  double ConstantValue;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____Sum_data Cla_Operators____Sum_data_t;
/* 
 * instance data for block Sum
 */
struct Cla_Operators____Sum_data {
  bool __preconditionFailed_Atleast2Inputs;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____Gain_data Cla_Operators____Gain_data_t;
/* 
 * instance data for block Gain
 */
struct Cla_Operators____Gain_data {
  double Gain;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____Product_data Cla_Operators____Product_data_t;
/* 
 * instance data for block Product
 */
struct Cla_Operators____Product_data {
  bool __preconditionFailed_Atleast2inputs;
  bool __anyPreconditionFailed;
};

typedef struct Cla_Operators____Bias_data Cla_Operators____Bias_data_t;
/* 
 * instance data for block Bias
 */
struct Cla_Operators____Bias_data {
  double Bias;
  bool __anyPreconditionFailed;
};

void  Cla_Operators_PreCondErrors_Atleast2Connections_SumProduct(uint8_t ContractID, char *loc);

void  Cla_Operators____Sum_init(Cla_Operators____Sum_data_t *___id, uint8_t minus_connectionCount, uint8_t plus_connectionCount);

void  Cla_Operators____Product_init(Cla_Operators____Product_data_t *___id, uint8_t divide_connectionCount, uint8_t multiply_connectionCount);

void  Cla_Operators____LogicAND_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount);

void  Cla_Operators____LogicOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount);

void  Cla_Operators____LogicNAND_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount);

void  Cla_Operators____LogicNOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount);

void  Cla_Operators____LogicXOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount);

void  Cla_Operators____LogicXNOR_execute(void *___nothing, bool in[10], bool *out1, uint8_t in_connectionCount);

void  Cla_Operators____LogicNOT_execute(void *___nothing, bool in1, bool *out1);

void  Cla_Operators____CtC_LessThan_execute(Cla_Operators____CtC_LessThan_data_t *___id, double in1, bool *out1);

void  Cla_Operators____CtC_LessThanEqualTo_execute(Cla_Operators____CtC_LessThanEqualTo_data_t *___id, double in1, bool *out1);

void  Cla_Operators____CtC_EqualTo_execute(Cla_Operators____CtC_EqualTo_data_t *___id, double in1, bool *out1);

void  Cla_Operators____CtC_NotEqualTo_execute(Cla_Operators____CtC_NotEqualTo_data_t *___id, double in1, bool *out1);

void  Cla_Operators____CtC_GreaterThanEqualTo_execute(Cla_Operators____CtC_GreaterThanEqualTo_data_t *___id, double in1, bool *out1);

void  Cla_Operators____CtC_GreaterThan_execute(Cla_Operators____CtC_GreaterThan_data_t *___id, double in1, bool *out1);

void  Cla_Operators____Sum_execute(Cla_Operators____Sum_data_t *___id, double minus[10], double plus[10], double *out1, uint8_t minus_connectionCount, uint8_t plus_connectionCount);

void  Cla_Operators____Gain_execute(Cla_Operators____Gain_data_t *___id, double in1, double *out1);

void  Cla_Operators____Product_execute(Cla_Operators____Product_data_t *___id, double divide[10], double multiply[10], double *out1, uint8_t divide_connectionCount, uint8_t multiply_connectionCount);

void  Cla_Operators____Bias_execute(Cla_Operators____Bias_data_t *___id, double in1, double *out1);

void  Cla_Operators____Assignment_execute(void *___nothing, double in1_Y0, double in2_U, double *out1);

void  Cla_Operators____DotProduct_execute(void *___nothing, double in1, double in2, double *out1);

void  Cla_Operators____ProductofElements_execute(void *___nothing, double in1, double *out1);

void  Cla_Operators____SliderGain_execute(void *___nothing, double in1, double *out1);

void  Cla_Operators____Subtract_execute(void *___nothing, double in1, double in2, double *out1);

void  Cla_Operators____SumofElements_execute(void *___nothing, double in1, double *out1);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
