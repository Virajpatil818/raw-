#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct abc
{
  char c;
  struct abc *next;
} *top = NULL;

void push (char op)
{
printf("\nim in push\n");
  struct abc *new;
  new = (struct abc *) malloc (sizeof (struct abc));
  new->c = op;
  new->next = NULL;

  if (top == NULL)
    {
      top = new;
    }
  else
    {
      new->next = top;
      top = new;
    }
}

char pop()
{
printf("\nim in pop\n");
  char b;
  struct abc *temp;
  if (top == NULL)
    {
      printf ("Underflow \n");
    }
  else if(top->next == NULL)
    {
      temp = top;
      b = temp->c;
      top = NULL;
      free(temp);
    }
  else
    {
      temp = top;
      b = temp->c;
      top = top->next;
      free(temp);
    }
  return b;
}

int
pre (char op)
{

  switch (op)
    {
    case '^':return 3;
      break;
    case '*':return 2;
       break;
    case '/':return 2;
       break;
    case '+':return 1;
       break;
    case '-':return 1;
       break;

    }
}

void main()
{
  char infix[20], postfix[20];

  printf ("Enter infix expression:");
  scanf (" %s", infix);

  int i = 0, j = 0;

  while (infix[i] != '\0')
    {
      if (isalnum(infix[i]))
	{
	  postfix[j] = infix[i];
	  j++;
	}
      else
	{
	  if (top == NULL)
	    {
	      push (infix[i]);
	    }
	  else
	    {
	      while (pre (top->c) >= pre (infix[i]) && top != NULL)
		 postfix[j++] = pop();
		
		push(infix[i]);
	    }
	  
	}
      i++;
    }

  while (top != NULL)
    {
      postfix[j++] = pop();
    }
 postfix[j]='\0';
  printf (" \n%s\n", postfix);
}
