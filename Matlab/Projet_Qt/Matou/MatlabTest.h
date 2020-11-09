//
// MATLAB Compiler: 6.0 (R2015a)
// Date: Mon Oct 26 11:00:49 2020
// Arguments: "-B" "macro_default" "-W" "cpplib:MatlabTest" "-T" "link:lib"
// "-d" "C:\Users\alexandre.duhant\Desktop\MatlabTest\for_testing" "-v"
// "C:\Users\alexandre.duhant\Desktop\additionFromStruct.m"
// "C:\Users\alexandre.duhant\Desktop\addTwoInt.m"
// "C:\Users\alexandre.duhant\Desktop\getString.m"
// "C:\Users\alexandre.duhant\Desktop\getStruct.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\additionFromStruct.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\addTwoInt.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\getString.m" "-a"
// "C:\Users\alexandre.duhant\Desktop\getStruct.m" 
//

#ifndef __MatlabTest_h
#define __MatlabTest_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
//#include "mclmcrrt.h"
//#include "mclcppclass.h"
#include "C:\Program Files (x86)\MATLAB\MATLAB Runtime\v85\extern\include\mclmcrrt.h"
#include "C:\Program Files (x86)\MATLAB\MATLAB Runtime\v85\extern\include\mclcppclass.h"
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

#ifdef EXPORTING_MatlabTest
#define PUBLIC_MatlabTest_C_API __global
#else
#define PUBLIC_MatlabTest_C_API /* No import statement needed. */
#endif

#define LIB_MatlabTest_C_API PUBLIC_MatlabTest_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_MatlabTest
#define PUBLIC_MatlabTest_C_API __declspec(dllexport)
#else
#define PUBLIC_MatlabTest_C_API __declspec(dllimport)
#endif

#define LIB_MatlabTest_C_API PUBLIC_MatlabTest_C_API


#else

#define LIB_MatlabTest_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_MatlabTest_C_API 
#define LIB_MatlabTest_C_API /* No special import/export declaration */
#endif

extern LIB_MatlabTest_C_API 
bool MW_CALL_CONV MatlabTestInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_MatlabTest_C_API 
bool MW_CALL_CONV MatlabTestInitialize(void);

extern LIB_MatlabTest_C_API 
void MW_CALL_CONV MatlabTestTerminate(void);



extern LIB_MatlabTest_C_API 
void MW_CALL_CONV MatlabTestPrintStackTrace(void);

extern LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxAdditionFromStruct(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                        *prhs[]);

extern LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxAddTwoInt(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxGetString(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxGetStruct(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_MatlabTest
#define PUBLIC_MatlabTest_CPP_API __declspec(dllexport)
#else
#define PUBLIC_MatlabTest_CPP_API __declspec(dllimport)
#endif

#define LIB_MatlabTest_CPP_API PUBLIC_MatlabTest_CPP_API

#else

#if !defined(LIB_MatlabTest_CPP_API)
#if defined(LIB_MatlabTest_C_API)
#define LIB_MatlabTest_CPP_API LIB_MatlabTest_C_API
#else
#define LIB_MatlabTest_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_MatlabTest_CPP_API void MW_CALL_CONV additionFromStruct(int nargout, mwArray& somme, const mwArray& struct0, const mwArray& b);

extern LIB_MatlabTest_CPP_API void MW_CALL_CONV addTwoInt(int nargout, mwArray& resultat, const mwArray& a, const mwArray& b);

extern LIB_MatlabTest_CPP_API void MW_CALL_CONV getString(int nargout, mwArray& stringOut);

extern LIB_MatlabTest_CPP_API void MW_CALL_CONV getStruct(int nargout, mwArray& struct0);

#endif
#endif
