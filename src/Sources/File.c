#include "../Headers/File.h"

/**
 * Print the tasks from a task database file.
 */
void printTasks()
{
  FILE *file = fopen("data/taskdb.txt", "r");
  if (file == NULL)
  {
    perror("Error opening the task database file!");
  }

  char lineContent[128];
  unsigned int lineNumber = 0;

  while (fgets(lineContent, sizeof(lineContent), file)) {
    bool done = false;
    int lastSemicolonPosition = -1;

    for (int i = 0; i < strlen(lineContent); i++) {
      if (lineContent[i] == ';') {
        lastSemicolonPosition = i;
      }
    }

    if (lastSemicolonPosition == -1) continue;

    char slicedString[lastSemicolonPosition];
    strncpy(slicedString, lineContent, lastSemicolonPosition);


    if (lastSemicolonPosition + 1 >= strlen(lineContent)) continue;
    char statusCharacter = lineContent[lastSemicolonPosition + 1];

    if (!isdigit(statusCharacter)) continue;

    int status = statusCharacter - '0';
    if (status == 1) {
      done = true;
    }

    printf("%d) %s (%s)\n", lineNumber + 1, slicedString, done ? "Done" : "Undone");
    lineNumber++;
  }

  fclose(file);
}
