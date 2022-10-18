#include <stdio.h>

int main()
{
   int r,c,count=0;
   printf("Enter rows \n");
    scanf("%d",&r);
   printf("Enter column \n");
    scanf("%d",&c);
    int a[r][c];
   printf("Enter matrix \n");
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
           if(a[i][j]==0)
           {
               count++;
           }
       }
   }
    
    if(count>r*c/2)
    {
        printf("spars matrix \n");
    }
    else {
        printf(" not spars matrix \n"); 
    }
    return 0;
}
