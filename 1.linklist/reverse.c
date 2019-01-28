#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *reverse(Node *start)
{
    Node *prev,*ptr,*next;
    prev= NULL;
    ptr=start;
    while(ptr!=NULL)
    {
      next=ptr->link;
      ptr->link=prev;
      prev=ptr;
      ptr=next;
    }
    start=prev;
    return start;
}
