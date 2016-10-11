#  Copyright (c) 2016, Iago Roger
#  All right reserved.

import os
import sys

CXX = "g++"
CXXFLAGS = "-Wall"

if (len(sys.argv) == 1):
    print ("Modo de Uso:\n------------\n")
    print ("\t $ %s <source.cpp> <object.o> <binary.exe>" % str(sys.argv[0]))
    print ("Ex:\t $ %s source.cpp source.o source.exe" % str(sys.argv[0]))
    sys.exit(1)

SRC = sys.argv[1] # SRC = codigo fonte
OBJ = sys.argv[2] # OBJ = arquivo objeto que vai ser gerado
BIN = sys.argv[3] # BIN = arquivo binario que vai ser gerado

try:
    os.system(CXX + " " + CXXFLAGS + " -c " + SRC + " -o " + OBJ) 
    os.system(CXX + " " + " -o " + BIN + " " + OBJ)
    os.system("%s" % (BIN))

except:
    print ("Erro")
    sys.exit(1)
