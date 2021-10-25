#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	//int		number1;
	//int		number2;
	//char	c;
	//char	str[] = "Hello World!!!";
	//void	*n;
	//void	*m;
	//int	u;
	int		str2;
	//int	x;
	//int	X;
	char	*str3;

	//number1 = -1;
	//number2 = 27;
	//c = 100;
	//n = (int *)2000000000;
	//m = (char *)'m';
	//u = -1000;
	str2 = 1000000;
	//x = 12;
	//X = 12;
	str3 = "Hello World!!!";

	//printf("%d\n%i\n%c\n%p\n%s\n%u\n%%\n", number1, number2, c, n, str, u);
	//printf("%x\n", str2);

	ft_printf("%s\n", str3);
	printf("%s\n", str3);
	ft_printf("%%%%%%%%\n");
	printf("%%%%%%%%\n");
	return (0);
}
