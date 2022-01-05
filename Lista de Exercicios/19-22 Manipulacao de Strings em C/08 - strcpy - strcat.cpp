#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// para concatena duas strings

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str1[40], str2[10], str3[40]="teste";
	strcpy(str1, "Inicio");
	strcpy(str2, "Fim");
	strcat(str1, str2);
	strcat(str3, str1);
	printf("%s\n",str1);
	printf("%s\n",str3);
	system("Pause");
	return 0;
}

