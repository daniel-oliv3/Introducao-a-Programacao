#include<stdio.h>
#include<conio.h>
   
int main()
    {
        	int i, j,k,l;
       
		   	for (i = 1; i <= 10; i++)
        	{
            for (j = 1; j <= 10; j = j + 1)
                printf("%2d + %2d = %3d\n", j, i, i + j);
           		printf("\n");
       		}
       		
        	for (k = 1; k <= 10; k++)
        	
        	{
        		
            for (l = 1; l <= 10; l = l + 1)
                printf("%2d - %2d = %3d\n", k, l, k - l);
           		printf("\n");
    		}
    		return 0;
	}	
