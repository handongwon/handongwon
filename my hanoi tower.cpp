#include <stdio.h>

void move(int n, int from, int to)
{
	int c;
	if (n <= 1)
	{

		printf("move disk %d from tray %d to tray %d\n", n-1, from, to);
	}
	else
	{
		c = 6 - from - to;
		move((n - 1), from, c);
		printf("move disk %d from tray %d to tray %d\n", n-1, from, to);
		move((n - 1), c, to);

	}
}


int main()
{
	int n;
	printf("input : ");
	scanf_s("%d", &n);
	printf("output : \n");
	move(n, 1, 2);

}