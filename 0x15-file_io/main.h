#ifndef MAIN_H
#define MAIN_H

/* include needed libraries */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* declare prototypes of custom functions */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
