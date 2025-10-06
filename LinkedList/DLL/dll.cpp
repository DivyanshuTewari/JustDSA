#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node (int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};


Node* insertHead(Node* head, int k)
{
    
    Node* newNode = new Node(k);
    if(head == NULL)
    {
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

Node* insertTail(Node* head, int k)
{
    Node* newNode = new Node(k);
    if(head == NULL)
    {
        return newNode;
    }
    newNode->prev = head;
    head->next = newNode;
    return head;
}

Node* insertBeforeTail(Node* head, int k)
{
    Node* newNode = new Node(k);
    if(head == NULL)
    {
        return newNode;
    }
    
    
    if(head->next == nullptr)
    {
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }

    Node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev->next = newNode;
    temp->prev = newNode;
    return head;


}

Node* insertPos(Node* head, int k , int pos)
{
    Node* newNode = new Node(k);
    //Empty ->
    if(head == nullptr)
    {
        if(pos!=1)
        {
            cout<<"Invalid";
            delete newNode;
            return head;
        }
        return newNode;
    }

    //Insert at head
    if(pos == 1)
    {
        return insertHead(head, k);
    }

    Node* temp = head;
    int x = 1;
    while( x < pos && temp != NULL)
    {
        x++;
        temp = temp->next;
    }
    if(temp == NULL )
    {
        cout<<"Invalid"<<endl;
        delete newNode;
        return head;
    }
    

    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev->next = newNode;
    temp->prev = newNode;
    return head;
}




Node* deleteHead(Node* head)
{
    if(head == NULL || head->next ==NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
    
}

Node* deleteTail(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}

Node* deletePosition(Node* head,int k)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* temp = head;
    int pos = 1;
    while(pos < k && temp != NULL)
    {
        pos++;
        temp = temp->next;
    }
    if(temp == NULL)
    {
        cout<<"Invalid";
        return NULL;
    }
    Node* previous = temp->prev;
    Node* nextNode = temp->next;
    if(previous == NULL && nextNode == NULL)
    {
        return NULL;
    }
    else if(previous == NULL)
    {
        return deleteHead(head);
        
    }
    else if(nextNode == NULL)
    {
        return deleteTail(head);
    }
    else
    {
        previous->next = nextNode;
        nextNode->prev = previous;
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }

}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        temp->prev = mover;
        mover->next = temp;
        mover = temp;
    }
    
    head = insertPos(head , 999 , 10);

    //Traverse
    mover = head;
    while(mover != nullptr)
    {
        cout<<mover->data<<endl;
        mover = mover->next;
    }

    

    return 0;
}