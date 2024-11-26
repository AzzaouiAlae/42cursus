#ifndef TESTS_H
# define TESTS_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdint.h>
#include "../ft_printf/ft_printf.h"
# include "Unity-master/src/unity.h"
#include "ft_printf_to_str.c"
#include "Hex_Tests.c"
#include "simple_Tests.c"
#include "Str_Tests.c"
#include "Char_Tests.c"
#include "nums_Tests.c"
#include "mix_test.c"
#include "Percent_tests.c"
/*
# include "Unity-master/src/unity.c"
#include "../ft_printf/ft_printf.c"
#include "../ft_printf/ft_check_format.c"
#include "../ft_printf/ft_print_char.c"
#include "../ft_printf/ft_print_hex.c"
#include "../ft_printf/ft_print_str.c"
#include "../ft_printf/ft_putnbr.c"
#include "../ft_printf/ft_putunbr.c"
*/
void setUp(void)
{
  redirect_print_to_file();
}

void tearDown(void)
{
    free(buffer);
    if(buffer2)
      free(buffer2);
    buffer2 = NULL;
    buffer = NULL;
}

#endif