                                            # nested loops & functions
# A nested loop is a (inner) loop that appears in the loop body of another (outer) loop. The inner or outer loop can be any type: while, do while, or for.    * For example, the inner loop can be a while loop while an outer loop can be a for loop.

#include <stdio.h>  
int main()  
{  
   int number;
   printf("Enter the value of n :");
   
   /* outer loop */
  for(int i=1;i<=number;i++)  
   {  
       /* inner loop */
       for(int j=1;j<=10;j++)  
       {  
           printf("%d\t",(i*j));
       }  
       printf("\n");  
   }  
