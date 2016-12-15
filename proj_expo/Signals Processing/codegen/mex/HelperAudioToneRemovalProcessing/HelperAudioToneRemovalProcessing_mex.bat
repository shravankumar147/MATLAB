@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2015b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2015b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=HelperAudioToneRemovalProcessing_mex
set MEX_NAME=HelperAudioToneRemovalProcessing_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for HelperAudioToneRemovalProcessing > HelperAudioToneRemovalProcessing_mex.mki
echo COMPILER=%COMPILER%>> HelperAudioToneRemovalProcessing_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> HelperAudioToneRemovalProcessing_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> HelperAudioToneRemovalProcessing_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> HelperAudioToneRemovalProcessing_mex.mki
echo LINKER=%LINKER%>> HelperAudioToneRemovalProcessing_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> HelperAudioToneRemovalProcessing_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> HelperAudioToneRemovalProcessing_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> HelperAudioToneRemovalProcessing_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> HelperAudioToneRemovalProcessing_mex.mki
echo BORLAND=%BORLAND%>> HelperAudioToneRemovalProcessing_mex.mki
echo OMPFLAGS= >> HelperAudioToneRemovalProcessing_mex.mki
echo OMPLINKFLAGS= >> HelperAudioToneRemovalProcessing_mex.mki
echo EMC_COMPILER=msvc110>> HelperAudioToneRemovalProcessing_mex.mki
echo EMC_CONFIG=optim>> HelperAudioToneRemovalProcessing_mex.mki
"C:\Program Files\MATLAB\R2015b\bin\win64\gmake" -B -f HelperAudioToneRemovalProcessing_mex.mk
