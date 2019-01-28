typedef struct node
{
  int data;
  struct node *link;
}Node;

Node* menu(Node*,int);
Node *create_list(Node *);
void display(Node *);
void count(Node *);
void search(Node *,int );
Node *addatbeg(Node *,int );
Node *addatend(Node *,int );
Node *addafter(Node *,int ,int );
Node *addbefore(Node *,int ,int );
//Node *addatpos(Node *,int ,int );
Node *del(Node *,int );
Node *reverse(Node *);
