#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* ReverseList(Node* head)
{
    if(head == NULL || head->next == nullptr)
    {
        return head;
    }
    Node* prev = head;
    Node* temp = head->next;
    Node* mover = head->next;
    while(mover != NULL)
    {
        temp = temp->next;
        mover->next = prev;
        prev = mover;
        mover = temp;
    }
    head->next = nullptr;
    return prev;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    head = ReverseList(head);

    mover = head;
    while(mover != NULL)
    {
        cout<<mover->data<<endl;
        mover = mover->next;
    }
    return 0;
}