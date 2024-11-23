#include "../Tests_fail_malloc.h"

int fb2;

void Test_second_line_fail_malloc1()
{
    //arrange
    char *exp = "\n";
    fb_1_2 = open("files_to_read/file1.txt", O_APPEND | O_CREAT | O_CREAT);
    malloc_fail = -10;

    //act
    str = get_next_line(fb_1_2);

    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, strlen(str) + 1);
    free(str);

    //arrange
    malloc_fail = 2;

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test_second_line_fail_malloc2()
{
    //arrange
    char *exp1 = "0123456789012345678901234567890123456789\n";
    fd = open("files_to_read/file6.txt", O_APPEND | O_CREAT | O_CREAT);
    malloc_fail = -10;

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp1));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp1, str, strlen(str) + 1);
    free(str);

    //arrange
    malloc_fail = 2;

    //act
    str = get_next_line(fd);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test_second_line_fail_malloc3()
{
    //arrange
    char *exp = "abcdefghij\n";
    fd_tests = open("files_to_read/file15.txt", O_APPEND | O_CREAT | O_CREAT);
    malloc_fail = -10;

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(exp), strlen(str));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, strlen(str) + 1);
    free(str);

    //arrange
    malloc_fail = 2;

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}
void Test_second_line_fail_malloc5()
{
    //arrange
    char *exp = "\n";
    fb_1_2 = open("files_to_read/file1.txt", O_APPEND | O_CREAT | O_CREAT);
    malloc_fail = -10;

    //act
    str = get_next_line(fb_1_2);

    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, strlen(str) + 1);
    free(str);
    str = NULL;
    if(BUFFER_SIZE <= 1)
    {

        //arrange
        malloc_fail = 1;

        //act
        str = get_next_line(fd);

        //asert
        TEST_ASSERT_EQUAL_INT64(0, str);
    }
}

void Test_second_line_fail_malloc6()
{
    //arrange
    char *exp1 = "0123456789012345678901234567890123456789\n";
    fd = open("files_to_read/file6.txt", O_APPEND | O_CREAT | O_CREAT);
    malloc_fail = -10;

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp1));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp1, str, strlen(str) + 1);
    free(str);
    str = NULL;

    if(BUFFER_SIZE % 41 == 0)
    {
        //arrange
        malloc_fail = 1;

        //act
        str = get_next_line(fd);

        //asert
        TEST_ASSERT_EQUAL_INT64(0, str);
    }
}

void Test_second_line_fail_malloc7()
{
    //arrange
    char *exp = "abcdefghij\n";
    fd_tests = open("files_to_read/file15.txt", O_APPEND | O_CREAT | O_CREAT);
    malloc_fail = -10;

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(exp), strlen(str));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, strlen(str) + 1);
    free(str);
    str = NULL;

    if(BUFFER_SIZE % 20 == 0)
    {
        //arrange
        malloc_fail = 1;

        //act
        str = get_next_line(fd);

        //asert
        TEST_ASSERT_EQUAL_INT64(0, str);
    }
}

void Test_second_line_fail_malloc()
{
    RUN_TEST(Test_second_line_fail_malloc1);
    RUN_TEST(Test_second_line_fail_malloc2);
    RUN_TEST(Test_second_line_fail_malloc3);
    RUN_TEST(Test_second_line_fail_malloc5);
    RUN_TEST(Test_second_line_fail_malloc6);
    RUN_TEST(Test_second_line_fail_malloc7);
}
