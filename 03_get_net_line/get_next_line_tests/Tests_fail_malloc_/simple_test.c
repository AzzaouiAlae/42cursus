#include "../Tests_fail_malloc.h"

int fd;
int fb_1_2;

void simple_Test1()
{
    //arrange
    fb_1_2 = open("files_to_read/file1.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fb_1_2);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test2()
{
    //arrange

    //act
    str = get_next_line(fb_1_2);
    
    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test3()
{
    //arrange
    fd = open("files_to_read/file3.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test4()
{
    //arrange
    fd = open("files_to_read/file4.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test5()
{
    //arrange
    fd = open("files_to_read/file5.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test6()
{
    //arrange
    fd = open("files_to_read/file6.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test7()
{
    //arrange
    fd = open("files_to_read/file7.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test()
{
    RUN_TEST(simple_Test1);
    RUN_TEST(simple_Test3);
    RUN_TEST(simple_Test4);
    RUN_TEST(simple_Test5);
    RUN_TEST(simple_Test6);
    RUN_TEST(simple_Test2);
    RUN_TEST(simple_Test7);
}
