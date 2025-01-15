//                                      SINGLE LINKKED
//                                           LIST
//                                       Insertion
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class linkedlist{
    private:
    node *head;
    public:
    linkedlist(){
        this->head=NULL;
    }
    void creat(int val){
     node *newnode=new node(val);
     if(head==NULL){
        head=newnode;
     }
     else{
        newnode->next=head;
        head=newnode;
     }
    }
    void display(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
          
           temp=temp->next;
    }
    cout<<endl;
        }
        void insertatbeg(int val){
            node *newnode=new node(val);
            if(head==NULL){
                head=newnode;
            }
            else{
                newnode->next=head;
                head=newnode;
            }
        }
        void insertatend(int val){
            node *newnode=new node(val);
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=NULL;
        }
        void insertatpos(int val){
            node *newnode=new node(val);
            int pos,i=1;
            cout<<"Enter the position "<<endl;
            cin>>pos;
            node *temp=head;
            while(i<pos-1){
                temp=temp->next;
                i++;

            }
        newnode->next=temp->next;
        temp->next=newnode;
        }
};
int main(){
linkedlist l1;
l1.creat(10);
l1.creat(20);
l1.creat(30);
l1.creat(40);
l1.display();
cout<<"  after insertion at start"<<endl;
l1.insertatbeg(5);
l1.display();
cout<<" after insertion at end "<<endl;
l1.insertatend(50);
l1.display();
cout<<" insertion at position "<<endl;
l1.insertatpos(450);
l1.display();
return 0;
}
