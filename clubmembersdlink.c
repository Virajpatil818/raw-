#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct abc
{
  char name[20];
  int prn;
  struct abc *prv;
  struct abc *next;
};

void
insertS (struct abc *head)
{
  struct abc *new;
  new = (struct abc *) malloc (sizeof (struct abc));
  printf ("\n Enter name of secretary and PRN number \n");
  scanf (" %s", new->name);
  scanf ("%d", &new->prn);

  new->prv = head;
  head->next = new;
  new->next = NULL;
}

void
insertM (struct abc *head)
{
  struct abc *new;

  new = (struct abc *) malloc (sizeof (struct abc));
  printf ("\n Enter name and PRN number \n");
  scanf ("%s", new->name);
  scanf ("%d", &new->prn);
  new->prv = NULL;
  new->next = NULL;

  new->next = head->next;
  new->next->prv = new;

  head->next = new;
  new->prv = head;
}

void
deleteS (struct abc *head)
{
  struct abc *temp;
  temp = head;

  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->prv->next = NULL;

  free (temp);
}

struct abc *
deleteP (struct abc *head)
{
  struct abc *temp;
  temp = head;
  temp->next->prv = NULL;
  head = temp->next;
  free (temp);

  return head;
}

void
display (struct abc *head)
{
  struct abc *temp;
  temp = head;
  int i = 1;
  while (temp != NULL)
    {
      printf ("%d) name \t %s PRN number \t %d", i, temp->name, temp->prn);
      temp = temp->next;
      i++;
      printf ("\n");
    }
}

void
reverse (struct abc *head, struct abc *temp)
{
  if (temp != NULL)
    {
      printf ("Name :\t %s PRN:\t %d", temp->name, temp->prn);
      temp = temp->prv;
      printf ("\n");
      reverse (head, temp);
    }
}

void
count (struct abc *head)
{
  int c = 1;
  struct abc *temp;
  temp = head;
  while (temp->next != NULL)
    {
      temp = temp->next;
      c++;
    }
  printf (" the members of club : %d \n", c);
}

void
main ()
{
  struct abc *head;
  struct abc *temp;
  head = (struct abc *) malloc (sizeof (struct abc));

  printf ("\n Enter name of president and PRN number \n");
  scanf ("%s", head->name);
  scanf ("%d", &head->prn);
  head->prv = NULL;
  head->next = NULL;

  insertS (head);

  int ch, y;
  do
    {

      printf ("\n1]insert member\n");
      printf ("\n2]display\n");
      printf ("\n3]delete secretary\n");
      printf ("\n4]delete president\n");
      printf ("\n5]Reverse list \n");
      printf ("\n6]Count of members  \n");
      scanf ("%d", &ch);

      switch (ch)
	{
	case 1:
	  insertM (head);
	  break;

	case 2:
	  display (head);
	  break;

	case 3:
	  deleteS (head);
	  break;

	case 4:
	  head = deleteP (head);
	  break;

	case 5:
	  temp = head;
	  while (temp->next != NULL)
	    {
	      temp = temp->next;
	    }
	  reverse (head, temp);
	  break;

	case 6:

	  count (head);
	  break;

	default:
	  printf ("exit");
	}
    }
  while (ch != 7);
}
