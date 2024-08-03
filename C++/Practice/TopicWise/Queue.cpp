//Queues using Array
// #include<bits/stdc++.h>
// using namespace std;

// class Queue{
//    public:
//    int* arr;
//    int size,i=0,front,rear;

//    Queue(int s){     //If making New queue
//       size = s;
//       front = -1;
//       rear = -1;
//       arr = new int[size];
//       cout<<"New Queue of size "<<s<<" was made.\n";
//    }

//    void isEmpty(){
//       if(front==rear)   cout<<"Empty\n";
//       else cout<<"Not Empty\n";
//    }

//    void enqueue(int x){
//       if(rear == (size-1))    cout<<"isFull\n";
   
//       else if(front==-1)   {
//       rear++;
//       front++;
//       arr[rear] = x;
//       }

//       else{
//       rear++;
//       arr[rear] = x;
//    }
//    }

//    void dequeue(){
//       front++;
//    }

//    void print(){
//       int s = rear-front+1;
//       cout<<"Front: "<<front<<"\nRear: "<<rear<<endl;
//       for(int i=front;i<=rear;i++) cout<<arr[i]<<" ";
//       cout<<endl;
//    }
// };

// int main()
// {
//    int size,ele,val,del;

//    cout<<"Enter the size of the queue: ";cin>>size;
//    Queue q(size);

//    cout<<"How many elements would you like to add: ";cin>>ele;

//    cout<<"Enter "<<ele<<" element(s): \n";

//    for(int i=0;i<ele;i++){
//       cin>>val;
//       q.enqueue(val);
//    }

//    q.print();

//    cout<<"How many values would you delete: ";cin>>del;

//    for(int i=0;i<del;i++)  q.dequeue();
//    q.print();

//    q.isEmpty();
   
//    return 0;
// }




//Priority Queue using Max Heap Default
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     priority_queue<int> pq; //Priority Queue is implemented as a MAX_HEAP by default, meaning it auto arranges elements in a Descending order
    // pq.push(10);
    // pq.push(5);
    // pq.push(7);
//     //They're going to get self arranged in descending order
//     while(!pq.empty()){
//     cout<<pq.top()<<" ";
//     pq.pop();}
//     return 0;
// }




//Priority Queue using Min Heap
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     priority_queue< int,vector<int>,greater<int> > pq; //Priority Queue is implemented as a Min_Heap
//     //Here greater means how to Arrange the data, so this arranges it in ascending order, and vector<int> is the container used
//     pq.push(10);
//     pq.push(5);
//     pq.push(7);
//     //Self Arranged in Ascending order
//     while(!pq.empty()){
//     cout<<pq.top()<<" ";
//     pq.pop();}
    
//     return 0;
// }