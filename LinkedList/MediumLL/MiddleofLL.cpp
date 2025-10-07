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

Node* middleLLa1(Node* head)
{
    int count = 0;
    Node* mover = head;
    while(mover != NULL)
    {
        count++;
        mover = mover->next;
    }

    mover = head;
    int x = 1;
    while((count/2)+1 != x)
    {
        mover = mover->next;
        x++;
    }
    return mover;
}

Node* middleLLa2(Node* head)
{
    if(head == NULL || head->next == nullptr)
    {
        return head;
    }
    Node* fast = head;
    Node* slow = head;
    while(fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
        if(fast->next != nullptr)
        {
            fast = fast->next;
        }
    }
    return slow;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    Node* head = new Node (arr[0]);
    Node* mover = head;
    for(int i=1 ;i<arr.size(); i++)
    {
        Node* temp = new Node (arr[i]);
        mover->next = temp;
        mover = temp;
    }

    //Approach 1 --> Traversal
    //head = middleLLa1(head);

    //Approach 2 --> Tortoise & heir method
    head = middleLLa2(head);


    //Traverse
    mover = head;
    while(mover != nullptr)
    {
        cout<<mover->data<<endl;
        mover = mover->next;
    }
    return 0;
}