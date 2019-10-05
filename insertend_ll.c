#include <stdio.h>

//initialize node
struct node{
	int data;
	struct node *next;
}*head,*end;

//initialize functions
void createlist(int n);
void insertdata(int data);
void displaylist();


int main()
{
	int n,data;
	
	printf("Enter the number of nodes:");
	scanf("%d",&n);
	createlist(n);
	
	printf("The list is:");
	displaylist();
	
	printf("Enter the data to be inserted:");
	scanf("%d",&data);
	insertdata(data);
	
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

void insertdata(int data)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
			if (newnode == NULL)
			{
				printf("Unable to allocate memory");
			}
			else
			{
		
				newnode->data = data;
				newnode->next = NULL;
				end->next = newnode;

			}
}
