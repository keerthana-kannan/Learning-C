#include <stdio.h>
#include <stdlib.h>

//initialize node
struct node{
	int data;
	struct node *next;
}*head,*end;

//initialize functions
void createlist(int n);
void insertdata(int position,int data);
void displaylist();


int main()
{
	int n,data,position;
	
	printf("Enter the number of nodes:");
	scanf("%d",&n);
	createlist(n);
	
	printf("The list is:");
	displaylist();
	
	printf("Enter the position:");
	scanf("%d",&position);
	printf("Enter the data to be inserted:");
	scanf("%d",&data);
	insertdata(position,data);
	
	printf("The new list is:");
	displaylist();
	
	return 0;
}

void createlist(int n)
{
	struct node *newnode, *temp;
	int i,data;
	
	head = (struct node *)malloc(sizeof(struct node));
	
	if (head == NULL)
	{
		printf("Unable to allocate memory");
	}
	else
	{
		printf("Enter data 1:");
		scanf("%d",&data);
		
		head->data = data;
		head->next = NULL;
		
		temp = head; //to keep the head address unchanged
		
		for(i=2;i<=n;i++)
		{
			newnode = (struct node *)malloc(sizeof(struct node));
			if (newnode == NULL)
			{
				printf("Unable to allocate memory");
			}
			else
			{
				printf("Enter data %d:",i);
				scanf("%d",&data);
		
				newnode->data = data;
				newnode->next = NULL;
				
				temp->next = newnode;
				temp = temp->next;
			}
		}
		end = temp;
	}
}

void displaylist()
{
	struct node *temp;
	
	if(head == NULL)
	{
		printf("List is empty");
	}
	
	else{
	temp = head;
	
		while (temp != NULL)
		{
			printf("Data = %d \n",temp->data);
			temp = temp->next;
		}
	}
}

void insertdata(int position,int data)
{
	int i;
    struct node * newNode, *temp;
	newNode = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Error, List is empty!\n");
    }
    else
    {
        temp = head;
        i=1;

        while(i<position-1 && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }

        if(position == 1)
        {
            newNode->data = data;
			newNode->next = head;
			head = newNode;
        }
        else if(temp == end)
        {
            newNode->data = data;
			newNode->next = NULL;
			end->next = newNode;
        }
        else if(temp!=NULL)
        {

            newNode->data = data;
            newNode->next = temp->next; // Connect new node with n+1th node
            /* Connect n-1th node with new node */
            temp->next = newNode;

            printf("NODE INSERTED SUCCESSFULLY AT %d POSITION\n", position);
        }
        else
        {
            printf("Error, Invalid position\n");
        }
    }
}
