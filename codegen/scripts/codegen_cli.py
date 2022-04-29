from argparse import ArgumentParser
import os
from pathlib import Path
from codegen import CodeGenerator
import sys


# Define the CLI parser.
parser = ArgumentParser()

# Parse args.
args = parser.parse_args()


# Make and configure the code generator.
generator = CodeGenerator()

# Lets generate some code.
generator.generate_code()
