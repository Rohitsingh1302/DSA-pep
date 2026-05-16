#include<iostream>
using namespace std;
class CircularQueue {
    int rear;
    int size;
    int front;
    int *queue;
public:
    CircularQueue(){
        front=-1;
        rear=-1;
        cout<<"Enter the size of the queue: ";
        cin>>size;
        queue=new int[size];
        cout<<"Queue of size "<<size<<" created successfully!"<<endl;
    }
    void enqueue(int data){
        if ((front==0 && rear==size-1) || (rear+1==front)){
            cout<<"overflow!!"<<endl;
        }
        else if(front==-1 && rear==-1){
            front=rear=0;
            queue[rear]=data;
            cout<<"Enqueued element successfully!!: "<<data<<endl;
        }
        else{
            rear=(rear+1)%size;
            queue[rear]=data;
            cout<<"Enqueued element successfully!!: "<<data<<endl;
        }
    }
    void dequeue(){
        if(front==-1){
            cout<<"Underflow!!"<<endl;
        }
        else if(front==rear){
            cout<<"Dequeued element successfully!!: "<<queue[front]<<endl;
            front=rear=-1;
        }
        else{
            cout<<"Dequeued element successfully!!: "<<queue[front]<<endl;
            front=(front+1)%size;
        }
    }
    int main(){
        CircularQueue q;
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);
        q.dequeue();
        q.dequeue();
        q.enqueue(6);
        q.enqueue(7);
        return 0;
    }
};