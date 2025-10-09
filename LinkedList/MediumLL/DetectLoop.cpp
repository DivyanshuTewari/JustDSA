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


bool DetectLoop(Node* head) {
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
        
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

    
    bool loop = DetectLoop(head);

    
    if (loop == false)
        cout << "No loop detected." << endl;
    else
        cout << "Length Detected " << endl;

    return 0;
}
