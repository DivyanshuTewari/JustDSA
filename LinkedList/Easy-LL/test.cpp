#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    Node* head = new Node (arr[0]);
    Node* mover = head ;
    for(int i=1; i<10; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    //Removing 1st node 
    Node* temp = head;
    head = head->next;
    free(temp);

    //Remove last node
    mover = head ;
    while(mover->next->next != nullptr)
    {
        mover = mover->next;

    }
    Node* temp2 = mover->next;
    mover->next = nullptr;
    free(temp2);


    mover = head;
    while(mover != nullptr)
    {
        cout<<mover->data<<endl;
        mover = mover->next;
    }
    return 0;
} 