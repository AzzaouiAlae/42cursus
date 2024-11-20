#include "Tests.h"

void Test_print_percent_sign()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = "%\n";

    //act
    size = ft_printf("%%\n");
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf("%%\n");
    exp = get_str_from_file();
    buffer = exp;

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_percent_sign_with_null()
{
    //arrange
    int size;
    int size_exp = -1;
    char *exp = "";

    //act
    size = ft_printf("not good %");
    char *str = get_str_from_file();
    //printf("[%s]\n", str);

    redirect_print_to_file();
    size_exp = printf("not good %");
    exp = get_str_from_file();

    printf("ft[%s]\t%d\n", str, size);
    printf(" c[%s]\t%d\n", exp, size_exp);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 1);
}

void Test_percent_sign_with_no_formatted()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = "not good %k";

    //act
    size = ft_printf("not good %k");
    char *str = get_str_from_file();
    //printf("[%s]\n", str);

    redirect_print_to_file();
    size_exp = printf("not good %k");
    exp = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 1);
}

void Test_print_0()
{
    //arrange
    int size;
    int size_exp = 1;
    char *exp = "0";

    //act
    size = ft_printf("%c", '0');
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_0_()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " 0 ";

    //act
    size = ft_printf(" %c ", '0');
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_0_256_()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %c", '0' - 256);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_0_256()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = " 0";

    //act
    size = ft_printf(" %c", '0' + 256);
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_0_0_1()
{
    //arrange
    int size;
    int size_exp = 7;
    char *exp = " 0 \0 1 ";

    //act
    size = ft_printf(" %c %c %c ", '0', 0, '1');
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_3space()
{
    //arrange
    int size;
    int size_exp = 7;
    char *exp = "       ";

    //act
    size = ft_printf(" %c %c %c ", ' ', ' ', ' ');
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_123()
{
    //arrange
    int size;
    int size_exp = 7;
    char *exp = " 1 2 3 ";

    //act
    size = ft_printf(" %c %c %c ", '1', '2', '3');
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_210()
{
    //arrange
    int size;
    int size_exp = 7;
    char *exp = " 2 1 0 ";

    //act
    size = ft_printf(" %c %c %c ", '2', '1', '0');
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_null12()
{
    //arrange
    int size;
    int size_exp = 7;
    char *exp = " \0 1 2 ";

    //act
    size = ft_printf(" %c %c %c ", '\0', '1', '2');
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Char_Tests()
{
    RUN_TEST(Test_print_percent_sign);
    RUN_TEST(Test_percent_sign_with_null);
    RUN_TEST(Test_percent_sign_with_no_formatted);

    RUN_TEST(Test_print_0);
    RUN_TEST(Test_print_0_);
    RUN_TEST(Test_print_0_256_);
    RUN_TEST(Test_print_0_256);
    RUN_TEST(Test_print_0_0_1);
    RUN_TEST(Test_print_3space);
    RUN_TEST(Test_print_123);
    RUN_TEST(Test_print_210);
    RUN_TEST(Test_print_null12);
}