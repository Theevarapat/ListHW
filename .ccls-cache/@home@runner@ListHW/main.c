#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(void)
{
  int i, j, k;
  char name;
  NODE *head, *temp, *back;

  head = (NodePtr) malloc(sizeof(NODE));
  back = (NodePtr) malloc(sizeof(NODE));
  temp = back;
  //temp->next = head;
  //head = temp;

  do{
    temp->next=(NodePtr) malloc(sizeof(NODE));
    temp->next=head;
    printf("Enter ID: ");
    scanf("%d", &temp->id);
    if(temp->id==0)
    {
      temp->next = NULL;
    }
    else
    {
    printf("Enter Name: ");
    scanf("%s", temp->name);
    
    printf("%d %s\n", temp->id, temp->name);//debug

    //head = temp->next;
    //head = temp;
    }
  }while(temp->id!=0);

  

  for (temp=head; temp!=NULL; temp=temp->next)
  {
    printf("%d %s\n", temp->id, temp->name);
  }
  printf("NULL");












  return 0;
}