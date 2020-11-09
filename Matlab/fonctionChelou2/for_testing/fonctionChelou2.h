//
// MATLAB Compiler: 6.0 (R2015a)
// Date: Tue Nov 03 13:27:09 2020
// Arguments: "-B" "macro_default" "-W" "cpplib:fonctionChelou2" "-T"
// "link:lib" "-d"
// "C:\Users\alexandre.duhant\Desktop\fonctionChelou2\for_testing" "-v"
// "C:\Users\alexandre.duhant\Desktop\FonctionChelou.m"
// "C:\Users\alexandre.duhant\Desktop\GetInversBool.m"
// "C:\Users\alexandre.duhant\Desktop\GetMatrix.m"
// "C:\Users\alexandre.duhant\Desktop\IsMatrix.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\FonctionChelou.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\GetInversBool.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\GetMatrix.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\IsMatrix.m" 
//

#ifndef __fonctionChelou2_h
#define __fonctionChelou2_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_fonctionChelou2
#define PUBLIC_fonctionChelou2_C_API __global
#else
#define PUBLIC_fonctionChelou2_C_API /* No import statement needed. */
#endif

#define LIB_fonctionChelou2_C_API PUBLIC_fonctionChelou2_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_fonctionChelou2
#define PUBLIC_fonctionChelou2_C_API __declspec(dllexport)
#else
#define PUBLIC_fonctionChelou2_C_API __declspec(dllimport)
#endif

#define LIB_fonctionChelou2_C_API PUBLIC_fonctionChelou2_C_API


#else

#define LIB_fonctionChelou2_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_fonctionChelou2_C_API 
#define LIB_fonctionChelou2_C_API /* No special import/export declaration */
#endif

extern LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV fonctionChelou2InitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV fonctionChelou2Initialize(void);

extern LIB_fonctionChelou2_C_API 
void MW_CALL_CONV fonctionChelou2Terminate(void);



extern LIB_fonctionChelou2_C_API 
void MW_CALL_CONV fonctionChelou2PrintStackTrace(void);

extern LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxFonctionChelou(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxGetInversBool(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxGetMatrix(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxIsMatrix(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_fonctionChelou2
#define PUBLIC_fonctionChelou2_CPP_API __declspec(dllexport)
#else
#define PUBLIC_fonctionChelou2_CPP_API __declspec(dllimport)
#endif

#define LIB_fonctionChelou2_CPP_API PUBLIC_fonctionChelou2_CPP_API

#else

#if !defined(LIB_fonctionChelou2_CPP_API)
#if defined(LIB_fonctionChelou2_C_API)
#define LIB_fonctionChelou2_CPP_API LIB_fonctionChelou2_C_API
#else
#define LIB_fonctionChelou2_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_fonctionChelou2_CPP_API void MW_CALL_CONV FonctionChelou(int nargout, mwArray& Result);

extern LIB_fonctionChelou2_CPP_API void MW_CALL_CONV GetInversBool(int nargout, mwArray& notVar, const mwArray& var);

extern LIB_fonctionChelou2_CPP_API void MW_CALL_CONV GetMatrix(int nargout, mwArray& Mat);

extern LIB_fonctionChelou2_CPP_API void MW_CALL_CONV IsMatrix(int nargout, mwArray& Ok, const mwArray& A);

#endif
#endif
