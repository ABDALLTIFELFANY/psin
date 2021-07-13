#include<unistd.h>
#include<stdio.h>
int        ft_iterative_power(int nb, int power)
{
	    int        i;

	        if (power < 0)
			        return (0);
		    if (power == 0)
			            return (1);
		        i = nb;
			    while (power > 1)
				        {
						        nb *= i;
							        power--;
								    }
			        return (nb);
}
int main()
{
	    int nb = 16;
	        int power = 4;
		    printf("%d", ft_iterative_power(nb, power));
		        return 0;
}
