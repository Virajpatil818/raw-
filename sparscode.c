#include <stdio.h>

int
main ()
{
  int r, c, count = 0,k;
  printf ("Enter rows \n");
  scanf ("%d", &r);
  printf ("Enter column \n");
  scanf ("%d", &c);
  int a[r][c];
  printf ("Enter matrix \n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
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

  if (count > r * c / 2)
    {
      printf ("spars matrix \n");
    }
  else
    {
      printf (" not spars matrix \n");
    }
    
    int s[k][3];
    int p=0;
     for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++){
          if(a[i][j]!=0){
              s[p][0]=i;
              s[p][1]=j;
              s[p][2]=a[i][j];
              p++;
          }
      }
    }
      printf("\t R \t C \t V");
       for (int i = 0; i < k; i++){
           printf(" \n \t %d \t %d \t %d",s[i][0],s[i][1],s[i][2]);
           printf("\n");
       }
       
  return 0;
}
