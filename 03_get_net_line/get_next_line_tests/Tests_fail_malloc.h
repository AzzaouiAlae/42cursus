#ifndef TESTS_H
# define TESTS_H

# include "../get_next_line/get_next_line.h"
# include "Unity-master/src/unity.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
char *str;
int malloc_fail;
///*
# include "../get_next_line/get_next_line.c"
# include "../get_next_line/get_next_line_utils.c"
# include "Tests_fail_malloc_/simple_test.c"
# include "Tests_fail_malloc_/Tests.c"
# include "Tests_fail_malloc_/Test_second_line_fail_malloc.c"
# include "Unity-master/src/unity.c"
//*/

void	setUp(void)
{
    malloc_fail = 2;
}

void	tearDown(void)
{
    if(str)
        free(str);
}
void *malloc(size_t size) {
        if(malloc_fail < 0)
            return calloc(size , 1);
        if(malloc_fail++ % 2 == 0)
            return NULL; // Simulate malloc failure
        else 
            return calloc(size , 1);
    }

#endif