#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


int findLoopLengthUsingHashing(Node* head) {
    unordered_map<Node* , int> map;
    int counter = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        if(map.find(temp) != map.end())
        {
            return (counter+1)-map[temp];
        }
        counter++;
        map[temp] = counter;
        temp = temp->next;
    }
    return 0;    
    
}

int findLoopLengthUsingFastAndSlowPointer(Node* head) {
    Node* fast = head;
    Node* slow = head;
    
    while(fast != NULL && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            int counter = 1;
            fast = fast->next;
            while(fast != slow)
            {
                fast = fast->next;
                counter++;
            }
            return counter;
        }
    }  
    return 0;  
    
}


int main() {
    
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    
    mover->next = head->next->next->next; // 10 -> 4 (loop created)

    
    int loopLength = findLoopLengthUsingFastAndSlowPointer(head);

    
    if (loopLength == 0)
        cout << "No loop detected." << endl;
    else
        cout << "Length of the loop is: " << loopLength << endl;

    return 0;
}
