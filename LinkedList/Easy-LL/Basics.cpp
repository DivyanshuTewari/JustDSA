#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {10,2,3,4,5,6,7,8};
    // Array to Linked list
    Node* head = new Node (arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    //Traversal and length of linked list;
    mover = head;
    int count  = 0;
    while(mover != nullptr)
    {
        cout<<mover->data<<endl;
        mover=mover->next;
        count++;
    } 
    cout<<"Count -- > "<<count;
    return 0;

}