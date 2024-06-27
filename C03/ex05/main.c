#include <stdio.h>
#ifdef __linux__
	#include <bsd/string.h>
#elif __APPLE__
	#include <string.h>
#endif

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED   "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

unsigned int	test_1(int i)
{
	char str1[13][500] = {"0","1","a towel has immense psychological value",\
	"10a010", "pouic",\
	 "aaaa", "aaaa", "aaaa", "aaaa", "aaaa", "aaaa", "aaaa", "aaaaaaa"};
	char str2[13][500] = {"1","0","For some reason,\
	 if a strag discovers that a hitchhiker has his towel with him,\
	  he will automatically assume that he is also in possession of a\
	   toothbrush, washcloth, soap, tin of biscuits, flask, compass,\
	    map, ball of string, gnat spray,\
	    wet-weather gear, space suit etc., etc.","101010", "pouic",\
		 "xyz", "xyz", "xyz", "xyz", "xyz", "xyz", "xyz", "xyqwerrturerettw"};
	unsigned int n[13] = {0, 10, 50, 9, 1, 0, 2, 3, 4, 5, 6, 20, 2};
	unsigned int ret = 0;

	printf("-- strlcat --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	ret = strlcat(str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "strlcat : %s\nsize : %u\n" ANSI_COLOR_RESET,\
	 str1[i], ret);
	printf("strlen(dest): %ld\n", strlen(str1[i]));
	printf("strlen(src): %ld\n", strlen(str2[i]));
	return (ret);
}

unsigned int	test_2(int i)
{
	char str1[13][500] = {"0","1","a towel has immense psychological value",\
	"10a010", "pouic",\
	 "aaaa", "aaaa", "aaaa", "aaaa", "aaaa", "aaaa", "aaaa", "aaaaaaa"};
	char str2[13][500] = {"1","0","For some reason,\
	 if a strag discovers that a hitchhiker has his towel with him,\
	  he will automatically assume that he is also in possession of a\
	   toothbrush, washcloth, soap, tin of biscuits, flask, compass,\
	    map, ball of string, gnat spray,\
	    wet-weather gear, space suit etc., etc.","101010", "pouic",\
		 "xyz", "xyz", "xyz", "xyz", "xyz", "xyz", "xyz", "xyqwerrturerettw"};
	unsigned int n[13] = {0, 10, 50, 9, 1, 0, 2, 3, 4, 5, 6, 20, 2};
	unsigned int ret = 0;

	printf("-- ft_strlcat --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	ret = ft_strlcat(str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "ft_strlcat : %s\nsize : %u\n" ANSI_COLOR_RESET,\
	 str1[i], ret);
	printf("strlen(dest): %ld\n", strlen(str1[i]));
	printf("strlen(src): %ld\n", strlen(str2[i]));
	return (ret);
}


int main (void)
{
	unsigned int	n_0;
	unsigned int	n_1;
	for (int i = 0; i < 13; i++)
	{
		n_0 = test_1(i);
		n_1 = test_2(i);
		printf("=== test %2d ===\n", i);
		if (n_0 == n_1)
			printf(ANSI_COLOR_GREEN "ft_strlcat : %d\nstrlcat    : %d\n"\
			 ANSI_COLOR_RESET, n_1, n_0);
		else
			printf(ANSI_COLOR_RED "ft_strlcat : %d\nstrlcat    : %d\n"\
			 ANSI_COLOR_RESET, n_1, n_0);
		printf("===============\n");
	}
	return (0);
}