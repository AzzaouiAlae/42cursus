#include "Tests.h"

void Test_print_i0()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %i", 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_negative1()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = ft_printf(" %i", -1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_1()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 1";

    //act
    size = ft_printf(" %i", 1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_9()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 9";

    //act
    size = ft_printf(" %i", 9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_10()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 10";

    //act
    size = ft_printf(" %i", 10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_11()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 11";

    //act
    size = ft_printf(" %i", 11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_15()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 15";

    //act
    size = ft_printf(" %i", 15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_16()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 16";

    //act
    size = ft_printf(" %i", 16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_17()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 17";

    //act
    size = ft_printf(" %i", 17);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_99()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 99";

    //act
    size = ft_printf(" %i", 99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_100()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " 100";

    //act
    size = ft_printf(" %i", 100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_101()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " 101";

    //act
    size = ft_printf(" %i", 101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg9()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -9";

    //act
    size = ft_printf(" %i", -9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg10()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -10";

    //act
    size = ft_printf(" %i", -10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg11()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -11";

    //act
    size = ft_printf(" %i", -11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg14()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -14";

    //act
    size = ft_printf(" %i", -14);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg15()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -15";

    //act
    size = ft_printf(" %i", -15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg16()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -16";

    //act
    size = ft_printf(" %i", -16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg99()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -99";

    //act
    size = ft_printf(" %i", -99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg100()
{
    //arrange
    int size;
    int size_exp = 5;
    char *exp = " -100";

    //act
    size = ft_printf(" %i", -100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_neg101()
{
    //arrange
    int size;
    int size_exp = 5;
    char *exp = " -101";

    //act
    size = ft_printf(" %i", -101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_INT_MAX()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 2147483647";

    //act
    size = ft_printf(" %i", 2147483647);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_INT_MIN()
{
    //arrange
    int size;
    int size_exp = 12;
    char *exp = " -2147483648";

    //act
    size = ft_printf(" %i", -2147483648);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_LONG_MAX()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = printf(" %i", 9223372036854775807);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_LONG_MIN()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %i", LONG_MIN);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_UINT_MAX()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = ft_printf(" %i", 4294967295);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_ULONG_MAX()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = ft_printf(" %i", ULONG_MAX);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_i_MAX()
{
    //arrange
    int size;
    int size_exp = 37;
    char *exp = " 2147483647 -2147483648 -1 0 -1 0 -42";

    //act
    size = ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d0()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %d", 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_negative1()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = ft_printf(" %d", -1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_1()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 1";

    //act
    size = ft_printf(" %d", 1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_9()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 9";

    //act
    size = ft_printf(" %d", 9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_10()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 10";

    //act
    size = ft_printf(" %d", 10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_11()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 11";

    //act
    size = ft_printf(" %d", 11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_15()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 15";

    //act
    size = ft_printf(" %d", 15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_16()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 16";

    //act
    size = ft_printf(" %d", 16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_17()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 17";

    //act
    size = ft_printf(" %d", 17);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_99()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 99";

    //act
    size = ft_printf(" %d", 99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_100()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " 100";

    //act
    size = ft_printf(" %d", 100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_101()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " 101";

    //act
    size = ft_printf(" %d", 101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg9()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -9";

    //act
    size = ft_printf(" %d", -9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg10()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -10";

    //act
    size = ft_printf(" %d", -10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg11()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -11";

    //act
    size = ft_printf(" %d", -11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg14()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -14";

    //act
    size = ft_printf(" %d", -14);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg15()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -15";

    //act
    size = ft_printf(" %d", -15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg16()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -16";

    //act
    size = ft_printf(" %d", -16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg99()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " -99";

    //act
    size = ft_printf(" %d", -99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg100()
{
    //arrange
    int size;
    int size_exp = 5;
    char *exp = " -100";

    //act
    size = ft_printf(" %d", -100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_neg101()
{
    //arrange
    int size;
    int size_exp = 5;
    char *exp = " -101";

    //act
    size = ft_printf(" %d", -101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_INT_MAX()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 2147483647";

    //act
    size = ft_printf(" %d", 2147483647);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_INT_MIN()
{
    //arrange
    int size;
    int size_exp = 12;
    char *exp = " -2147483648";

    //act
    size = ft_printf(" %d", -2147483648);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_LONG_MAX()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = printf(" %d", 9223372036854775807);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_LONG_MIN()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %d", LONG_MIN);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_UINT_MAX()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = ft_printf(" %d", 4294967295);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_ULONG_MAX()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " -1";

    //act
    size = ft_printf(" %d", ULONG_MAX);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_d_MAX()
{
    //arrange
    int size;
    int size_exp = 37;
    char *exp = " 2147483647 -2147483648 -1 0 -1 0 -42";

    //act
    size = ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U0()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %u", 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_negative1()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967295";

    //act
    size = ft_printf(" %u", -1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_1()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 1";

    //act
    size = ft_printf(" %u", 1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_9()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 9";

    //act
    size = ft_printf(" %u", 9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_10()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 10";

    //act
    size = ft_printf(" %u", 10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_11()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 11";

    //act
    size = ft_printf(" %u", 11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_15()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 15";

    //act
    size = ft_printf(" %u", 15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_16()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 16";

    //act
    size = ft_printf(" %u", 16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_17()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 17";

    //act
    size = ft_printf(" %u", 17);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_99()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 99";

    //act
    size = ft_printf(" %u", 99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_100()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " 100";

    //act
    size = ft_printf(" %u", 100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_101()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " 101";

    //act
    size = ft_printf(" %u", 101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg9()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967287";

    //act
    size = ft_printf(" %u", -9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg10()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967286";

    //act
    size = ft_printf(" %u", -10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg11()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967285";

    //act
    size = ft_printf(" %u", -11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg14()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967282";

    //act
    size = ft_printf(" %u", -14);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg15()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967281";

    //act
    size = ft_printf(" %u", -15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg16()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967280";

    //act
    size = ft_printf(" %u", -16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg99()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967197";

    //act
    size = ft_printf(" %u", -99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg100()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967196";

    //act
    size = ft_printf(" %u", -100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_neg101()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967195";

    //act
    size = ft_printf(" %u", -101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_UNT_MAX()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 2147483647";

    //act
    size = ft_printf(" %u", 2147483647);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_INT_MIN()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 2147483648";

    //act
    size = ft_printf(" %u", -2147483648);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_LONG_MAX()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967295";

    //act
    size = ft_printf(" %u", 9223372036854775807);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_LONG_MIN()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %u", LONG_MIN);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_UINT_MAX()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967295";

    //act
    size = ft_printf(" %u", 4294967295);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_ULONG_MAX()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = " 4294967295";

    //act
    size = ft_printf(" %u", ULONG_MAX);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_U_MAX()
{
    //arrange
    int size;
    int size_exp = 59;
    char *exp = " 2147483647 2147483648 4294967295 0 4294967295 0 4294967254";

    //act
    size = ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}



void nums_Tests()
{
    RUN_TEST(Test_print_U0);
    RUN_TEST(Test_print_U_negative1);
    RUN_TEST(Test_print_U_1);
    RUN_TEST(Test_print_U_9);
    RUN_TEST(Test_print_U_10);
    RUN_TEST(Test_print_U_11);
    RUN_TEST(Test_print_U_15);
    RUN_TEST(Test_print_U_16);
    RUN_TEST(Test_print_U_17);
    RUN_TEST(Test_print_U_99);
    RUN_TEST(Test_print_U_100);
    RUN_TEST(Test_print_U_101);
    RUN_TEST(Test_print_U_neg9);
    RUN_TEST(Test_print_U_neg10);
    RUN_TEST(Test_print_U_neg11);
    RUN_TEST(Test_print_U_neg14);
    RUN_TEST(Test_print_U_neg15);
    RUN_TEST(Test_print_U_neg16);
    RUN_TEST(Test_print_U_neg99);
    RUN_TEST(Test_print_U_neg100);
    RUN_TEST(Test_print_U_neg101);
    RUN_TEST(Test_print_U_UNT_MAX);
    RUN_TEST(Test_print_U_INT_MIN);
    RUN_TEST(Test_print_U_LONG_MAX);
    RUN_TEST(Test_print_U_LONG_MIN);
    RUN_TEST(Test_print_U_UINT_MAX);
    RUN_TEST(Test_print_U_ULONG_MAX);
    RUN_TEST(Test_print_U_MAX);

    RUN_TEST(Test_print_d0);
    RUN_TEST(Test_print_d_negative1);
    RUN_TEST(Test_print_d_1);
    RUN_TEST(Test_print_d_9);
    RUN_TEST(Test_print_d_10);
    RUN_TEST(Test_print_d_11);
    RUN_TEST(Test_print_d_15);
    RUN_TEST(Test_print_d_16);
    RUN_TEST(Test_print_d_17);
    RUN_TEST(Test_print_d_99);
    RUN_TEST(Test_print_d_100);
    RUN_TEST(Test_print_d_101);
    RUN_TEST(Test_print_d_neg9);
    RUN_TEST(Test_print_d_neg10);
    RUN_TEST(Test_print_d_neg11);
    RUN_TEST(Test_print_d_neg14);
    RUN_TEST(Test_print_d_neg15);
    RUN_TEST(Test_print_d_neg16);
    RUN_TEST(Test_print_d_neg99);
    RUN_TEST(Test_print_d_neg100);
    RUN_TEST(Test_print_d_neg101);
    RUN_TEST(Test_print_d_INT_MAX);
    RUN_TEST(Test_print_d_INT_MIN);
    RUN_TEST(Test_print_d_LONG_MAX);
    RUN_TEST(Test_print_d_LONG_MIN);
    RUN_TEST(Test_print_d_UINT_MAX);
    RUN_TEST(Test_print_d_ULONG_MAX);
    RUN_TEST(Test_print_d_MAX);

    RUN_TEST(Test_print_i0);
    RUN_TEST(Test_print_i_negative1);
    RUN_TEST(Test_print_i_1);
    RUN_TEST(Test_print_i_9);
    RUN_TEST(Test_print_i_10);
    RUN_TEST(Test_print_i_11);
    RUN_TEST(Test_print_i_15);
    RUN_TEST(Test_print_i_16);
    RUN_TEST(Test_print_i_17);
    RUN_TEST(Test_print_i_99);
    RUN_TEST(Test_print_i_100);
    RUN_TEST(Test_print_i_101);
    RUN_TEST(Test_print_i_neg9);
    RUN_TEST(Test_print_i_neg10);
    RUN_TEST(Test_print_i_neg11);
    RUN_TEST(Test_print_i_neg14);
    RUN_TEST(Test_print_i_neg15);
    RUN_TEST(Test_print_i_neg16);
    RUN_TEST(Test_print_i_neg99);
    RUN_TEST(Test_print_i_neg100);
    RUN_TEST(Test_print_i_neg101);
    RUN_TEST(Test_print_i_INT_MAX);
    RUN_TEST(Test_print_i_INT_MIN);
    RUN_TEST(Test_print_i_LONG_MAX);
    RUN_TEST(Test_print_i_LONG_MIN);
    RUN_TEST(Test_print_i_UINT_MAX);
    RUN_TEST(Test_print_i_ULONG_MAX);
    RUN_TEST(Test_print_i_MAX);
}


