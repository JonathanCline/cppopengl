#!

# Use a reasonable default if no PYTHON env variable is defined
if [[ -z "$PYTHON" ]]; then
	PYTHON=python3
fi

# Fix path seperators
PYTHON=${PYTHON//\\//}

# Lets goooooo
$PYTHON $@
