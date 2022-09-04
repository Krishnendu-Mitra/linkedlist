#include <stdio.h>  
#include <stdlib.h>  
//code by krish(linklist try)
typedef struct node{  
   int data;  
   struct node *link;  
}nd;
nd *head;  
nd *createNode(int data){
	nd *temp;
	temp = (nd*)malloc(sizeof(nd));
	temp->data = data;  
    temp -> link = NULL;  
    return temp;
}
void beginsert(){  
    int element;    
       printf("Enter the value: ");  
       scanf("%d",&element);  
       nd *krish = createNode(element);
       krish->link=head;
       head=krish;
       printf("Element inserted successfully\n");         
}  
void lastinsert(){ //I write this function(it is a new function)
	int element;
	   printf("Enter the value: ");  
       scanf("%d",&element);  
       nd *krish = createNode(element);
       nd *temp;
       temp = head;
       while(temp->link!=NULL){
       	temp=temp->link;
       }
       temp->link=krish;
       krish->link=NULL;
       printf("Element inserted successfully\n");         
}
void anyinsert(){ //In Progress
   printf(" Not ready");
}
void display(){  
    nd *temp;  
    temp=head;  
    printf("Stack element is =  \n");
    if(temp == NULL){  
        printf("  Empty\n");  
    }else{
        printf(" Start->");
        while(temp!=NULL){  
            printf("%d->",temp->data);  
            temp = temp->link;  
        }  
        printf("End\n");
    }  
}  
void choiceHolder(){
	int choice=0;    
    while(1){
        printf("\nEnter your choice = ");        
        scanf("%d",&choice);  
        if(choice == 1){
        	beginsert();
        }else if(choice == 2){
        	lastinsert();
        }else if(choice == 3){
        	anyinsert();
        }else if(choice == 4){
        	display();
        }else if(choice == 5){
        	printf("\n  exit()\n");
            break;//or return 0;
        }else{
            printf("Invalid choice taken\nTry again!\n");
            choiceHolder();
        }
    }
}
int main(){  
      printf("\n\tMenu\n----------------------------------------------\n");
      printf("\nPress 1 to insert at beginning position\nPress 2 to insert at last position\nPress 3 to insert at any position\nPress 4 to Display the list\n");
      printf("Press 5 to Quit\n");  
      printf("----------------------------------------------\n");
      choiceHolder();
        
return 0;
}  










/*Source- https://github.com/Krishnendu-Mitra*/