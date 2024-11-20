#include "Tests.h"

void Test_ptr_int_p()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    int x = 12345;

    //act
    size = ft_printf("%p\n", &x);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf("%p\n", &x);
    exp = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_ptr_max_uint_and_1000_p()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    size_t x = UINT32_MAX + 1000;

    //act
    size = ft_printf("%x\n", x);
    char *str = get_str_from_file();

    redirect_print_to_file();
    #pragma GCC diagnostic ignored "-Wformat"
    size_exp = printf("%x\n", x);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_negative1()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = "%p\n";

    //act
    size = ft_printf(format, -1);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, -1);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_ptr_1()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = "%p\n";
    size_t value = 1;

    //act
    size = ft_printf(format, value);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_15()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = "%p\n";
    size_t value = 15;

    //act
    size = ft_printf(format, value);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_16()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = "%p\n";
    size_t value = 16;

    //act
    size = ft_printf(format, value);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_17()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = " %p\n";
    size_t value = 17;

    //act
    size = ft_printf(format, value);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_LONG_MIN_LONG_MAX()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = " %p %p\n";
    size_t value = LONG_MAX;
    size_t value2 = LONG_MIN;

    //act
    size = ft_printf(format, value, value2);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value, value2);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_INT_MIN_INT_MAX()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = " %p %p\n";
    size_t value = INT_MIN;
    size_t value2 = INT_MAX;

    //act
    size = ft_printf(format, value, value2);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value, value2);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_ULONG_MAX_neg_ULONG_MAX()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = " %p %p\n";
    size_t value = ULONG_MAX;
    size_t value2 = -ULONG_MAX;

    //act
    size = ft_printf(format, value, value2);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value, value2);
    exp = get_str_from_file();

    //printf("[%s]\n", str);
    //printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);

}

