#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// string

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str[10]="Joao";
	printf("String: %c\n",str);
	printf("Segunda letra: %c\n",str[1]);
	str[1]='U';
	printf("Agora a terceira letra é: %c\n", str[2]);
	printf("String resultante: %s\n",str);
	system("Pause");
	return 0;
}

