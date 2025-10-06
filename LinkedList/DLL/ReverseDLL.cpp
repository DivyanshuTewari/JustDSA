#include<bits/stdc++.h>
using namespace std;
class Node{
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
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = temp;
    }

    mover = head;
    while(mover != nullptr)
    {
        cout<<mover->data<<endl;
        mover = mover->next;

    }
}