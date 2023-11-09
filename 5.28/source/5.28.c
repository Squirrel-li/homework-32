#include<stdio.h>

char tran(char);

int main()
{
    char ch;

    printf("Enter a char :");
    scanf("%c",&ch);
    printf("Answer is %c\n",tran(ch));

	system("pause");
	return 0;
}

char tran(char ch) 
{
	if (ch >= 'A' && ch <= 'Z') return ch + 32;
	else if (ch >= 'a' && ch <= 'z') return ch - 32;
	return '\0';
}