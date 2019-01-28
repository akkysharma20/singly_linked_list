#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *addatend(Node *start,int data)
{
  Node *p,*temp;
  temp=(Node*)malloc(sizeof(Node));
  temp->data=data;
  p=start;
  while(p->link!=NULL)
       p=p->link;
  p->link=temp;
  temp->link=NULL;
  return start;
}
