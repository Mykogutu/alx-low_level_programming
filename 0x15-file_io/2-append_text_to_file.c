#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file
 * @text_content: text to be appended
 *
 * Return: Returns 1 if successful
 */
int append_text_to_file(const char *filename, char *text_content) {
  if (filename == NULL) return -1;
  FILE *file = fopen(filename, "a");
  if (file == NULL) return -1;
  if (text_content == NULL) return 1;
  int result = fputs(text_content, file);
  fclose(file);
  if (result < 0) return -1;
  return 1;
}
