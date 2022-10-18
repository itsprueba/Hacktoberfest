
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next,*prev;
};

void getdata(struct node *,int );
void insert(struct node *);
void deleteatbeg(struct node *);
void deleteatend(struct node *);
void deleteinbet(struct node *);
void printlist(struct node *);

void getdata(struct node *head,int n){
    int i=0;
    struct node * temp = head;
    while(i<n-1){
        printf("Enter the next element : ");
        struct node *newnode = (struct node *)malloc(sizeof(struct node *));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=temp;
        temp->next=newnode;
        temp=temp->next;
        i++;
    }
}

void printlist(struct node *head){

	while(head->next!=NULL){
		printf("%d<=>",head->data);
		head=head->next;
}
	printf("%d\n",head->data);
}

void insert(struct node *head){
  struct node *newnode = (struct node *)malloc(sizeof(struct node *));
  struct node *p = head;
  struct node *q ;
  newnode->next=NULL;
  newnode->prev=NULL;

  int pos,k=1,n=1;
  printf("Enter the position at which element to be inserted : ");
  scanf("%d",&pos);

  while(p->prev!=NULL)
    p=p->prev;
  q=p;

  while(p!=NULL){
        p=p->next;
        n++;
  }

  printf("Enter the element : ");
  scanf("%d",&newnode->data);

  if(pos==1){
    head=q;
	newnode->next=head;
	head->prev=newnode;
	newnode->prev=NULL;
	head=newnode;
	printf("\nAfter insertion, the new linked list is : ");
	printlist(head);
	}

  else if(pos==n){
	while(head->next!=NULL)
		head=head->next;
	head->next=newnode;
	newnode->prev=head;
	newnode->next=NULL;
	printf("\nAfter insertion, the new linked list is : ");
	head=q;
	printlist(head);
	}

 else if(pos<n){
        head=q;
  while (k<pos-1){
	head = head->next;
	k++;
	}
	newnode->next=head->next;
	head->next->prev=newnode;
	head->next=newnode;
	newnode->prev=head;

	head=q;
	printf("\nAfter insertion, the new linked list is : ");
	printlist(head);
  }

 else
	printf("Position not found...");

}

void deleteatbeg(struct node *head){

	struct node *p ;
	struct node *q ;
	p=head;

    while(p->prev!=NULL)
        p=p->prev;
    q=p;

    p=q;
	q=q->next;
	q->prev=NULL;
	free(p);

	printf("\nAfter deletion, The new linked list is : ");
    printlist(q);
}

void deleteatend(struct node *head){

	struct node *p ,*r, *q ;
	p=head;

	    while(p->prev!=NULL)
            p=p->prev;
    q=p;
    head=q;

  while (p->next!=NULL)
	p=p->next;

	r=p->prev;
    r->next=NULL;
	free(p);

	printf("\nAfter deletion, The new linked list is : ");
    printlist(head);

}

void deleteinbet(struct node *head){

	struct node *p ,*r,*q ;
	p=head;

    while(p->prev!=NULL)
        p=p->prev;
    q=p;

  int pos,k=1;
  printf("Enter the position at which element to be deleted : ");
  scanf("%d",&pos);

    while (k!=pos){
        p = p ->next;
        k++;
	}

	r=p->prev;
	r->next=p->next;
	p->next->prev=r;
	free(p);

    head=q;
	printf("\nAfter deletion, The new linked list is : ");
    printlist(head);

}

int main(){
struct node *head = (struct node *)malloc(sizeof(struct node *));
head->prev=NULL;
head->next=NULL;
int n,ch;

printf("Enter the number of elements in linked list : ");
scanf("%d",&n);

printf("Enter the head data : ");
scanf("%d",&head->data);

if(head==NULL){
	printf("Linked list is empty.");
}

else{
	getdata(head,n);
	printf("\nThe linked list is : ");
	printlist(head);
  do{
        printf("\n\n      ---------------------------------------------------      \n");
        printf("                ***DOUBLY LINKED LIST OPERATIONS:***\n");
        printf("      ---------------------------------------------------      \n");
        printf("      ---------------------------------------------------      \n");
        printf("                             MENU                 \n");
        printf("      ---------------------------------------------------      \n");
	printf("\n1.Insertion   2.Delete at beginning   3.Delete in between  4.Delete at end     5.Exit ");
	printf("\n\nEnter your choice : ");
	scanf("%d",&ch);

	switch(ch){
        case 1:  insert(head);
                 break;

		case 2:  deleteatbeg(head);
                 break;

		case 3:  deleteinbet(head);
                 break;

		case 4:  deleteatend(head);
                 break;

		default: printf("Enter valid option");
                 break;
		}

   }while(ch!=5);
}

return 0;
}

