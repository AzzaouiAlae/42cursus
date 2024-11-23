#ifndef TESTS_H
# define TESTS_H

# include "../get_next_line/get_next_line.h"
# include "Unity-master/src/unity.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
#include <string.h>
char *str;
///*
# include "../get_next_line/get_next_line.c"
# include "../get_next_line/get_next_line_utils.c"
# include "Tests/simple_test.c"
# include "Tests/Tests.c"
# include "Unity-master/src/unity.c"
//*/


void	setUp(void)
{
}

void	tearDown(void)
{
    if(str)
        free(str);
}

#endif