#include "ft_strncpy.c"
#include <stdio.h>

int main (void)
{
	char src[15] = "123456789 yolo";
	char dest[128] = "";
	unsigned int n = 30;
	unsigned int i;

	ft_strncpy(dest, src, n);
	printf("n  : \"");
	for(i = 0; i < n; i++)
	{
		printf("X");
	}
	printf("\"\n");
	printf("src: \"%s\"\n", src);
	printf("dst: \"%s\"\n",dest);
	return (0);
}
