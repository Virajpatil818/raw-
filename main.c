#include <stdio.h>

#include<string.h>

int
main ()
{
  char x, y, k[3], l;
  int a[4][4];
  int i, j, count = 0;
  printf ("Enter matrix \n");
  for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
	{
	  scanf ("%d", &a[i][j]);
	  if (a[i][j] != 0)
	    {
	      l++;
	    }
	}
    }
//printf("train goes to %d stations",l);
  for (int i = 0; i < 4; i++)

    {

      for (int j = 0; j < 4; j++)
	{
	  if (a[i][j] != 0)
	    {
	      if (i == 0)
		{
		  x = 'A';
		}
	      else if (i == 1)
		{
		  x = 'B';
		}
	      else if (i == 2)
		{
		  x = 'C';
		}
	      else
		{
		  x = 'D';
		}
	      if (j == 0)
		{
		  y = 'A';
		}
	      else if (j == 1)
		{
		  y = 'B';
		}
	      else if (j == 2)
		{
		  y = 'C';
		}
	      else
		{
		  y = 'D';
		}
	      printf ("\n \t %c \t %c \t %d", x, y, a[i][j]);
	      printf ("\n");
	    }
	}
    }
  do
    {
      printf
	("Enter stations to know frequency (enter stations with dash(-)) \n");
      scanf ("%s", k);
      if (k[0] == 'A')
	i = 0;
      else if (k[0] == 'B')
	i = 1;

      else if (k[0] == 'C')

	i = 2;
      else
	i = 3;
      if (k[2] == 'A')
	j = 0;
      else if (k[2] == 'B')
	j = 1;
      else if (k[2] == 'C')
	j = 2;
      else
	j = 3;
      printf ("frequency of train is %d \n", a[i][j]);
      count++;
    }
  while (count == 1);
  return 0;
}
