#include<stdio.h>

double pow(double, int);

int main()
{
    double base;
    int exponent;

    scanf("%lf%d",&base,&exponent);
    printf("pow(%.2lf,%d) = %.2lf\n",base,exponent,pow(base,exponent));

	system("pause");
	return 0;
}

double pow(double base, int exponent)
{
	if (exponent < 1) {
		return 1.0;
	}
	else
	{
		return base * pow(base, exponent - 1);
	}
}