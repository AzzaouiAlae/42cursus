#include "Tests.h"

void Test_print_mix()
{
    //arrange
    int size;
    int size_exp = 83;
    char *exp = "%A%42%42%42%42%2a%2A%% %B%-42%-42%-42%4294967254%ffffffd6%2A%% %C%0%0%0%0%0%2A%% \0%";

    //act
    size = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_mix2()
{
    //arrange
    int size;
    int size_exp = 23;
    char *exp = "%A%42%42%42%42%2a%2A%% ";

    //act
    size = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% ", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_mix3()
{
    //arrange
    int size;
    int size_exp = 62;
    char *exp = "%A%42%42%42%42%2a%2A%% %B%-42%-42%-42%4294967254%ffffffd6%2A%%";

    //act
    size = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_mix4()
{
    //arrange
    int size;
    int size_exp = 80;
    char *exp = "%A%42%42%42%42%2a%2A%% %B%-42%-42%-42%4294967254%ffffffd6%2A%% %C%0%0%0%0%0%2A%%";

    //act
    size = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    char *str = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void mix_Tests()
{
    RUN_TEST(Test_print_mix);
    RUN_TEST(Test_print_mix2);
    RUN_TEST(Test_print_mix3);
    RUN_TEST(Test_print_mix4);
}