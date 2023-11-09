#include<stdio.h>

int main()
{
    int res =1;
    int a,b;

    scanf("%d%d",&a,&b);

    while(1)
	{
        if(res%a == 0 && res%b == 0)
		{
            printf("LCM is %d\n",res);
            break;
        } 
		else 
		{
            res++;
        }
    }
	system("pause");
	return 0;
}