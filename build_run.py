#!/usr/bin/env python3

from os import system
from sys import argv, exit

if(len(argv)) <= 3:
	print("Modo de Uso:\n")
	print("\t$ %s <fonte> <objeto> <executavel>" % str(argv[0]))
	print("Ex:\t$ %s main.c main.o main\n" % str(argv[0]))
	exit(1)

source = argv[1]
obj = argv[2]
execv = argv[3]

try:
	system("gcc -Wall -g -c %s -o %s" % (source, obj))
	system("gcc -o %s %s" % (execv, obj))
	system("./%s" % (execv))
except:
    print()
