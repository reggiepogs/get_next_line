#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char *buff;

	if (argc == 2)
	{
		int i;
		fd = open(argv[1], O_RDONLY);
		i = 0;
		while ((ret = get_next_line(fd, &buff)) >= -1)
		{
			printf("Line #%d READ:[%s]\n", i++, buff);
			free(buff);
			if (ret == 0 || ret == -1)
				break;
		}
		printf("-----------\n");
		if (ret == -1)
			printf("Something failed\n");
		else if (ret == 0)
			printf("END OF FILE\n");
		if (close(fd) == -1)
			return (0);	
	}
	if (argc == 1)
	{
		int i;
		//fd = open(0, O_RDONLY);
		i = 0;
		while ((ret = get_next_line(0, &buff)) >= -1)
		{
			printf("Line #%d READ:[%s]\n", i++, buff);
			if (ret == 0 || ret == -1)
				break;
		}
		printf("-----------\n");
		if (ret == -1)
			printf("Something failed\n");
		else if (ret == 0)
			printf("END OF FILE\n");
		if (close(fd) == -1)
			return (0);
	}
	return (0);
}
