#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *del(Node *start,int data)
{
  Node *temp,*p;
  if(start==NULL)
  {
    printf("the list is empty\n");
  }
  if(data==start->data)
  {
    temp=start;
    start=start->link;
    free(temp);
    return start;
  }
  p=start;
  while(p->link!=NULL)
  {
    if(p->link->data==data)
    {
      temp=p->link;
      p->link=temp->link;
      free(temp);
      return start;
    }
    p=p->link;
  }
    printf("%d is not present in the list",data);
}