void Test_ptr_0_0()
{
    //arrange
    int size;
    int size_exp;
    char *exp;
    char *format = " %p %p\n";
    size_t value = 0;
    size_t value2 = 0;

    //act
    size = ft_printf(format, value, value2);
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(format, value, value2);
    exp = get_str_from_file();

    printf("[%s]\n", str);
    printf("[%s]\n", exp);

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X0()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %X", 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_negative1()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFFF";

    //act
    size = ft_printf(" %X", -1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_1()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 1";

    //act
    size = ft_printf(" %X", 1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_9()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 9";

    //act
    size = ft_printf(" %X", 9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_10()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " A";

    //act
    size = ft_printf(" %X", 10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_11()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " B";

    //act
    size = ft_printf(" %X", 11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_15()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " F";

    //act
    size = ft_printf(" %X", 15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_16()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 10";

    //act
    size = ft_printf(" %X", 16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_17()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 11";

    //act
    size = ft_printf(" %X", 17);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_99()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 63";

    //act
    size = ft_printf(" %X", 99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_100()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 64";

    //act
    size = ft_printf(" %X", 100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_101()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 65";

    //act
    size = ft_printf(" %X", 101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg9()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFF7";

    //act
    size = ft_printf(" %X", -9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg10()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFF6";

    //act
    size = ft_printf(" %X", -10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg11()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFF5";

    //act
    size = ft_printf(" %X", -11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg14()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFF2";

    //act
    size = ft_printf(" %X", -14);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg15()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFF1";

    //act
    size = ft_printf(" %X", -15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg16()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFF0";

    //act
    size = ft_printf(" %X", -16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg99()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFF9D";

    //act
    size = ft_printf(" %X", -99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg100()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFF9C";

    //act
    size = ft_printf(" %X", -100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_neg101()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFF9B";

    //act
    size = ft_printf(" %X", -101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_UNT_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " 7FFFFFFF";

    //act
    size = ft_printf(" %X", 2147483647);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_INT_MIN()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " 80000000";

    //act
    size = ft_printf(" %X", -2147483648);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_LONG_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFFF";

    //act
    size = ft_printf(" %X", 9223372036854775807);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_LONG_MIN()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %X", LONG_MIN);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_UINT_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFFF";

    //act
    size = ft_printf(" %X", 4294967295);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_ULONG_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " FFFFFFFF";

    //act
    size = ft_printf(" %X", ULONG_MAX);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_X_MAX()
{
    //arrange
    int size;
    int size_exp = 49;
    char *exp = " 7FFFFFFF 80000000 FFFFFFFF 0 FFFFFFFF 0 FFFFFFD6";

    //act
    size = ft_printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x0()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %x", 0);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_negative1()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " ffffffff";

    //act
    size = ft_printf(" %x", -1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_1()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 1";

    //act
    size = ft_printf(" %x", 1);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_9()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 9";

    //act
    size = ft_printf(" %x", 9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_10()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " a";

    //act
    size = ft_printf(" %x", 10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_11()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " b";

    //act
    size = ft_printf(" %x", 11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_15()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " f";

    //act
    size = ft_printf(" %x", 15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_16()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 10";

    //act
    size = ft_printf(" %x", 16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_17()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 11";

    //act
    size = ft_printf(" %x", 17);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_99()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 63";

    //act
    size = ft_printf(" %x", 99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_100()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 64";

    //act
    size = ft_printf(" %x", 100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_101()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 65";

    //act
    size = ft_printf(" %x", 101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg9()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " fffffff7";

    //act
    size = ft_printf(" %x", -9);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg10()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " fffffff6";

    //act
    size = ft_printf(" %x", -10);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg11()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " fffffff5";

    //act
    size = ft_printf(" %x", -11);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg14()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " fffffff2";

    //act
    size = ft_printf(" %x", -14);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg15()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " fffffff1";

    //act
    size = ft_printf(" %x", -15);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg16()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " fffffff0";

    //act
    size = ft_printf(" %x", -16);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg99()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " ffffff9d";

    //act
    size = ft_printf(" %x", -99);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg100()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " ffffff9c";

    //act
    size = ft_printf(" %x", -100);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_neg101()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " ffffff9b";

    //act
    size = ft_printf(" %x", -101);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_UNT_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " 7fffffff";

    //act
    size = ft_printf(" %x", 2147483647);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_INT_MIN()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " 80000000";

    //act
    size = ft_printf(" %x", -2147483648);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_LONG_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " ffffffff";

    //act
    size = ft_printf(" %x", 9223372036854775807);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_LONG_MIN()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %x", LONG_MIN);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_UINT_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " ffffffff";

    //act
    size = ft_printf(" %x", 4294967295);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_ULONG_MAX()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " ffffffff";

    //act
    size = ft_printf(" %x", ULONG_MAX);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_x_MAX()
{
    //arrange
    int size;
    int size_exp = 49;
    char *exp = " 7fffffff 80000000 ffffffff 0 ffffffff 0 ffffffd6";

    //act
    size = ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_UINT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Hex_Tests()
{
    RUN_TEST(Test_ptr_int_p);
    RUN_TEST(Test_ptr_max_uint_and_1000_p);
    
    RUN_TEST(Test_ptr_negative1);
    RUN_TEST(Test_ptr_1);
    RUN_TEST(Test_ptr_15);
    RUN_TEST(Test_ptr_16);
    RUN_TEST(Test_ptr_17);
    RUN_TEST(Test_ptr_LONG_MIN_LONG_MAX);
    RUN_TEST(Test_ptr_INT_MIN_INT_MAX);
    RUN_TEST(Test_ptr_ULONG_MAX_neg_ULONG_MAX);
    RUN_TEST(Test_ptr_0_0);

    RUN_TEST(Test_print_X0);
    RUN_TEST(Test_print_X_negative1);
    RUN_TEST(Test_print_X_1);
    RUN_TEST(Test_print_X_9);
    RUN_TEST(Test_print_X_10);
    RUN_TEST(Test_print_X_11);
    RUN_TEST(Test_print_X_15);
    RUN_TEST(Test_print_X_16);
    RUN_TEST(Test_print_X_17);
    RUN_TEST(Test_print_X_99);
    RUN_TEST(Test_print_X_100);
    RUN_TEST(Test_print_X_101);
    RUN_TEST(Test_print_X_neg9);
    RUN_TEST(Test_print_X_neg10);
    RUN_TEST(Test_print_X_neg11);
    RUN_TEST(Test_print_X_neg14);
    RUN_TEST(Test_print_X_neg15);
    RUN_TEST(Test_print_X_neg16);
    RUN_TEST(Test_print_X_neg99);
    RUN_TEST(Test_print_X_neg100);
    RUN_TEST(Test_print_X_neg101);
    RUN_TEST(Test_print_X_UNT_MAX);
    RUN_TEST(Test_print_X_INT_MIN);
    RUN_TEST(Test_print_X_LONG_MAX);
    RUN_TEST(Test_print_X_LONG_MIN);
    RUN_TEST(Test_print_X_UINT_MAX);
    RUN_TEST(Test_print_X_ULONG_MAX);
    RUN_TEST(Test_print_X_MAX);

    RUN_TEST(Test_print_x0);
    RUN_TEST(Test_print_x_negative1);
    RUN_TEST(Test_print_x_1);
    RUN_TEST(Test_print_x_9);
    RUN_TEST(Test_print_x_10);
    RUN_TEST(Test_print_x_11);
    RUN_TEST(Test_print_x_15);
    RUN_TEST(Test_print_x_16);
    RUN_TEST(Test_print_x_17);
    RUN_TEST(Test_print_x_99);
    RUN_TEST(Test_print_x_100);
    RUN_TEST(Test_print_x_101);
    RUN_TEST(Test_print_x_neg9);
    RUN_TEST(Test_print_x_neg10);
    RUN_TEST(Test_print_x_neg11);
    RUN_TEST(Test_print_x_neg14);
    RUN_TEST(Test_print_x_neg15);
    RUN_TEST(Test_print_x_neg16);
    RUN_TEST(Test_print_x_neg99);
    RUN_TEST(Test_print_x_neg100);
    RUN_TEST(Test_print_x_neg101);
    RUN_TEST(Test_print_x_UNT_MAX);
    RUN_TEST(Test_print_x_INT_MIN);
    RUN_TEST(Test_print_x_LONG_MAX);
    RUN_TEST(Test_print_x_LONG_MIN);
    RUN_TEST(Test_print_x_UINT_MAX);
    RUN_TEST(Test_print_x_ULONG_MAX);
    RUN_TEST(Test_print_x_MAX);

}