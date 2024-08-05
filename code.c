#include<stdio.h>  
#include<conio.h>  
void main()  
{  
int num, Sum = 0, i, Max, Min;  
// Take two number from the user: min and max  
printf("Enter the minimum and the maximum value\n");  
scanf("%d %d", &Min, &Max);  
  
printf("\n Perfect Number between %d and %d are\n ", Min, Max);  
for(num = Min; num <= Max; num++)  
                     {  
                             for(i = 1, Sum = 0; i < num; i++)  
                                     {  
                                            if(num %i == 0)  
                                            Sum = Sum + i;  
                                      }  
                              if(Sum == num)  
                             printf("%d \t", num);  
                      }  
  getch();  
}  
