#include<iostream>   
#define maxsize 5
using namespace std;

void insert();  

void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
int main()  
{  
    void delete_stack();
    int choice;   
    while(choice != 4)   
    {     
        cout<<"\n*************************Main Menu*****************************\n";
        cout<<"\n=================================================================\n";
        cout<<"\nPress 1 to insert an element\nPress 2 to delete an element\nPress 3 to display the queue\nPress 4 to Exit\n";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete_stack();  
            break;  
            case 3:  
            display();  
            break;  
            case 4: 
            cout<<"\n*********************Exiting****************";
            exit(0);  
            break;  
            default:   
            cout<<"\nEnter a valid choice\n";
        }  
    }
   
    return 0;
}  
void insert()  
{  
    int item;  
    cout<<"\nEnter the element\n";
    cin>>item;
    if(rear == maxsize-1)  
    {  
        cout<<endl<<"OVERFLOW"<<endl;
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    cout<<endl<<"Value inserted ";
      
}  

void delete_stack()  

{  
    
   int item;   
    if (front == -1 || front > rear)
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nvalue deleted ");  
    }  
}    
      
      
      
 
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        cout<<endl<<"Empty queue"<<endl;
    }  
    else  
    {   
        cout<<endl<<"printing values......"<<endl;
        for(i=front;i<=rear;i++)  
        {  
            cout<<endl<<queue[i]<<endl;
        }     
    }  
} 



