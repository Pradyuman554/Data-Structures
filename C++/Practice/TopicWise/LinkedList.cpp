//Linked List
// #include<iostream>
// #include<fstream>
// #include<cmath>
// #include<vector>
// using namespace std;

// class node{
//     public:
//     int data = 0;
//     node* next;
// node(){         //That if default cons is called data is 0 (no data), it is initialized tho
//     data=0;
//     next=NULL;
// }
// node(int x){    //x is the value that we pass inside node to be put inside linked list and next is just initialized
//     data=x;
//     next=NULL;
// }
// int getdata(){  //Printing the data value of current object
//     return data;
// }
// void setdata(int x){    //Setting the data value of current object
//     this->data=x;
// }
// node* getnext(){    //Printing the pointer value of current object
//     return next;
// }
// node* setnext(node* y){     //Setting the pointer value of current object
//     this->next = y;
// }
// };

// //Class of Linked List so that we can instantiate it again and again
// class LinkedList{       //Includes all methods of linkedlist
//     public:
//     node* head;         //Head is the first node of the List

//     //Declaring functions:
//     int addFront(node* n);   //To add node AT FRONT
//     int isEmpty();      //Check whether list is empty
//     int addEnd(node* n);    //To add node at end
//     node* search(int k);    //Search a value
//     node* deleteNode(int x);    //Delete a particular node
//     node* getLastNode();
//     int traverse();
//     void print();

//     LinkedList(){
//         head = NULL;    //Initializing head value to null
//     }
// };

// //INSERTING IN FRONT
// int LinkedList :: addFront(node* n){
//     int i;
//     n->next = head;     //Making the NEXT of the NEW NODE point to HEAD
//     head = n;   //Making the NEW NODE as HEAD
//     return i;   //Returning the POSITION where NEW NODE is added
// }

// //INSERTING AT END
// int LinkedList :: addEnd(node* n){
    
//     if(head==NULL){  //Checking if list is empty
//     head=n;     //Making the new node as head
//     n->next = NULL;     //Making the next pointer point to NULL because it is the last element
//     }

//     else{       //If List is not empty
//     node* n2 = getLastNode();       //Getting Information about the last Node
//     n2->next = n;   //Point to New Node
//     }
//     }

// //GETTING INFO ABOUT LAST NODE
// node* LinkedList :: getLastNode(){
//     node* ptr = head;   //Creating a pointer pointing to Head
//     while(ptr->next!=NULL){     //Iterting until we reach the last Node (because the NEXT of the last element is NULL)
//         ptr = ptr->next;    //If not NULL, then take the pointer to the next element, here we DO NOT USE IERATION
//     }
//     return ptr; //Return when we find it.
// }

// //SEARCHING FOR AN ELEMENT
// node* LinkedList :: search(int x){
//     node* ptr = head;
//     while(ptr!=NULL && ptr->data!=x){
//         ptr=ptr->next;
//     }
//     return ptr;
// }

// //DELETING A NODE
// node* LinkedList :: deleteNode(int x){
//     node* n = search(x);    //Making use of our search function
//     node* ptr = head;
//     if(ptr==n){     //Meaning if POINTER IS THE FIRST ELEMENT OF THE LIST
//         ptr->next = n->next;    //Pointing to the next element of the element to be deleted
//         return n;
//     }
    
//     else{
//         while(ptr->next!=n){
//             ptr = ptr->next;
//         }
//         ptr->next = n->next;
//         return n;
//     }
// }

// //CHECK IF LIST IS EMPTY
// int LinkedList :: isEmpty(){
//     if(head==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// /*IMPLEMENTATION OF CIRCULAR LINKED LIST*/

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         data=0;
//         next=NULL;
//     }

//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// class CircularList{
//     public:
//     Node* head;

//     int addFront(Node* n);
//     int addEnd(Node* n);
//     int isEmpty();
//     Node* getLastNode();

//     Node* search(int x);
//     Node* deleteNode(int x);

//     CircularList(){
//         head=NULL;
//     }
// };


// //INSERTION AT BEGINNING
// int CircularList :: addFront(Node* n){
//     int i=0;

//     if(head==NULL){
//         n->next=head;
//         head=n;
//         i++;
//     }
//     else{
//         n->next=head;   //Because Circular List
//         Node* last = getLastNode();     //Last Node
//         last->next = n;
//         head=n;
//         i++;
//     }
//     return i;
// }

// //INSERTION AT END
// int CircularList :: addEnd(Node* n){
//     if(head==NULL){
//         head=n;
//         n->next = NULL;
//     }
//     else{
//         Node* last = getLastNode();
//         last->next = n;
//         n->next = head;
//     }
// }


