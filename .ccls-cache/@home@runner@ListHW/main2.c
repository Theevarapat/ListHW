#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(void)
{
  int i, j, k, id;
  char name[50];
  NODE *head, *temp, *back;

  //temp=(NodePtr) malloc(sizeof(NODE));
  head = NULL;

  do{
    temp=(NodePtr) malloc(sizeof(NODE));
    printf("Enter ID: ");
    scanf("%d", &id);
    
    if(id==0)
    {
      //temp->next = head;
      //head = temp;
      break;
    }
    else
    {
      temp->id = id;
      printf("Enter Name: ");
      scanf("%s", name);
      for(i=0; i<strlen(name); i++)
      {
        temp->name[i] = name[i];
      }
      //printf("%d %s\n", temp->id, temp->name);//debug
      //temp = (NodePtr) malloc(sizeof(NODE));
      temp->next = head;
      head = temp;
      
      /*for (temp=head; temp!=NULL; temp=temp->next)
      {
        printf("%d %s\n", temp->id, temp->name);
      }*/

    }
  }while(id!=0);

  

  for (temp=head; temp!=NULL; temp=temp->next)
  {
    printf("%d %s\n", temp->id, temp->name);
  }
  printf("NULL\n");

  while (head != NULL)
  {
    temp = head;
    head = head->next;
    free(temp);
  }
  return 0;
}