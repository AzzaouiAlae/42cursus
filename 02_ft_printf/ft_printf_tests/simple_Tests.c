#include "Tests.h"

void Simple_Test()
{
    //arrange
    int size;
    int size_exp = 5;
    char *exp = "Hello";

    //act
    size = ft_printf("Hello");
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size);
}

void Simple_Test_num()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = "10\n";
    int a = 10;

    //act
    size = ft_printf("%d\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_455_d()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = "455\n";
    int a = 455;

    //act
    size = ft_printf("%d\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_455_i()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = "455\n";
    int a = 455;

    //act
    size = ft_printf("%i\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_plus455_d()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = "455\n";
    int a = +455;

    //act
    size = ft_printf("%d\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_negative455_d()
{
    //arrange
    int size;
    int size_exp = 5;
    char *exp = "-455\n";
    int a = -455;

    //act
    size = ft_printf("%d\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_455_u()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = "455\n";
    int a = 455;

    //act
    size = ft_printf("%u\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_negative455_u()
{
    //arrange
    int size;
    int size_exp = 11;
    char *exp = "4294966841\n";
    int a = -455;

    //act
    size = ft_printf("%u\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_455_x()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = "1c7\n";
    int a = 455;

    //act
    size = ft_printf("%x\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_num_455_X()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = "1C7\n";
    int a = 455;

    //act
    size = ft_printf("%X\n", a);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_Char_A()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = "A\n";
    char c = 'A';

    //act
    size = ft_printf("%c\n", c);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_str()
{
    //arrange
    int size;
    int size_exp = 17;
    char *exp = "This is a string\n";
    char *s = "This is a string";

    //act
    size = ft_printf("%s\n", s);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Simple_Test_str2()
{
    //arrange
    int size;
    int size_exp = 22;
    char *exp = "This is also a string\n";
    char *s = "This is also a string";

    //act
    size = ft_printf("%s\n", s);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void simple_Tests()
{
    RUN_TEST(Simple_Test);
    RUN_TEST(Simple_Test_num);
    RUN_TEST(Simple_Test_num_455_d);
    RUN_TEST(Simple_Test_num_455_i);
    RUN_TEST(Simple_Test_num_plus455_d);
    RUN_TEST(Simple_Test_num_455_u);
    RUN_TEST(Simple_Test_num_negative455_u);
    RUN_TEST(Simple_Test_num_455_x);
    RUN_TEST(Simple_Test_num_455_X);
    RUN_TEST(Simple_Test_Char_A);
    RUN_TEST(Simple_Test_str);
    RUN_TEST(Simple_Test_str2);
}