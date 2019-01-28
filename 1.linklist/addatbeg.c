#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *addatbeg(Node *start,int data)
{
  Node *temp;
  temp=(Node*)malloc(sizeof(Node));
  temp->data=data;
  temp->link=start;
  start=temp;
  return start;
}
