#include"linklist.h"
#include<stdio.h>
void count(Node *start)
{
    Node *p;
    int count=0;
    if(start==NULL)
    {
      printf("the list is empty\n");
    }
    p=start;
    while (p!=NULL)
    {
      p=p->link;
      count++;
    }
    printf("no of element are %d\n",count);
}
