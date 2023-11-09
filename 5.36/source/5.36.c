#include <stdio.h>

void towerOfHanoi(int, char, char, char);

int main() 
{
    int n = 64;

    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

void towerOfHanoi(int n, char source, char auxiliary, char target)
{
	if (n == 1)
	{
		printf("Move disk 1 from %c to %c\n", source, target);
		return;
	}

	towerOfHanoi(n - 1, source, target, auxiliary);
	printf("Move disk %d from %c to %c\n", n, source, target);
	towerOfHanoi(n - 1, auxiliary, source, target);
}
