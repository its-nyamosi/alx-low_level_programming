#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_text_file(const char *fname, size_t _letters);
int create_file(const char *fname, char *text_content);
int append_text_to_file(const char *fname, char *text_content);

#endif

