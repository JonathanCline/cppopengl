@echo off

:: Use a reasonable default if no PYTHON env variable is defined
IF "%PYTHON%"=="" ( 
    set PYTHON=python3
)

:: Lets goooooo
%PYTHON% %*
