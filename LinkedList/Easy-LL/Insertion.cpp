#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int data;
  Node *next;

public:
  Node(int data1) {
    data = data1;
    next = nullptr;
  }
};
int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++) {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }

  // Insert at 1st pos
  int firstel;
  cout << "Enter first element :";
  cin >> firstel;
  Node *newNode = new Node(firstel);
  newNode->next = head;
  head = newNode;
  

  // Insert at last pos
  int lastel;
  cout << "Enter last elemeny :";
  cin >> lastel;
  
  newNode = new Node(lastel);
  mover = head;
  while (mover->next != nullptr) {
    mover = mover->next;
  }
  mover->next = newNode;
  

  //Insert at k position
  int k;
  cout<<"Enter position";
  cin>>k;
  int kel;
  cout<<"Enter element";
  cin>>kel;

  if(k <= 0)
  {
    cout<< "invalid position" <<endl;
  }
  else if( k == 1 )
  {
    newNode = new Node(kel);
    newNode->next = head;
    head = newNode;
  }
  else
  {
    Node* temp = head;
    int i = 1;
    while(i < k-1 && temp != nullptr)
    {
      temp = temp->next;
      i++;
    }
    if(temp == nullptr)
    {
      cout<<"Position out of range"<<endl;
    }
    else{
      newNode = new Node(kel);
      newNode->next = temp->next;
      temp->next = newNode;
    }
    

  }



  // Traverse
  mover = head;
  while (mover != nullptr) {
    cout << mover->data << endl;
    mover = mover->next;
  }
}