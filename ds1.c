#include<stdio.h>

int main()
{
   int a[3][3],b[3][3],c[3][3];
   int *p,*q,j;
   p=&a[0][0];
   q=&b[0][0];
   for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element a[%d][%d]",i,j);
    scanf("%d",(p+((i*3)+j)));
}
    
} 

 for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element b[%d][%d]",i,j);
    scanf("%d",(q+((i*3)+j)));
}
    
} 

printf("\n");
   for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
      c[i][j]=*(p+((i*3)+j))+*(q+((i*3)+j));
      
      printf("%d \t ",c[i][j]);
   
  }
printf("\n");
}


   return 0;
}
