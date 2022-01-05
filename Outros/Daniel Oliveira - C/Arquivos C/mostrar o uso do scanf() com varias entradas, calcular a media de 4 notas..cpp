#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float p1, p2, p3, p4;
	double media;
	printf("\nDigite As Notas Das 4 Provas:\n ");
	scanf("%f %f %f %f", &p1, &p2, &p3, &p4);
	
	media = (p1 + p2 + p3 + p4)/4.0;
	
	printf("\n MEDIA: %.2f \n", media);
system("pause");
return(0);	
}
