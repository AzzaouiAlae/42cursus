#include "Tests.h"

void test_read()
{
	int fd_tests = open("files_to_read/file3.txt", O_APPEND | O_CREAT | O_CREAT);

    char str5[10];
	int i = read(fd_tests, str5, 1);
	int i2 = read(fd_tests, &str5[1], 1);
	int i4 = read(fd_tests, &str5[2], 1);
	int i5 = read(fd_tests, &str5[2], 1);
	int i6 = read(5, &str5[2], 1);
	printf("%d\t%d\t%d\t%d\t%d\n", i, i2, i4, i5, i6);
}

int	main(void)
{
	simple_Test();
    Tests();
	//test_read();
	return (UnityEnd());
}