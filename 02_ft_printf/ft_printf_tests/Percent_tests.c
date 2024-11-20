#include "Tests.h"

void Test_print_Percent()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = " % ";

    //act
    size = ft_printf(" %% ");
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_2Percent()
{
    //arrange
    int size;
    int size_exp = 4;
    char *exp = " %% ";

    //act
    size = ft_printf(" %%%% ");
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_3Percent()
{
    //arrange
    int size;
    int size_exp = 7;
    char *exp = " % % % ";

    //act
    size = ft_printf(" %% %% %% ");
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_3_Percent()
{
    //arrange
    int size;
    int size_exp = 9;
    char *exp = " %  %  % ";

    //act
    size = ft_printf(" %%  %%  %% ");
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Test_print_2_Percent()
{
    //arrange
    int size;
    int size_exp = 3;
    char *exp = "% %";

    //act
    size = ft_printf("%% %%");
    char *str = get_str_from_file();
    
    //asert
    TEST_ASSERT_EQUAL_INT32(size_exp, size);
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, size_exp);
}

void Percent_tests()
{
    RUN_TEST(Test_print_Percent);
    RUN_TEST(Test_print_2Percent);
    RUN_TEST(Test_print_3Percent);
    RUN_TEST(Test_print_3_Percent);
    RUN_TEST(Test_print_3_Percent);
    RUN_TEST(Test_print_2_Percent);
}