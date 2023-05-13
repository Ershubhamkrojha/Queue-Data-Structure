#include<stdio.h>
#define size 50
int rear=0,front=0;
int queue[size];
void enqueue(int);
void diqueue();
void display();
void main()
{
	int ch,i=1,n;
//	printf("Enter how many size of stack:");
//	scanf("%d",&n);
	printf("what do you want:?");
	while(i<4){
	
	printf("\n1.Enquee \n2.dequee \n3.display \n4.Exit:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:    printf("enter element:");
	           scanf("%d",&n);
		     	enqueue(n);
			    break;
				 
	case 2:     diqueue();
                break;             
    case 3:     display();
                break;
    case 4:     printf("Exit");
                break;
                
    default:    printf("Invalid choise");
                
   };
}
		
	}
	void  enqueue(int val)
	{
		if(rear==size){
		 printf("queue is full");
		}
		else{
			    queue[rear]=val;
				rear++;	
			}
	}
	void diqueue(){
		if(front==rear){
			printf("queue is empty");
		}
		else{
			int i;
			for(i=0;i<rear-1;i++){
				queue[i]=queue[i+1];
			}
			rear--;
			
			}
	}
	void display()
	{
		int i;
		if(rear==front){
			printf("qeue is Empty");
		}
		else{
			printf("queue element:");
			
			for(i=0;i<rear;i++)
			{
				printf("%d",queue[i]);
			}
		}
	}
	
