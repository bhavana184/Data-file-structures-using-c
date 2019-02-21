#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
/*----Function Prototypes-----*/
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search(int x);
void count_iterative();
int count_recursive(NODE *start);
void find_mid();
void reverse();
/*-----------------------------*/
int main()
{
    int op,ch,x,c;
do{
printf("\nPERFORM FOLLOWING OPERATIONS ON SINGLY LINKED LIST");
printf("\n1.Create a node");
printf("\n2.Traverse and print all the values of node");
printf("\n3.Insert a node in the beginning");
printf("\n4.Insert anode at the end");
printf("\n5.Insert a node at any random position");
printf("\n6.Delete a node from the beginning");
printf("\n7.Delete a node from end");
printf("\n8.Delete a node from any random position");
printf("\n9.Search the node with the given value in the list");
printf("\n10.Count the no. of nodes(length of linked list) iterativey");
printf("\n11.Count the no. of nodes(length of linked list) recursively");
printf("\n12.Find the middle element of the list");
printf("\n13.Reverse linked list in place(without using additional memory)");
//printf("\n Exit");
printf("\nEnter your option :");
scanf("%d",&op);
switch(op)
{
case 1: create();
        break;
case 2: display();
        break;
case 3:	insert_begin();
        break;
case 4: insert_end();
        break;
case 5: insert_pos();
        break;
case 6: delete_begin();
        break;
case 7: delete_end();
        break;
case 8: delete_pos();
        break;
case 9: printf("\n Enter the element to be searched :");
        scanf("%d",&x);
        search(x);
        break;
case 10: count_iterative();
        break;
case 11: c=count_recursive(start);
        printf("There are %d node(s) in the given linked list",c);
        break;
case 12:find_mid();
        break;
case 13:reverse();
        break;

default:printf("\nPlease chose a valid option dear!!\n");
}
printf("\nDo you want to continue(enter 0 for no and 1 for yes):");
scanf("%d",&ch);
}while(ch!=0);
return 0;
}
void create()
{
    NODE *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space i.e Overflow\n");
                exit(0);
        }
        printf("\nEnter the data value for the node:\t");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        NODE *ptr;
        if(start==NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->data);
                        ptr=ptr->next ;
                }//end of while
        }//end of else
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->data);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->data );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next=temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&temp->data) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++)
                {
                        ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found:[Handle with care]\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }//end of else
}

void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d\t",ptr->data);
                free(ptr);
        }
}//end of delete_begin()
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->data);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:%d\t",ptr->data);
                free(ptr);
        }
}//end of delete_begin()
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe deleted element is:%d\t",ptr->data );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++)
                        {
                                temp=ptr;
                                ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is:%d\t",ptr->data );
                        free(ptr);
                }
        }//end of else
}//end of delete_pos()
void search(int x)
{
   int flag=0;
   NODE *ptr = start;
    while(ptr != NULL)
    {
        if (ptr->data == x)
            {flag=1;
            break;
            }
        ptr = ptr->next;
    }
    if(flag==1)printf("%d found",x);
     else printf(" Sorry,%d not found",x);
}
void count_iterative()
{
    int count = 0;  // Initialize count
    NODE *ptr = start;  // Initialize ptr
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("\nThere are %d node(s) in this linked list.",count);
}

int count_recursive(NODE *start)
{
    // Base case
    if (start == NULL)
        return 0;

    // count is 1 + count of remaining list
    return 1 + count_recursive(start->next);
}
void find_mid()
{
    //NODE *start;
    NODE *slow_ptr = start;
    NODE *fast_ptr = start;

    //if (start!=NULL)
   // {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;

        }
        printf("The middle element is %d \n", slow_ptr->data);
   // }
}
void reverse()
{
    struct node *prevNode, *curNode;

    if(start != NULL)
    {
        prevNode = start;
        curNode = start->next;
        start = start->next;

        prevNode->next = NULL; // Make first node as last node

        while(start != NULL)
        {
            start = start->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = start;
        }

        start = prevNode; // Make last node as start

        printf("SUCCESSFULLY REVERSED LIST\n");
        display();
    }
}
