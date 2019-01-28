#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

Node *start=NULL;

int main()
  {
    int choice,data,item,pos=0;
    while (1)
  {
    printf("1.creat list\n");
    printf("2.display\n");
    printf("3.count\n");
    printf("4.search\n");
    printf("5.add at begning\n");
    printf("6.add at end\n");
    printf("7.add after\n");
    printf("8.add before\n");
    //printf("9.add at position\n");
    printf("9.delete\n");
    printf("10.reverse\n");
    printf("11.exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    start=menu(start,choice);
  }
}
