#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *addbefore(Node *start,int data,int item)
{
  Node *p,*temp;
  p=start;
  while(p!=NULL)
  {
    if(p->link->data==item)
    {
      temp=(Node*)malloc(sizeof(Node));
      temp->data=data;
      temp->link=p->link;
      p->link=temp;
      return start;
    }
    p=p->link;
  }
  printf("%d is not present in the list",item);
  return start;
}
