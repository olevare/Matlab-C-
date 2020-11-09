QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += ../../../../Program Files (x86)/MATLAB/MATLAB Runtime/v85/extern/include

LIBS += ./SimulinkBlock.lib \
    ./libcgxert.lib \
    ./libcovrt.lib \
    ./libemlrt.lib \
    ./libeng.lib \
    ./libfixedpoint.lib \
    ./libmat.lib \
    ./libmex.lib \
    ./libmwblas.lib \
    ./libmwblascompat32.lib \
    ./libmwcgir_construct.lib \
    ./libmwcoder_ParamTuningTgtAppSvc.lib \
    ./libmwcoder_connectivity_comm.lib \
    ./libmwcoder_connectivity_memunit.lib \
    ./libmwcoder_target_services.lib \
    ./libmwcoderprofile.lib \
    ./libmwforegroundDetector.lib \
    ./libmwlapack.lib \
    ./libmwmathutil.lib \
    ./libmwocvgpumex.lib \
    ./libmwocvmex.lib \
    ./libmwopticalFlowHSCore.lib \
    ./libmwopticalFlowLKCore.lib \
    ./libmwopticalFlowLKDoGCore.lib \
    ./libmwrtiostreamutils.lib \
    ./libmwservices.lib \
    ./libmwsl_AsyncioQueue.lib \
    ./libmwxilcomms.lib \
    ./libmwxilcomms_rtiostream.lib \
    ./libmwxilservice.lib \
    ./libmwxilutils.lib \
    ./libmwxilutils_sl.lib \
    ./libmx.lib \
    ./libut.lib \
    ./mclbase.lib \
    ./mclcommain.lib \
    ./mclmcr.lib \
    ./mclmcrrt.lib \
    ./mclmcrrt.lib \
    ./mclxlmain.lib \
    ./ocrutils.lib \
    ./rtwcg.lib


SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

