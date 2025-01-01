#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>


ssize_t read_textfile(const char *filename, size_t letters);
#endif
