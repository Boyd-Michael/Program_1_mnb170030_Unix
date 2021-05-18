#!/bin/bash

# Compile File
# Jan 31 2020
# Michael Boyd
# mnb170030@utdallas.edu
# CS 3377.501 Spring 2020
# Verison 1.0
# Copyright 2020 All Rights Reserved

echo "Compiling Main.cc"
g++ -c hW1Main.cc
echo "Compiling Function.cc"
g++ -c hW1MyFunc.cc
echo "Using Linker"
g++ hW1Main.o hW1MyFunc.o MyFunc.h -o HomeWorkOne
echo "Done!"

