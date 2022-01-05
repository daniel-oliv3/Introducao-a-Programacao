#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		  int n, n0=1, a1, r, s=0;
	printf("Termos: ");
	scanf("%d", &n);
	printf("\nPrimeiro termo: ");
	scanf("%d", &a1);
	printf("\nRazao: ");
	scanf("%d", &r);
	printf("\n");
	while(n0<=n){
		printf("%d ", a1);
		s+=a1;
		a1+=r;
		n0++;
	}
	printf("\nSoma dos termos: %d\n", s);



		  system("pause");
		  return(0);
		  }

