#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(void)
{
  int i, j, k, id;
  char name[50];
  NODE *head, *temp, *back;

  temp=(NodePtr) malloc(sizeof(NODE));
  head = (NodePtr) malloc(sizeof(NODE));
  //back = (NodePtr) malloc(sizeof(NODE));
  //temp = back;
  //temp->next = head;
  //head = temp;

  do{
    //temp->next=(NodePtr) malloc(sizeof(NODE));
    //temp->next=head;
    printf("Enter ID: ");
    scanf("%d", &temp->id);
    printf("Enter Name: ");
    scanf("%s", temp->name);
    temp->id = id;
    for(i=0; i<strlen(temp->name); i++)
    {
      temp->name[i] = name[i];
    }
    
    if(temp->id==0)
    {
      temp->next = NULL;
    }
    else
    {
      printf("%d %s\n", temp->id, temp->name);//debug
      temp->next = head;
      head = temp;

    }
  }while(temp->id!=0);

  

  for (temp=head; temp!=NULL; temp=temp->next)
  {
    printf("%d %s\n", temp->id, temp->name);
  }
  printf("NULL\n");












  return 0;
}