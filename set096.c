#include<stdio.h>

int main()
{ 
  int l,m,n,i,j=0,temp,flag=0;
  int u[10];
  int a[10];
  int b[10];
  int x[50],x1[50],y[50],z[50];
  
  printf("enter size of set U \n");
  scanf("%d",&l);
  printf("enter size of set a \n");
  scanf("%d",&m);
  printf("enter size of set b\n");
  scanf("%d",&n);
  
   printf("Enter elements of set U ");
  for(int i=0;i<l;i++){
  printf("\n element %d \n",i+1);
  scanf("%d",&u[i]);
  }
  
   printf("Enter elements of set A");
  for(int i=0;i<m;i++){
  printf("\n element %d \n",i+1);
  scanf("%d",&a[i]);
  }
  
   printf("Enter elements of set B ");
  for(int i=0;i<n;i++){
  printf("\n element %d \n",i+1);
  scanf("%d",&b[i]);
  }
   
  //code 
  for(int i=0;i<m;i++){
    x[j]=a[i];
    j++;
  }
   for(int i=0;i<n;i++){
     x[j]=b[i];
     j++;
  } 
  
   for(int i=0;i<(m+n);i++)
   { temp=x[i];
    for(int j=i+1;j<(m+n);j++){
      if(temp==x[j])
      {
        for(int k=j;k<(m+n);k++)
         x[k]=x[k+1];
         flag++;
      }
    }
   }
    printf("union\n");
    for(int i=0;i<(m+n-flag+1);i++){
        printf("%d",x[i]);
    }
   
  return 0;
  
}
