@echo off
SET PATH=C:/Program Files/OpenModelica1.25.0-64bit/bin/;C:/Program Files/OpenModelica1.25.0-64bit/lib//omc;C:/Program Files/OpenModelica1.25.0-64bit/lib/;C:/Users/abito/AppData/Roaming/.openmodelica/binaries/GetRandomNum;C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src/GetRandomNum/Resources/Library/ucrt64;C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src/GetRandomNum/Resources/Library/win64;C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src/GetRandomNum/Resources/Library;C:/Program Files/OpenModelica1.25.0-64bit/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/TestRandomNum.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
