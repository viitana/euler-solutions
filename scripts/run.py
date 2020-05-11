#!/usr/bin/python

import os
import sys

args_n = len(sys.argv)

if (args_n) < 2:
    print("Solution number missing, exiting.")
    sys.exit(0)

n = sys.argv[1]
arg = sys.argv[2] if args_n > 2 else ''

path = "./solutions/{}".format(n)
command = "gcc -lm {0}/main.c -o {0}/main.o && {0}/main.o {1}".format(path, arg)


print("Compiling and running solution {} {}".format(n, "with additional arg {}".format(arg) if arg != '' else ''))
print(command + "\n")
os.system(command)
