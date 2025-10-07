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
Node* reverseDLL(Node* head)
{
    if(head == NULL || head->next == nullptr)
    {
        return head;
    } 
    Node* mover = head;
    Node* temp = NULL;
    // if we take (temp = mover->next)
    while(mover != NULL)
    {
        temp = mover->next;
        mover->next = mover->prev;
        mover->prev = temp;
        mover = temp;
    }
    // while(mover != NULL)
    // {
    //     temp = mover->prev;
    //     mover->prev = mover->next;
    //     mover->next = temp;
    //     mover = mover->prev;
    // }
    if(temp != NULL)
    {
        head = temp->prev;
    }
    return head;
}
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
    // Approach 1 --> using stack
    stack<int> st;
    mover = head;
    while(mover != NULL)
    {
        st.push(mover->data);
        mover = mover->next;
    }
    mover = head;
    while(mover != nullptr)
    {
        mover->data = st.top();
        st.pop();
        mover = mover->next;
    }

    //Approach 2 --> using links swap TC->O(n) SC->O(1)
    head = reverseDLL(head);
    


    //Traverse
    mover = head;
    while(mover != nullptr)
    {
        cout<<mover->data<<endl;
        mover = mover->next;

    }
}