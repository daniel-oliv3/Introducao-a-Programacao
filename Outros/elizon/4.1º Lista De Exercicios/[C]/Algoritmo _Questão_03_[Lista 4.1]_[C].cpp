#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

int main()
{
         int cont,cont2,x;
         float a;
         a=0; cont=1; cont2=1;
         
         for(x=1;x<=25;x++)
		 {
			a=a+(float)cont2/(float)cont;
			cont2=cont2+2;
			cont=cont+1;
		 }
         printf("O resultado: %.2f",a);
         
	getch();
	return(0);
}
