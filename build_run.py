#!/usr/bin/env python3

import os, sys

if(len(sys.argv)) <= 3:
	print("Modo de Uso:\n")
	print("\t$ %s <fonte> <objeto> <executavel>" % str(sys.argv[0]))
	print("Ex:\t$ %s main.c main.o main\n" % str(sys.argv[0]))
	sys.exit(1)

source = sys.argv[1]
obj = sys.argv[2]
execv = sys.argv[3]

try:
	os.system("gcc -Wall -g -c %s -o %s" % (source, obj))
	os.system("gcc -o %s %s" % (execv, obj))
	os.system("./%s" % (execv))
except:
	print("[!] Erro\n")
	sys.exit(1)