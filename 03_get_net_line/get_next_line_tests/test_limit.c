#include "Tests.h"

FILE	*errors_file;

char	*decode(char *buffer, char *result)
{
	int	offset;
	int	size;

	offset = 0;
	while (*buffer)
	{
		if (*buffer >= '0' && *buffer <= '9')
		{
			size = atoi(buffer);
			for (int i = 0; i < size; i++)
			{
				result[offset] = (offset % 26) + 'a';
				offset++;
			}
			while (*buffer >= '0' && *buffer <= '9')
			{
				buffer++;
			}
		}
		else if (*buffer == '\n')
		{
			result[offset++] = '\n';
			buffer++;
		}
		else
		{
			fprintf(stderr, "Fix your shit");
		}
	}
	result[offset] = 0;
	return (result);
}
int	count_lines(char *str)
{
	int		i;
	char	*s;

	i = 0;
	s = str;
	while (s != NULL)
	{
		s = strchr(s, '\n');
		if (s != NULL)
			s++;
		i++;
	}
	if (str[strlen(str) - 1] == '\n')
		i--;
	return (i);
}
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s;
	size_t	len;

	i = 0;
	len = strlen(s1);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
char	*get_line(char *s, int i)
{
	char	*next;
	char	*res;

	while (*s && i > 0)
	{
		if (*s == '\n')
			i--;
		s++;
	}
	if (i > 0 || *s == 0)
		return (NULL);
	next = strchr(s, '\n');
	if (next)
	{
		res = calloc(next - s + 2, 1);
		strncpy(res, s, next - s + 2);
		res[next - s + 1] = 0;
		return (res);
	}
	else
		return (ft_strdup(s));
}
int		fd_10;
char	*expected_10;
void Test()
{
    char *str = get_next_line(fd_10);

    //asert
    if(expected_10)
    {
        //printf("[%s]\n", expected_10);
        TEST_ASSERT_EQUAL_INT32(strlen(expected_10), strlen(str));
        TEST_ASSERT_CHAR_ARRAY_WITHIN(0, expected_10, str, strlen(str) + 1);
    }
    if(str)
        free(str);
}
#include <unistd.h>
#include <sys/stat.h>
void	test_limit(char *encoding)
{
	char	content[10000];
	int		lines;
	

	decode(encoding, content);
    int output_fd = open("limits.txt", O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	
	write(output_fd, content, strlen(content));
    //close(output_fd);
	fd_10 = open("limits.txt", O_RDONLY);
	lines = count_lines(content) + 1;
	for (int i = 0; i < lines; i++)
	{
		expected_10 = get_line(content, i);
        RUN_TEST(Test);
		if (expected_10 != NULL)
			free(expected_10);
	}
	//close(fd_10);
}

int	main(void)
{
	char *tests[18] = {"9", "9\n", "10", "10\n", "11", "11\n", "19", "19\n",
		"20", "20\n", "21", "21\n", "9\n9\n", "9\n10", "9\n10\n", "10\n8\n",
		"10\n9", "10\n9\n"};
	//if (BUFFER_SIZE == 10)
	//{
		for (int i = 0; i < 18; i++)
			test_limit(tests[i]);
		return (UnityEnd());
	//}
}