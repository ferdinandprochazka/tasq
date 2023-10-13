#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Headers/File.h"

const char* PROJECT_NAME    = "Tasq";
const char* PROJECT_VERSION = "0.1";
const char* PROJECT_AUTHOR  = "Ferdinand Procházka";
const char* PROJECT_LICENSE = "GNU GPLv3";

const unsigned int TASK_COUNT_LIMIT = 32;

void printProgramInfo();
void printCommands();

int main(int argc, char** argv)
{
  if (argc == 1)
  {
    printf("Tasks\n\n");
    printTasks();

    return EXIT_SUCCESS;
  }

  if (strcmp(argv[1], "info") == 0)
  {
    printProgramInfo();
    return EXIT_SUCCESS;
  }

  if (strcmp(argv[1], "add") == 0)
  {
    if (argc < 3)
    {
      printf("No text was provided!\n");
      return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
  }

  if (strcmp(argv[1], "remove") == 0)
  {
    if (argc < 3)
    {
      printf("No ID was provided!\n");
      return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
  }

  if (strcmp(argv[1], "update") == 0)
  {
    if (argc < 3)
    {
      printf("No ID was provided!\n");
      return EXIT_FAILURE;
    }
    if (argc < 4)
    {
      printf("No text was provided!\n");
      return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
  }

  if (strcmp(argv[1], "clear") == 0)
  {
    if (argc < 3)
    {
      printf("All tasks were successfully deleted!\n");
      return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
  }

  printf("Invalid command: %s\n\n", argv[1]);
  printCommands();

  return EXIT_FAILURE;
}

void printProgramInfo()
{
  printf("%s %s\n", PROJECT_NAME, PROJECT_VERSION);
  printf("Created by %s\n", PROJECT_AUTHOR);
  printf("Licensed under %s\n", PROJECT_LICENSE);
}

void printCommands()
{
  printf("add <TEXT> - adds a task to the list\n");
  printf("delete <ID> - deletes a task with the given ID\n");
  printf("update <ID> <TEXT> - updates a task with the given ID\n");
  printf("clear - deletes all tasks\n");
  printf("info - prints the program information\n");
}
