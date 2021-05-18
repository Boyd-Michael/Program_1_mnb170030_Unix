/*
 * Main File
 * Jan 31 2020
 * Michael Boyd
 * mnb170030@utdallas.edu
 * CS 3377.501 Spring 2020
 * Verison 1.1
 * Copyright 2020, All Rights Reserved
 */

#include <iostream>
#include "MyFunc.h"

using namespace std;

int main(int argc, char* argv[])
{

  cout << "The number of valid arguments are: " <<  argc << endl;
   MyFunc(argc);
  for(int i; i < argc; i++)
    {
      cout << "Argument " + i;
      cout <<  " contains: " <<  argv[i] << endl;
    }
  return 0;
}
