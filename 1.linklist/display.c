#include"linklist.h"
#include<stdio.h>
void display(Node *start)
{
  Node *p;
  if(start==NULL)
  {
    printf("the list is empty\n");
  }
  p=start;
  printf("the list is:\n");
  while (p!=NULL)
  {
    printf("%d",p->data);
    p=p->link;
  }
  printf("\n\n");
}
