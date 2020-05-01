#include <iostream>

using namespace std;
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
int main()  
{  
    cout<<"Enter the number of elements in stack: ";
    cin>>n;  
    cout<<"*********Stack operations using array*********";
  
    cout<<endl<<"----------------------------------------------"<<endl;
    while(choice != 4)  
    {  
        cout<<endl<<"Choose one from from the below options..."<<endl;
        cout<<endl<<"Press 1 to Push"<<endl<<"Press 2 to Pop"<<endl<<"Press 3 to Show"<<endl<<"Press 4 to Exit";
        cout<<endl<<"Enter your choice: ";
        cin>>choice;
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                cout<<"******************Exiting....***********************";
                break;   
            }  
            default:  
            {  
                cout<<"Please enter A valid choice";
            }   
        } 
    }
    return 0;
}   
  
void push ()  
{  
    int val;      
    if (top == n )   
    cout<<"Overflow";
    else   
    {
        cout<<"Enter the value: ";
        cin>>val;         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    cout<<"Underflow";
    else  
    top = top -1;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        cout<<stack[i]<<endl;
    }  
    if(top == -1)   
    {  
        cout<<"Stack is empty";
    }  
}

