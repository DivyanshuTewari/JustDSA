#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    
    public:
    Node (int data1 , Node * next1)
    {
        data = data1;
        next = next1;
    }

    public:
    Node (int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    Node * head = new Node (arr[0]);
    Node * mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node * temp = new Node (arr[i]);
        mover->next = temp ;
        mover = temp;
    }

   

    //Delete kth element 
    int k;
    cin>>k;
    if(head == NULL || k<=0)
    {
        cout<<"Invalid";
    }
    else if(k == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
    int i = 1;
    Node* nextNode;
    Node* temp = head;
    while(i< k-1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    nextNode = temp->next;
    temp->next = nextNode->next;
    delete nextNode;
    }


    
    



    //Traverse
    mover = head;
    while(mover != nullptr)
    {
        cout<<mover->data<<endl;
        mover=mover->next;
    }

    return 0;

}