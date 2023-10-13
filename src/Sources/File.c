#include "../Headers/File.h"

void printTasks()
{
  FILE *file = fopen("data/taskdb.txt", "r");
  if (file == NULL)
  {
    perror("Error opening the task database file!");
  }

  char lineContent[128];
  while (fgets(lineContent, sizeof(lineContent), file)) {
    printf("%s", lineContent);
  }

  fclose(file);
}
