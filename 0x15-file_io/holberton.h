#ifndef HOLBERTOWN_H
#define HOLBERTOWN_H

/* Libraries  */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/* External  */
int _putchar(char c);

/* Prototypes  */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* HOLBERTOWN_H  */
