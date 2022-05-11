#include <stdio.h>

double tayler(double x, int n)
{
	if (n <= 30 && n >= 1)
	{
		return 1 + (x / n) * tayler(x, n + 1);
	}
	else return 0;
}


int main()
{
	int i = 1;
	while(i <= 10 )
	{
		printf("e%d = %f\n", i, tayler(i, 1));
		i++;
	}

}