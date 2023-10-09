#include <stdlib.h>
#include <stdio.h>

const char* PROJECT_NAME    = "tasq";
const char* PROJECT_VERSION = "0.1";
const char* PROJECT_AUTHOR  = "Ferdinand Procházka";
const char* PROJECT_LICENSE = "GNU GPLv3";

void printProgramInfo();

int main()
{
  printProgramInfo();
  return EXIT_SUCCESS;
}

void printProgramInfo()
{
  printf("%s %s\n", PROJECT_NAME, PROJECT_VERSION);
  printf("Created by %s\n", PROJECT_AUTHOR);
  printf("Licensed under %s\n", PROJECT_LICENSE);
}
