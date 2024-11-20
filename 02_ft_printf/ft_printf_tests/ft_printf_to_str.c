#include "Tests.h"

int saved_stdout;
int output_fd;
char *buffer;
char *buffer2;

void redirect_print_to_file()
{
	if(buffer)
		buffer2 = buffer;
    fflush(stdout);
	buffer = calloc(1024, 1);
	
	// Redirect the output to a file
	saved_stdout = dup(STDOUT_FILENO);
	output_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	dup2(output_fd, STDOUT_FILENO);
	close(output_fd);
}

void redirect_print_to_std_output()
{
    fflush(stdout);
	dup2(saved_stdout, STDOUT_FILENO);
	close(saved_stdout);
}

char *get_str_from_file()
{
    redirect_print_to_std_output();

	// Open the output file and check its contents
	FILE *fp = fopen("output.txt", "r");
	fgets(buffer, 1024, fp);
	fclose(fp);

	// Delete the output file
	remove("output.txt");
    return buffer;
}


