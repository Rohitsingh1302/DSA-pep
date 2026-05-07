#include<iostream>
using namespace std;

class queue{
    public :
    int frontt;
    int rear;
    int size;
    int *arr;
    
    queue(int s){
        frontt=-1;
        rear=-1;
        size=s;
        arr=new int[size]; 
    }
    
    void enqueue(int data){
        if(rear==size-1){
            cout<<"Queue is full"<<endl;
        }
        else if (frontt==-1 && rear==-1){
            frontt=0;
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void dequeue(){
        if(frontt==-1){
            cout<<"Queue is empty"<<endl;
        }
        else if(frontt==rear){
            frontt=-1;
            rear=-1;
        }
        else{
            frontt++;
        }
    }
    void display(){
        if(frontt==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            for(int i=frontt; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int size;
    cout<<"Enter the size of the queue : ";
    cin>>size;
    
    queue q(size);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    cout<<"Queue elements: ";
    q.display();
    
    q.dequeue();
    cout<<"After dequeue: ";
    q.display();
    
    return 0;
}