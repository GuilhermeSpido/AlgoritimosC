#include<stdio.h>
#include<math.h>

void main()
{
         int valor;
         int n100,n50,n20,n10,n5,n2,n1;
         printf("Quantos reais:\n");
         scanf("%d",&valor);
         n100=valor/100;
         valor=valor%100;
         n50=valor/50;
         valor=valor%50;
         n20=valor/20;
         valor=valor%20;
         n10=valor/10;
         valor=valor%10;
         n5=valor/5;
         valor=valor%5;
         n2=valor/2;
         n1=valor%2;

         printf("notas:%d de 100, %d de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d notas de 1",n100,n50,n20,n10,n5,n2,n1);
         
         

}