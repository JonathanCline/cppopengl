@echo off

set USE_PYTHON=tools/deps/python.bat
set USE_SCRIPT=codegen/scripts/codegen_cli.py

%USE_PYTHON% %USE_SCRIPT% %*
