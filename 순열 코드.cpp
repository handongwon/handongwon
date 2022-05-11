#include <stdio.h>

long combi(int n, int r);

int main(void) {
	int n, r;

	printf("input n r : ");
	scanf_s("%d%d", &n, &r);
	printf("%dC%d = %ld\n", n, r, combi(n, r));

}

long combi(int n, int r) {
	if (r == 0 || n == r)
		return 1;
	return combi(n - 1, r - 1) + combi(n - 1, r);
}

