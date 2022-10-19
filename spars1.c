#include <stdio.h>

int
main ()
{
  int r, c, count = 0,k,t,flag=0;
  printf ("Enter rows \n");
  scanf ("%d", &r);
  printf ("Enter column \n");
  scanf ("%d", &c);
  int a[r][c];
  int b[r][c];
  printf ("Enter matrix A \n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf("Enter element a[%d][%d]",i,j);
	  scanf ("%d", &a[i][j]);
	  if (a[i][j] == 0)
	    {
	      count++;
	    }
	    else{
	        k++;
	    }
	}
    }
    
     printf ("Enter matrix B \n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf("Enter element b[%d][%d]",i,j);
	  scanf ("%d", &b[i][j]);
	  if (b[i][j] == 0)
	    {
	      flag++;
	    }
	    else{
	        t++;
	    }
	}
    }

  /*if (count > r * c / 2)
    {
      printf ("spars matrix \n");
    }
  else
    {
      printf (" not spars matrix \n");
    }
    */
    int s[k+1][3];
    int p=1;
    
    s[0][0]=r;
    s[0][1]=c;
    s[0][2]=k;
     for (int i = 0; i < r; i++)
    {
      for (int j =0; j < c; j++){
          if(a[i][j]!=0){
              s[p][0]=i;
              s[p][1]=j;
              s[p][2]=a[i][j];
              p++;
          }
      }
    }
      printf("\t R \t C \t V");
       for (int i = 0; i < k+1; i++){
           printf(" \n \t %d \t %d \t %d",s[i][0],s[i][1],s[i][2]);
           printf("\n");
       }
       
       int q[t+1][3];
    int l=1;
    
    q[0][0]=r;
    q[0][1]=c;
    q[0][2]=t;
     for (int i = 0; i < r; i++)
    {
      for (int j =0; j < c; j++){
          if(b[i][j]!=0){
              q[l][0]=i;
              q[l][1]=j;
              q[l][2]=b[i][j];
              l++;
          }
      }
    }
      printf("\t R \t C \t V");
       for (int i = 0; i < t+1; i++){
           printf(" \n \t %d \t %d \t %d",q[i][0],q[i][1],q[i][2]);
           printf("\n");
       }
       
       
      /* int x=0,y=0,u=0,g;
       int f[u][3];
       if(k<t){
           g=t;
       }
       else{
           g=k
       }
       
       for(int i=0;i<g;i++){
           if(s[x][0]==q[y][0]){
             if(s[x][1]==q[y][1]){
                 f[u][0]=s[x][0];
                 f[u][1]=s[x][1];
                 f[u][2]=s[x][2]+q[y][2];
                 x++;
                 y++;
                 u++;
             }
             else if(s[x][1]<q[y][1]){
                f[u][0]=s[x][0];
                f[u][1]=s[x][1];
                f[u][2]=s[x][2];
                x++;
                u++;
             }
             
           }
       }
     */  
  return 0;
}
