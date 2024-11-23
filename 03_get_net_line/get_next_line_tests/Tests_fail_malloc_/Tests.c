#include "../Tests_fail_malloc.h"

int fd_tests;

void Test1()
{
    //arrange
    fd_tests = open("files_to_read/file8.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test2()
{
    //arrange
    fd_tests = open("files_to_read/file9.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test3()
{
    //arrange
    fd_tests = open("files_to_read/file10.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test4()
{
    //arrange
    fd_tests = open("files_to_read/file11.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test5()
{
    //arrange
    fd_tests = open("files_to_read/file12.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test6()
{
    //arrange
    fd_tests = open("files_to_read/file13.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test7()
{
    //arrange
    fd_tests = open("files_to_read/file14.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test8()
{
    //arrange
    fd_tests = open("files_to_read/file15.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test9()
{
    //arrange
    fd_tests = open("files_to_read/file15.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test10()
{
    //arrange
    fd_tests = open("files_to_read/file16.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test11()
{
    //arrange
    fd_tests = open("files_to_read/file17.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test12()
{
    //arrange
    fd_tests = open("files_to_read/file18.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}
void Test13()
{
    //arrange
    fd_tests = open("files_to_read/file19.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test14()
{
    //arrange
    fd_tests = open("files_to_read/file20.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test15()
{
    //arrange
    fd_tests = open("files_to_read/file21.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test16()
{
    //arrange
    fd_tests = open("files_to_read/file22.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test17()
{
    //arrange
    fd_tests = open("files_to_read/file22.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test18()
{
    //arrange
    fd_tests = open("files_to_read/file23.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test19()
{
    //arrange
    fd_tests = open("files_to_read/file24.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void Test20()
{
    //arrange
    fd_tests = open("files_to_read/file25.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd_tests);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}
void Tests()
{
    RUN_TEST(Test1);
    RUN_TEST(Test2);
    RUN_TEST(Test3);
    RUN_TEST(Test4);
    RUN_TEST(Test5);
    RUN_TEST(Test6);
    RUN_TEST(Test7);
    RUN_TEST(Test8);
    RUN_TEST(Test9);
    RUN_TEST(Test10);
    RUN_TEST(Test11);
    RUN_TEST(Test12);
    RUN_TEST(Test13);
    RUN_TEST(Test14);
    RUN_TEST(Test15);
    RUN_TEST(Test16);
    RUN_TEST(Test17);
    RUN_TEST(Test18);
    RUN_TEST(Test19);
    RUN_TEST(Test20);
}