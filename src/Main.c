#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char* PROJECT_NAME    = "Tasq";
const char* PROJECT_VERSION = "0.1";
const char* PROJECT_AUTHOR  = "Ferdinand Procházka";
const char* PROJECT_LICENSE = "GNU GPLv3";

void printProgramInfo();

int main(int argc, char** argv)
{
  if (argc == 1)
  {
    printf("No command was passed!\n\n");
    printf("list - lists all tasks\n");
    printf("info - prints program information\n");

    return EXIT_FAILURE;
  }

  if (strcmp(argv[1], "list") == 0)
  {
    printf("Tasks\n");
    return EXIT_SUCCESS;
  }

  if (strcmp(argv[1], "info") == 0)
  {
    printProgramInfo();
    return EXIT_SUCCESS;
  }

  printf("Invalid command: %s\n", argv[1]);
  return EXIT_FAILURE;
}

void printProgramInfo()
{
  printf("%s %s\n", PROJECT_NAME, PROJECT_VERSION);
  printf("Created by %s\n", PROJECT_AUTHOR);
  printf("Licensed under %s\n", PROJECT_LICENSE);
}
