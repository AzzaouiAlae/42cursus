#include "Tests_fail_malloc.h"

int	main(void)
{
    simple_Test();
    Tests();
    Test_second_line_fail_malloc();
	return (UnityEnd());
}