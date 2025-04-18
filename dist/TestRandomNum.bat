@echo off
SET PATH=C:/Program Files/OpenModelica1.25.0-64bit/bin/;C:/Program Files/OpenModelica1.25.0-64bit/lib//omc;C:/Program Files/OpenModelica1.25.0-64bit/lib/;C:/Users/abito/AppData/Roaming/.openmodelica/binaries/TestRandomNum;C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src/Resources/Library/ucrt64;C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src/Resources/Library/win64;C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src/Resources/Library;C:/Program Files/OpenModelica1.25.0-64bit/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/TestRandomNum.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
