//Goal: To print roman number CM as intended
// #include<bits/stdc++.h>
// using namespace std;

// static stack<char> a;

// int notinorder(){
//     a.emplace(s);


// }

// stack insertstack(char c){
//     a.emplace(c);
// }

// int main()
// {   
//     insertstack("C");
//     insertstack("M");

//     return 0;
// }
/*
Steps:
1) Push CM into stack
2) Stack: 
    M
    C
//The pushing is going to continue till value(s[i])<value(s[j])
3) When pushing is done, we subtract the value of all Lower stacks from top.
How?
1) Take the top of the stack and add it to some 'sum'.
2) Now subtract everything else from it.
*/




// #include<bits/stdc++.h>
// using namespace std;

// static int sum=0;

// //Subtracting the lowers of the stack from the top

// //Deciding which elements should go inside stack


// int main()
// {
//     stack<int> a;
//     a.emplace(1);
//     a.emplace(5);
//     a.emplace(50);
//     a.emplace(100);
//     a.emplace(1000);
    
//     cout<<difference(a);

//     return 0;
// }
/*
Eg. I L C M
1000 -(100- (50-(5-1)) )..  Yes
let (5-1)=diff


First, diff = 5-1
Second, sum = sum-diff



Eg. I V C M
1000 - (100 - (5-1))

Problem: Skipping last recursive iteration.

Dry run:
1)  sum=1000
    stack: 100 50 5 1
    return 1000 = 1000 - diff(stack)

2)  diff(100 50 5 1)
    sum = 100
    stack: 50 5 1
    return 100 - diff(stack)

3)  sum=50
    stack: 5 1
    return 50 - diff(5 1)

4)  sum=5
    stack:1 
    return 5 - diff(1)

5)  sum=1
    stack=NULL
    return 1-diff(NULL)

6)  return sum;
    5-1=4
    50-4=46
    100-46=54
    1000-54=946
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
    public:
    Node* top;
    Stack() {
        top = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void print() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.print();

    cout << "Top element is " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    stack.print();

    cout << "Top element is " << stack.peek() << endl;

    return 0;
}