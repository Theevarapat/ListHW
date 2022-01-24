struct node
{
    int id;
    char name[50];
    struct node *next;
};
typedef struct node NODE;
typedef NODE* NodePtr;