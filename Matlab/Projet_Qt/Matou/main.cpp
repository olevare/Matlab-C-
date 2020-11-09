#include <QCoreApplication>
#include <QLibrary>
#include <QDebug>
#include <Windows.h>

typedef int64_t mxInt64;
typedef uint64_t mxUint64;

#include "../../../../Program Files (x86)/MATLAB/MATLAB Runtime/v85/extern/include/mclmcrrt.h"
#include "../../../../Program Files (x86)/MATLAB/MATLAB Runtime/v85/extern/include/mclcppclass.h"

typedef int (*MatlabInitializeFunction)();
typedef int (*MatlabTerminateFunction)();
typedef int (*AddTwoIntFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // MatlabTest
typedef int (*GetStringFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // MatlabTest
typedef int (*GetStructFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // MatlabTest
typedef int (*AdditionFromStructFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // MatlabTest
typedef int (*FonctionChelouFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // fonctionChelou2
typedef int (*GetInversBoolFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // fonctionChelou2
typedef int (*GetMatrixFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // fonctionChelou2
typedef int (*IsMatrixFunction)(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]); // fonctionChelou2

QString nameLibrary = QString("fonctionChelou2");


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLibrary myLib(nameLibrary);

    if(myLib.load())
    {

        QString nameInitialize = QString(nameLibrary + "Initialize");
        QString nameTerminate = QString(nameLibrary + "Terminate");
        MatlabInitializeFunction MatlabInitialize = (MatlabInitializeFunction) myLib.resolve(nameInitialize.toLocal8Bit());
        MatlabTerminateFunction MatlabTerminate = (MatlabTerminateFunction) myLib.resolve(nameTerminate.toLocal8Bit());

        AddTwoIntFunction AddTwoInt = (AddTwoIntFunction) myLib.resolve("mlxAddTwoInt"); // MatlabTest
        GetStringFunction GetString = (GetStringFunction) myLib.resolve("mlxGetString"); // MatlabTest
        GetStructFunction GetStruct = (GetStructFunction) myLib.resolve("mlxGetStruct"); // MatlabTest
        AdditionFromStructFunction AdditionFromStruct = (AdditionFromStructFunction) myLib.resolve("mlxAdditionFromStruct"); // MatlabTest
        FonctionChelouFunction FonctionChelou = (FonctionChelouFunction) myLib.resolve("mlxFonctionChelou"); // fonctionChelou2
        GetInversBoolFunction GetInversBool = (GetInversBoolFunction) myLib.resolve("mlxGetInversBool"); // fonctionChelou2
        GetMatrixFunction GetMatrix = (GetMatrixFunction) myLib.resolve("mlxGetMatrix"); // fonctionChelou2
        IsMatrixFunction IsMatrix = (IsMatrixFunction) myLib.resolve("mlxIsMatrix"); // fonctionChelou2

        if(MatlabInitialize)
        {
            if( mclInitializeApplication(NULL,0) )
            {

                if(MatlabInitialize())
                {
                    mxArray *paramIn[2];
                    mxArray *paramOut[1];

                    // AddTwoInt --------------------------------------------------------------------------
//                    paramIn[0] = mxCreateDoubleScalar(60.3);
//                    paramIn[1] = mxCreateDoubleScalar(39.5);

//                    if( AddTwoInt(1, paramOut, 2, paramIn) )
//                    {
//                        double valueResultDouble = mxGetScalar(paramOut[0]);
//                        qDebug() <<  "valueResultDouble = " << valueResultDouble << endl;
//                    }

//                    mxDestroyArray(paramIn[0]);
//                    mxDestroyArray(paramIn[1]);
                    // ------------------------------------------------------------------------------------


                    // GetString ---------------------------------------------------------------------------
//                    if( GetString(1, paramOut, 0, paramIn) )
//                    {
//                        QString valueResultString = QString::fromStdString( mxArrayToString(paramOut[0]) );
//                        qDebug() <<  "valueResultString = " << valueResultString << endl;
//                    }
                    // -------------------------------------------------------------------------------------


                    // GetStruct -------------------------------------------------------------------------
//                    if( GetStruct(1, paramOut, 0, paramIn) )
//                    {
//                        if(mxIsStruct(paramOut[0]))
//                        {
//                            qDebug() <<  "Je suis un struct bitch" << endl;
//                        }

//                        int nombreVariable = mxGetNumberOfFields(paramOut[0]);
//                        QString valueResultString = QString::fromStdString( mxGetFieldNameByNumber(paramOut[0], 0));
//                        double valueResultDouble = mxGetScalar( mxGetField(paramOut[0], 0, mxGetFieldNameByNumber(paramOut[0], 0)) );

//                        qDebug() <<  "nombreVariable = " << nombreVariable << endl;
//                        qDebug() <<  "valueResultString = " << valueResultString << endl;
//                        qDebug() <<  "valueResultDouble = " << valueResultDouble << endl;
//                    }
                    // -----------------------------------------------------------------------------------


                    // AdditionFromStruct ---------------------------------------------------------------------------
                    // décommenté fonction GetStruct
//                    paramIn[0] = paramOut[0];
//                    paramIn[1] = mxCreateDoubleScalar(100);
//                    mxArray *paramOutOut[1];

//                    if( AdditionFromStruct(1, paramOutOut, 2, paramIn) )
//                    {
//                        double valueResultDouble = mxGetScalar(paramOutOut[0]);
//                        qDebug() <<  "valueResultDouble = " << valueResultDouble << endl;
//                    }

//                    mxDestroyArray(paramIn[0]);
//                    mxDestroyArray(paramIn[1]);
//                    mxDestroyArray(paramOutOut[0]);
                    // -------------------------------------------------------------------------------------


                    // FonctionChelou ---------------------------------------------------------------------------
//                    if( FonctionChelou(0, paramOut, 0, paramIn) )
//                    {
//                        qDebug() <<  "FonctionChelou executer" << endl;
//                    }
                    // -------------------------------------------------------------------------------------


                    // GetInversBool ---------------------------------------------------------------------------
//                    paramIn[0] = mxCreateLogicalScalar(true);

//                    if( GetInversBool(1, paramOut, 1, paramIn) )
//                    {
//                        bool valueResultBool = mxIsLogicalScalarTrue(paramOut[0]);
//                        qDebug() <<  "valueResultBool = " << valueResultBool << endl;
//                    }

//                    mxDestroyArray(paramIn[0]);
                    // -------------------------------------------------------------------------------------


                    // GetMatrix ---------------------------------------------------------------------------
//                    if( GetMatrix(1, paramOut, 0, paramIn) )
//                    {
//                        int valueResultNbElement = static_cast<int>(mxGetNumberOfElements(paramOut[0]));
//                        int valueResultRows = static_cast<int>(mxGetM(paramOut[0])); // get rows
//                        int valueResultCols = static_cast<int>(mxGetN(paramOut[0])); // get cols
//                        qDebug() <<  "valueResultNbElement = " << valueResultNbElement << endl;
//                        qDebug() <<  "valueResultRows = " << valueResultRows << endl;
//                        qDebug() <<  "valueResultCols = " << valueResultCols << endl;

//                        for(int i = 0; i < valueResultRows; i++)
//                        {
//                            for(int j = 0; j < valueResultCols; j++)
//                            {
//                                qDebug() << (mxGetPr(paramOut[0]))[j + (i * valueResultCols)];
//                            }

//                            qDebug() << endl;
//                        }
//                    }
                    // -------------------------------------------------------------------------------------


                    // IsMatrix ---------------------------------------------------------------------------
                    // row, cols
//                    paramIn[0] = mxCreateDoubleMatrix(10, 10, mxREAL); // rows -- cols
//                    int valueResultRows = static_cast<int>(mxGetM(paramIn[0])); // get rows
//                    int valueResultCols = static_cast<int>(mxGetN(paramIn[0])); // get cols

//                    double *start_of_real_data = (double *)mxCalloc(valueResultRows * valueResultCols, mxGetElementSize(paramIn[0]));

//                    for(int i = 0; i < valueResultRows; i++)
//                    {
//                        for(int j = 0; j < valueResultCols; j++)
//                        {
//                            start_of_real_data[j + (i * valueResultCols)] = j + (i * valueResultCols);
//                        }
//                    }

//                    mxSetPr(paramIn[0], start_of_real_data);

//                    if( IsMatrix(1, paramOut, 1, paramIn) )
//                    {
//                        bool valueResultBool = mxIsLogicalScalarTrue(paramOut[0]);
//                        qDebug() <<  "valueResultBool = " << valueResultBool << endl;

//                        for(int i = 0; i < valueResultRows; i++)
//                        {
//                            for(int j = 0; j < valueResultCols; j++)
//                            {
//                                qDebug() << (mxGetPr(paramIn[0]))[j + (i * valueResultCols)];
//                            }

//                            qDebug() << endl;
//                        }
//                    }

//                    mxDestroyArray(paramIn[0]);
                    // -------------------------------------------------------------------------------------

                    mxDestroyArray(paramOut[0]);


                    MatlabTerminate();
                    mclTerminateApplication();
                }
                else
                {
                    qDebug() <<  "Initialisation fonction echec !!!!!!!!!!" << endl;
                }
            }
            else
            {
                qDebug() <<  "Initialisation environnement MatLab echec !!!!!!!!!!" << endl;
            }

        }
        else
        {
            qDebug() <<  "Load initialisation fonction echec !!!!!!!!!!" << endl;
        }

        if(!myLib.unload())
        {
            qDebug() <<  "Unload DLL echec !!!!!!!!!!" << endl;
        }
    }
    else
    {
        qDebug() <<  "Load DLL echec !!!!!!!!!!" << endl;
    }


    // affiche un message d'erreur s'il y a eu une erreur
    DWORD errorMessageID = GetLastError();

    if(errorMessageID == 0)
        int i = 0; //No error message has been recorded

    LPSTR messageBuffer = nullptr;
    size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                                 NULL, errorMessageID, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&messageBuffer, 0, NULL);

    std::string message(messageBuffer, size);

    qDebug() <<  QString::fromStdString(message) << endl;

    return a.exec();
}
