#include<iostream>
using namespace std;
struct node
{
    int key;
    node *next;
    node(int data)
    {
        key=data;
        next=NULL;
    }
};
struct stackimp
{
    node* head;
    int si;
    stackimp()
    {
        head=NULL;
        si=0;
    }
    void push(int x)
    {
        node *temp ;
        temp = new node(x);
       // temp->key = x;
        if(!temp){
            cout<<"Overflow"<<endl;
            return;
        }
           
        temp->next=head;
        head=temp;
        cout<<"Inserted"<<endl;
        si++;

    }
    void pop()
    {
        node *curr;
        if(head==NULL)
        {
            cout<<"Underflow"<<endl;
            
        }
        else
        {
            curr = head;           
            head=head->next;
            curr->next = NULL;
            cout<<"Popped "<<curr->key<<endl;
            delete curr;
        }
        si--;
    }
    void traverse()
    {
        node * t;
        if(head == NULL){
            cout<<"underflow"<<endl;
            return ;
        }
        else{

            t = head;
        
        while(t!=NULL)
        {
            cout<<t->key<<"->";
            t=t->next;
        }
       // cout<<"NULL";
        cout<<endl;
    }}
    int peek()
    {
        if(head!=NULL)
        {
        while(head->next!=NULL)
        {
            head=head->next;
        }
        }
        return head->key;

    }
    int sizeofstack()
    {
        return si;
    }
};
int main()
{
    stackimp s;
    s.push(10);
    s.push(20);
    s.traverse();
    s.pop();
    s.traverse();
    s.push(30);
    s.traverse();
    cout<<s.peek()<<endl;
    cout<<s.sizeofstack()<<endl;
    return 0;
}