#include <stdio.h>
#include "ft_stock_str.h"

int main(void)
{
	t_stock_str *a;
	int i = 0;
	char *strs[16];
	strs[0] = "aaaaaaa";
	strs[1] = "BCRgs9EcgK3nHjOx0W39AeC94s7zuZIU";
	strs[2] = "AydHtggXxsxGoKgk";
	strs[3] = "WxU715qtjfwkXIIur9fKYZ59";
	strs[4] = "iU26BXHxwiwMYG9R";
	strs[5] = "rKt60PKbZgfmyM6lxhOwk8HFxPVPlXIu3";
	strs[6] = "O1rebail3jpsQADDIJ0OEk9ILnVTmy0R";
	strs[7] = "G0YiRSiEtvJjd8LOUdYQ3CHU4BbZ";
	strs[8] = "2m44YeFHIkW5fT0Tv9BprBjPlQe0tmeQ";
	strs[9] = "MBydxtJeURCJpV5qJlNc8A6OgRGke";
	strs[10] = "p5CwYu9Iz3CxL0bO4QZJt";
	strs[11] = "JBlOlpBrZgeFjoz8EiiJXpiA2JoAS1ra";
	strs[12] = "bjaKNHV5LhqqhUDTcP";
	strs[13] = "7fCRy6PnuGd9qrpR";
	strs[14] = "cmLjgzAlUB246cftwnHe1u";
	strs[15] = "iXjnNWLpARuJSBkM";

	a = ft_strs_to_tab(15, strs);
	while (a[i].str)
	{
		printf("%s\n%d\n%s\n",a[i].str, a[i].size, a[i].copy);
		i++;
	}
	i = 0;
	while (a[i].str)
	{
		free(a[i].copy);
		i++;
	}
	free(a);
}