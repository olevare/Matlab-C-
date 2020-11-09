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

#include <stdio.h>
#define EXPORTING_MatlabTest 1
#include "MatlabTest.h"

static HMCRINSTANCE _mcr_inst = NULL;


#if defined( _MSC_VER) || defined(__BORLANDC__) || defined(__WATCOMC__) || defined(__LCC__)
#ifdef __LCC__
#undef EXTERN_C
#endif
#include <windows.h>

static char path_to_dll[_MAX_PATH];

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, void *pv)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        if (GetModuleFileName(hInstance, path_to_dll, _MAX_PATH) == 0)
            return FALSE;
    }
    else if (dwReason == DLL_PROCESS_DETACH)
    {
    }
    return TRUE;
}
#endif
#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultPrintHandler(const char *s)
{
  return mclWrite(1 /* stdout */, s, sizeof(char)*strlen(s));
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultErrorHandler(const char *s)
{
  int written = 0;
  size_t len = 0;
  len = strlen(s);
  written = mclWrite(2 /* stderr */, s, sizeof(char)*len);
  if (len > 0 && s[ len-1 ] != '\n')
    written += mclWrite(2 /* stderr */, "\n", sizeof(char));
  return written;
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_MatlabTest_C_API
#define LIB_MatlabTest_C_API /* No special import/export declaration */
#endif

LIB_MatlabTest_C_API 
bool MW_CALL_CONV MatlabTestInitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler)
{
    int bResult = 0;
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
  if (!GetModuleFileName(GetModuleHandle("MatlabTest"), path_to_dll, _MAX_PATH))
    return false;
    {
        mclCtfStream ctfStream = 
            mclGetEmbeddedCtfStream(path_to_dll);
        if (ctfStream) {
            bResult = mclInitializeComponentInstanceEmbedded(   &_mcr_inst,
                                                                error_handler, 
                                                                print_handler,
                                                                ctfStream);
            mclDestroyStream(ctfStream);
        } else {
            bResult = 0;
        }
    }  
    if (!bResult)
    return false;
  return true;
}

LIB_MatlabTest_C_API 
bool MW_CALL_CONV MatlabTestInitialize(void)
{
  return MatlabTestInitializeWithHandlers(mclDefaultErrorHandler, mclDefaultPrintHandler);
}

LIB_MatlabTest_C_API 
void MW_CALL_CONV MatlabTestTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_MatlabTest_C_API 
void MW_CALL_CONV MatlabTestPrintStackTrace(void) 
{
  char** stackTrace;
  int stackDepth = mclGetStackTrace(&stackTrace);
  int i;
  for(i=0; i<stackDepth; i++)
  {
    mclWrite(2 /* stderr */, stackTrace[i], sizeof(char)*strlen(stackTrace[i]));
    mclWrite(2 /* stderr */, "\n", sizeof(char)*strlen("\n"));
  }
  mclFreeStackTrace(&stackTrace, stackDepth);
}


LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxAdditionFromStruct(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                        *prhs[])
{
  return mclFeval(_mcr_inst, "additionFromStruct", nlhs, plhs, nrhs, prhs);
}

LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxAddTwoInt(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "addTwoInt", nlhs, plhs, nrhs, prhs);
}

LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxGetString(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "getString", nlhs, plhs, nrhs, prhs);
}

LIB_MatlabTest_C_API 
bool MW_CALL_CONV mlxGetStruct(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "getStruct", nlhs, plhs, nrhs, prhs);
}

LIB_MatlabTest_CPP_API 
void MW_CALL_CONV additionFromStruct(int nargout, mwArray& somme, const mwArray& struct0, 
                                     const mwArray& b)
{
  mclcppMlfFeval(_mcr_inst, "additionFromStruct", nargout, 1, 2, &somme, &struct0, &b);
}

LIB_MatlabTest_CPP_API 
void MW_CALL_CONV addTwoInt(int nargout, mwArray& resultat, const mwArray& a, const 
                            mwArray& b)
{
  mclcppMlfFeval(_mcr_inst, "addTwoInt", nargout, 1, 2, &resultat, &a, &b);
}

LIB_MatlabTest_CPP_API 
void MW_CALL_CONV getString(int nargout, mwArray& stringOut)
{
  mclcppMlfFeval(_mcr_inst, "getString", nargout, 1, 0, &stringOut);
}

LIB_MatlabTest_CPP_API 
void MW_CALL_CONV getStruct(int nargout, mwArray& struct0)
{
  mclcppMlfFeval(_mcr_inst, "getStruct", nargout, 1, 0, &struct0);
}

