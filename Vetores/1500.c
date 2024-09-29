#include <stdio.h>
#define N 10
void main()
{
  int i,n,existe=0,j,k,pos=0,z;
  int vet[N];


  for(i=0;i<N;i++)
  {
           printf("Digite o valor:\n");
           scanf("%d",&vet[i]);
  }
  for(j=0;j<10;j++)
  {
           printf("Digite o valor:\n");
           scanf("%d",&n);
           existe=0;
           for(i=0;i<N;i++)
           {
                    if(vet[i]==n)
                    {
                           existe=1;
                    break;
                             }
           }
    for(k=0;k<10;k++)
    {
             if(vet[i]==vet[n])
             {       
             z=k*pos;
             pos*=10;
             }
    }                  

  printf("Existe:%d\n",existe);
  }
}