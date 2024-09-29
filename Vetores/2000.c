#include<stdio.h>

void main()
{
         int i,j,auxp;
         int p[10];
         float h[10],auxh;
         for(i=0;i<10;i++)
         {
                  printf("Digite o peso:\n");
                  scanf("%d",&p[i]);
                  printf("Digite a altura:\n");
                  scanf("%f",&h[i]);
         }
         for(i=0;i<9;i++){
                  for(j=0;j<9-i;j++)
                  {
                           if(h[j]>h[j+1])
                           {
                                    auxh=h[j];
                                    h[j]=h[j+1];
                                    h[j+1]=auxh;
                                    auxp=p[j];
                                    p[j]=p[j+1];
                                    p[j+1]=auxp;
                           }
                  }
         }
         for (i=0;i<10;i++){
                  printf("Peso:%d Altura:%f\n",p[i],h[i]);
         }
}