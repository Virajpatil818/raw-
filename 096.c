#include<stdio.h>

int main()
{
   int a[3][3],b[3][3],c[3][3],d[3][3],s[2][2];
   int *p,*q,i,j,k,l,min,max;
   d[i][j]=0;
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
printf("\n");
 for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  { 
       for(int k=0;k<3;k++)
       
     { 
        d[i][j]=0;
      d[i][j]= d[i][j]+*(p+(i*3)+k) * *(q+((i*3)+j));
       
         printf("%d \t ",d[i][j]);
     }
  }
  printf("\n");
}

 for(int i=0;i<3;i++)
{
   min=a[i][0];
    for(int j=0;j<3;j++)
  {
    if(min>=a[i][j])
     {
       min=a[i][j];
       s[0][0]=i;
       s[0][1]=j;
     }
  }
  j=s[0][1];
  max=a[0][j];
     for(int k=0;k<3;k++)
 {
   if(max<=a[k][j])
     {
       max=a[k][j];
       s[1][0]=k;
       s[1][1]=j;
     }
 }

  if(min==max)
   {
     if(s[0][0]==s[1][0] && s[0][1]==s[1][1])
     {
       printf(" Saddle point of matrix is %d",max);
     }
   }
}


   return 0;
}
