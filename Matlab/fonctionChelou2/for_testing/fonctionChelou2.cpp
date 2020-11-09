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

#include <stdio.h>
#define EXPORTING_fonctionChelou2 1
#include "fonctionChelou2.h"

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
#ifndef LIB_fonctionChelou2_C_API
#define LIB_fonctionChelou2_C_API /* No special import/export declaration */
#endif

LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV fonctionChelou2InitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler)
{
    int bResult = 0;
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
  if (!GetModuleFileName(GetModuleHandle("fonctionChelou2"), path_to_dll, _MAX_PATH))
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

LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV fonctionChelou2Initialize(void)
{
  return fonctionChelou2InitializeWithHandlers(mclDefaultErrorHandler, 
                                               mclDefaultPrintHandler);
}

LIB_fonctionChelou2_C_API 
void MW_CALL_CONV fonctionChelou2Terminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_fonctionChelou2_C_API 
void MW_CALL_CONV fonctionChelou2PrintStackTrace(void) 
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


LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxFonctionChelou(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "FonctionChelou", nlhs, plhs, nrhs, prhs);
}

LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxGetInversBool(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "GetInversBool", nlhs, plhs, nrhs, prhs);
}

LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxGetMatrix(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "GetMatrix", nlhs, plhs, nrhs, prhs);
}

LIB_fonctionChelou2_C_API 
bool MW_CALL_CONV mlxIsMatrix(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "IsMatrix", nlhs, plhs, nrhs, prhs);
}

LIB_fonctionChelou2_CPP_API 
void MW_CALL_CONV FonctionChelou(int nargout, mwArray& Result)
{
  mclcppMlfFeval(_mcr_inst, "FonctionChelou", nargout, 1, 0, &Result);
}

LIB_fonctionChelou2_CPP_API 
void MW_CALL_CONV GetInversBool(int nargout, mwArray& notVar, const mwArray& var)
{
  mclcppMlfFeval(_mcr_inst, "GetInversBool", nargout, 1, 1, &notVar, &var);
}

LIB_fonctionChelou2_CPP_API 
void MW_CALL_CONV GetMatrix(int nargout, mwArray& Mat)
{
  mclcppMlfFeval(_mcr_inst, "GetMatrix", nargout, 1, 0, &Mat);
}

LIB_fonctionChelou2_CPP_API 
void MW_CALL_CONV IsMatrix(int nargout, mwArray& Ok, const mwArray& A)
{
  mclcppMlfFeval(_mcr_inst, "IsMatrix", nargout, 1, 1, &Ok, &A);
}

