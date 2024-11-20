#include "Tests.h"

void Test_str_with_c()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = "?\n";
    char *s = "This is also a string";

    //act
    size = ft_printf("%c\n", s);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_char_with_s()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = "?\n";
    char ch = 'A';

    //act
    size = ft_printf("%s\n", ch);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_send_empty_format()
{
    //arrange
    int size;
    int size_exp = 0;
    char *exp = "";

    //act
    size = ft_printf("");
    char *str = get_str_from_file();

    /*redirect_print_to_file();
    size_exp = printf("");
    exp = get_str_from_file();*/
    

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 1);
}

void Test_str_format_null()
{
    //arrange
    int size;
    int size_exp = -1;
    char *exp = "";

    //act
    size = ft_printf(0);
    char *str = get_str_from_file();

    /*redirect_print_to_file();
    size_exp = printf(0);
    exp = get_str_from_file();*/

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 1);
}

void Test_str_s_null()
{
    //arrange
    int size;
    int size_exp = 0;
    char *exp = "";

    //act
    size = ft_printf("%s", "");
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf("%s", "");
    exp = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 1);
}

void Test_str_s_null1()
{
    //arrange
    int size;
    int size_exp = 1;
    char *exp = " ";

    //act
    size = ft_printf(" %s", "");
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(" %s", "");
    exp = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 1);
}

void Test_str_s_null2()
{
    //arrange
    int size;
    int size_exp = 1;
    char *exp = " ";

    //act
    size = printf("%s ", "");
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf("%s ", "");
    exp = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Test_str_s_null3()
{
    //arrange
    int size;
    int size_exp = 2;
    char *exp = "  ";

    //act
    size = ft_printf(" %s ", "");
    char *str = get_str_from_file();

    redirect_print_to_file();
    size_exp = printf(" %s ", "");
    exp = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Test_str_s1()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " - ";

    //act
    size = ft_printf(" %s ", "-");
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Test_str_s2()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = "  - ";

    //act
    size = ft_printf(" %s %s ", "", "-");
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Test_str_s3()
{
    //arrange
    int size;
    int size_exp = 6;
    char *exp = "  -   ";

    //act
    size = ft_printf(" %s %s ", " - ", "");
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Test_str_s4()
{
    //arrange
    int size;
    int size_exp = 13;
    char *exp = "  -   4  aaaa";
    char *s2 =  "aaaa";

    //act
    size = ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Test_str_s5()
{
    //arrange
    int size;
    int size_exp = 12;
    char *exp = "  -   4  2  ";

    //act
    size = ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Test_str_s6()
{
    //arrange
    int size;
    int size_exp = 18;
    char *exp = " NULL (null) NULL ";

    //act
    size = ft_printf(" NULL %s NULL ", NULL);
    char *str = get_str_from_file();

    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, 2);
}

void Str_Tests()
{
    RUN_TEST(Test_str_format_null);
    //RUN_TEST(Test_str_with_c); //this test is try to print str with %c so he take the first byte of the adrress and try to print it as char
	//RUN_TEST(Test_char_with_s); // this test cause segfault it try the use char 'A' as the address 65 and print string
    RUN_TEST(Test_send_empty_format);
    RUN_TEST(Test_str_s_null);
    RUN_TEST(Test_str_s_null1);
    RUN_TEST(Test_str_s_null2);
    RUN_TEST(Test_str_s_null3);
    RUN_TEST(Test_str_s1);
    RUN_TEST(Test_str_s2);
    RUN_TEST(Test_str_s3);
    RUN_TEST(Test_str_s4);
    RUN_TEST(Test_str_s5);
    RUN_TEST(Test_str_s6);
}