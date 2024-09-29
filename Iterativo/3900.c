#include<stdio.h>
void main()
{
         int d1,d2,m1,m2,a1,a2,cont;
         printf("Digite a d1:\n");
         scanf("%d%d%d",&d1,&m1,&a1);
         printf("Digite a d2:\n");
         scanf("%d%d%d",&d2,&m2,&a2);
         cont=1;
         while(d1!=d2 || m1!=m2 || a1!=a2){
                  if(d1==31 && m1==12){
                           d1=1;
                           m1=1;
                           a1+=1; 
                  }
                  else if(d1==31 && (m1==1 || m1==3 || m1==5||m1==7|| m1==8||m1==10||m1==12)){
                           d1=1;
                           m1+=1;
                  }
                  else if(d1==30 && (m1==4||m1==6||m1==9||m1==11)){
                           d1=1;
                           m1+=1;
                  }
                  else if(d1==29 && m1==2 && a1%4==0){
                           d1=1;
                           m1+=1;
                  }
                  else if(d1==28 && m1==2 && a1%4!=0){
                           d1=1;
                           m1+=1;
                  }
                  else{
                           d1+=1;
                  }
                  cont++;
         }
         printf("Dias:%d",cont);
         

}