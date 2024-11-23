#include "../Tests.h"

int fd;
int fb_1_2;

void simple_Test1()
{
    //arrange
    char *exp = "\n";
    fb_1_2 = open("files_to_read/file1.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fb_1_2);

    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, strlen(str) + 1);
}

void simple_Test2()
{
    //arrange
    char *exp = "\n";

    //act
    str = get_next_line(fb_1_2);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, strlen(exp) + 1);
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
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen("\n"));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "\n", str, strlen(str) + 1);
    free(str);

    //act
    str = get_next_line(fd);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test5()
{
    //arrange
    char *exp = "01234567890123456789012345678901234567890";
    fd = open("files_to_read/file5.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp, str, strlen(str) + 1);
    free(str);

    //act
    str = get_next_line(fd);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test6()
{
    //arrange
    char *exp1 = "0123456789012345678901234567890123456789\n";
    char *exp2 = "0";
    fd = open("files_to_read/file6.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp1));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp1, str, strlen(str) + 1);
    free(str);

    //act
    str = get_next_line(fd);

    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp2));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp2, str, strlen(str) + 1);
    free(str);

    //act
    str = get_next_line(fd);

    //asert
    TEST_ASSERT_EQUAL_INT64(0, str);
}

void simple_Test7()
{
    //arrange
    char *exp1 = "01234567890123456789012345678901234567890\n";
    fd = open("files_to_read/file7.txt", O_APPEND | O_CREAT | O_CREAT);

    //act
    str = get_next_line(fd);
    
    //asert
    TEST_ASSERT_EQUAL_INT32(strlen(exp1), strlen(str));
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp1, str, strlen(str) + 1);
    //free(str);

    //act
    if(BUFFER_SIZE == 42)
    {
        /*read(fd, str, 1);
        str[1] = '\0';
        //asert
        TEST_ASSERT_EQUAL_INT32(strlen(str), strlen(exp2));
        TEST_ASSERT_CHAR_ARRAY_WITHIN(0, exp2, str, strlen(str) + 1);
*/
        str = get_next_line(fd);
        TEST_ASSERT_EQUAL_INT64(0, str);
    }
    
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