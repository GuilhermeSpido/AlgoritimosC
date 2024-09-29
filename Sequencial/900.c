#include<stdio.h>
#include<math.h>

void main()
{
         float a,b,c,s,area;
         printf("o valor dos 3 lados do triangulo\n");
         scanf("%f%f%f",&a,&b,&c);
         s=(a+b+c)/2;
         area=sqrt(s*(s-a)*(s-b)*(s-c));
         printf("A area do triangulo formado e %.2f",area);
         
         

}