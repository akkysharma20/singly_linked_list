#include"linklist.h"
#include<stdio.h>
void search(Node *start,int item)
{
  Node *p=start;
  int pos=1;
  while(p!=NULL)
  {
    if(p->data==item)
    {
      printf("data %d found at position %d\n",item,pos);
      return;
    }
    p=p->link;
    pos++;
  }
  printf("%d is not found in list\n",item);
}