// //SEARCHING 
// Node* CircularList :: search(int x){
//     Node* ptr = head;
//     while(ptr!=NULL && ptr->data!=x){
//         ptr = ptr->next;
//     }
//     return ptr;
// }


// //DELETING A NODE
// Node* CircularList :: deleteNode(int x){
//     Node* n = search(x);
//     Node* ptr = head;

//     if(ptr==NULL){
//         cout<<"List is empty ";
//         return NULL;
//     }
//     else if(ptr==n){
//         ptr->next = n->next;
//         return n;
//     }
//     else{
//         while(ptr->next!=n){    //Traversing
//             ptr = ptr->next;
//         }
//         ptr->next = n->next;
//         return n;
//     }
// }

// Node* CircularList :: getLastNode(){
//     Node* ptr = head;
//     ptr = ptr->next;
//     while(ptr->next!=head){
//         ptr = ptr->next;
//     }
//     return ptr;
// }

// int LinkedList :: traverse(){
//     node* ptr = head;
//     int i=0;
//     while(ptr!=NULL){
//     ptr = ptr->next;
//     i++;
//     }
// }

// void LinkedList :: print(){
//     node* ptr = head;
//     while(ptr!=NULL){
//         cout<< ptr->data;
//         ptr=ptr->next;
//     }
// }

// //Driver
// int main()
// {
//     LinkedList L;   //Adding value to List
//     int x;
//     int n;
//     cout<<"How many elements would you like to add: ";cin>>n;
    
//     for(int i=0;i<n;i++){
//     cout<<"Please enter an integer value: "; cin>>x;
//     node* n1 = new node(x);
//     L.addEnd(n1);
//     }
    
//     L.print();
//     return 0;
// }




// //Doubly LinkedList
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     int data=0;
//     Node* next=NULL;
//     Node* prev=NULL;

//     Node(){
//         data=0;
//         next=NULL;
//         prev=NULL;
//     }

//     Node(int x){
//         data=x;
//         next=NULL;
//         prev=NULL;
//     }
// };

// //Insert at last
// void insertEnd(Node* head, int val){
//     if(head==NULL){
//         insertHead(head,val);   //That if at all the list is empty just insert the node at the start bro
//         return;
//     }


//     Node* n = new Node(val);
//     Node* temp = head;

//     while(temp!=NULL){      //Traversing
//         temp = temp.next;
//     }
    
//     temp->next=n;   //Make the next of the List point to new node
//     n->prev = temp; //Make the previous of the new node point to List
// }

// void insertEnd

// int main()
// {
   
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// class SinglyLinkedListNode{
//    public:
//    SinglyLinkedListNode* next=NULL;
//    SinglyLinkedListNode* head=NULL;
//    int data=0;

//    SinglyLinkedListNode(){
//       next=NULL;
//       data=0;
//    }

//    SinglyLinkedListNode(int data){
//       next=NULL;
//       this->data=data;
//    }

//    void insert(int num);
//    void print();
// };

// void SinglyLinkedListNode :: print(){
//    SinglyLinkedListNode* ptr = head;
//    while(ptr!=NULL){
//       cout<<ptr->data<<" ";
//       ptr=ptr->next;
//    }
// }

// void SinglyLinkedListNode :: insert(int num){
//    SinglyLinkedListNode* n = new SinglyLinkedListNode(num);   //Making new node
//    if(head==NULL)    {
//       head=n;
//       n->next=NULL;
//    }

//    else{
//    SinglyLinkedListNode* ptr = head;
//    while(ptr->next!=NULL){
//       ptr=ptr->next;
//    }   
//    ptr->next = n;
//    n->next = NULL;
//    }
// }

//Function to print LinkedList in reverse
// void reversePrint(SinglyLinkedListNode* llist) {
//     if(llist == NULL)   cout<<" ";
//     else{
//         SinglyLinkedListNode* ptr = llist;
//         vector<int> arr;
//         int a;
//         while(ptr!=NULL){
//             a=ptr->data;
//             arr.push_back(a);
//             ptr=ptr->next;
//         }
//     for(int i=arr.size()-1;i>=0;i--){
//         cout<<arr[i]<<endl;
//     }
//     }
// }

// int main()
// {  int num,n;
//    cout<<"How many values in LinkedList? ";cin>>n;
//    SinglyLinkedListNode L;
   
//    for(int i=0;i<n;i++){
//       cin>>num;
//       L.insert(num);
//    }
//    cout<<endl;
//    L.print();
//    cout<<endl;

//    SinglyLinkedListNode* llist = L.head;

//    return 0;
// }