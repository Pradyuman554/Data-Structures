//Stack Implementation

//Using Dynamic Array
// #include<bits/stdc++.h>
// using namespace std;


// //Stack as an Array
// class Stack{
//    public:
//    int top;
//    int* arr;      //Dynamic Allocation of array
//    int s;
   
//    Stack(int size){
//       arr = new int[size];
//       top=-1;
//       this->s = size;
//    }

//    void push(int y){
//       top++;
//       arr[top] = y;
//    }

//    bool isempty(){
//       if(top==-1) return true;
//       else return false;
//    }

//    bool isfull(){
//       if(top==s-1)   return true; 
//       else return false;
//    }

//    void pop(){
//       arr[top] = 0;
//       top--;
//       s--;
//    }

//    void print(){
//       for(int i=0;i<s;i++) cout<<arr[i]<<" ";
//       cout<<endl;
//    }

//    void peek(){
//       cout<<arr[top];
//    }

//    void Top(){
//       cout<<arr[top];
//       s--;
//    }
// };

// int main()
// {
//    int size;
//    cout<<"Enter the size of the stack: ";cin>>size;
//    Stack st(size);
//    int a;
//    for(int i=0;i<size;i++){
//       cin>>a;
//       st.push(a);
//    }
   
//    int b = sizeof(st.arr)/4;
//    cout<<"Array at first: ";
//    st.print();

//    cout<<"Array after popping: ";
//    st.pop();
//    st.print();

//    cout<<"Bool Empty: "<<st.isempty()<<"\nBool Full: "<<st.isfull()<<endl;
//    cout<<"Performed Peek operation: ";

//    st.peek();cout<<endl;

//    cout<<"Performed Top operation: ";st.Top();
//    cout<<endl;
//    cout<<"Now Array: ";
//    st.print();

//    return 0;
// }




//Stacks using Linked Lists
// #include<bits/stdc++.h>
// using namespace std;

// //Stack as an LinkedList
// class Node{
//    public:
//    int data;
//    Node* next;      //Dynamic Allocation of array
   
//    Node(){
//       data=0;
//       next=NULL;
//    }

//    Node(int x){
//       next = NULL;
//       this->data = x;
//    }
// };

// class LinkedList{
//    public:
//    Node* head;

//    void push(Node* n);
//    void pop();
//    void peek();
//    void print();
// };

// void LinkedList :: push(Node* n){
//    n->next = head;
//    head = n;
// }

// void LinkedList :: pop(){
//    head = head->next;
// }

// void LinkedList :: print(){
//    Node* ptr = head;
//    while(ptr!=NULL){
//       cout<< ptr->data<<" ";
//       ptr = ptr->next;
//    }
//    cout<<endl;
// }

// int main()
// {
//    LinkedList L;
//    int x,n;

//    cout<<"How many elements would you like to add: ";cin>>n;
//    cout<<"Enter "<<n<<" integers:"<<endl;

//    for(int i=0;i<n;i++){
//       cin>>x;
//       Node* n1 = new Node(x);
//       L.push(n1);
//    }

//    L.print();

//    return 0;
// }




//Stack using STL library
// #include<bits/stdc++.h>
// using namespace std;

// void print(stack<int> a){
//     // for(int i=0;i<a.size();i++){        //Incorrect for loop, IDK why, it would run if we did i<a.size()+e, where e is a value based on the size of input
//     //     cout<<endl<<a.top()<<" ";
//     //     a.pop();
//     // }

//     while(!a.empty()){
//         cout<<endl<<a.top()<<" ";
//         a.pop();
//     }
// }

// int main()
// {
//     stack<int> s;
//     int a,b;
//     cout<<"How many values: ";cin>>a;

//     for(int i=0;i<a;i++){
//         cin>>b;
//         s.push(b);
//     }

//     print(s);
//     cout<<endl;

//     cout<<".back() function: "<<s.back<<endl;
//     // cout<<"."

//     cout<<"Is the stack empty? "<<s.empty();    
//     return 0;
// }





//Cloning a stack
// C++ program to copy the contents from source stack
// into destination stack without using extra space
// #include <iostream>
// #include <vector>
// using namespace std;

// // Define a class for Stack
// class Stack {
// vector<int> stack;

// public:
// void push(int value) {
// stack.push_back(value);
// }
// int pop() {
// 	int topVal = stack.back();
// 	stack.pop_back();
// 	return topVal;
// }

// int length() {
// 	return stack.size();
// }

// void display() {
// 	for (int i = stack.size() - 1; i >= 0; i--) {
// 		cout << stack[i] << endl;
// 	}
// 	cout << endl;
// }
// };

// int main() {
// Stack source, dest; // Source Stack and Destination Stack
// source.push(1);
// source.push(2);
// source.push(3);

// cout << "Source Stack:" << endl;
// source.display();

// int count = 0;

// // Reverse the order of the values in source stack
// while (count != source.length() - 1) {
// 	int topVal = source.pop();
// 	while (count != source.length()) {
// 		dest.push(source.pop());
// 	}
// 	source.push(topVal);
// 	while (dest.length() != 0) {
// 		source.push(dest.pop());
// 	}
// 	count += 1;
// }

// // Pop the values from source and push into destination stack
// while (source.length() != 0) {
// 	dest.push(source.pop());
// }

// cout << "Destination Stack:" << endl;
// dest.display();

// return 0;
// }

// // This code is contributed by Pushpesh Raj.




//Traversing a stack
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
	
// 	return 0;
// }





//Convert infix expression to postfix 
// #include <bits/stdc++.h> 
// using namespace std; 

// // Function to return precedence of operators 
// int prec(char c) 
// { 
// 	if (c == '^') 
// 		return 3; 
// 	else if (c == '/' || c == '*') 
// 		return 2; 
// 	else if (c == '+' || c == '-') 
// 		return 1; 
// 	else
// 		return -1; 
// } 

// // The main function to convert infix expression 
// // to postfix expression 
// void infixToPostfix(string s) 
// { 

// 	stack<char> st; 
// 	string result; 

// 	for (int i = 0; i < s.length(); i++) { 
// 		char c = s[i]; 

// 		// If the scanned character is 
// 		// an operand, add it to output string. 
// 		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
// 			|| (c >= '0' && c <= '9')) 
// 			result += c;

// 		// If the scanned character is an 
// 		// ‘(‘, push it to the stack. 
// 		else if (c == '(') 
// 			st.push('('); 

// 		// If the scanned character is an ‘)’, 
// 		// pop and add to output string from the stack 
// 		// until an ‘(‘ is encountered. 
// 		else if (c == ')') { 
// 			while (st.top() != '(') { 
// 				result += st.top(); 
// 				st.pop(); 
// 			} 
// 			st.pop(); 
// 		} 

// 		// If an operator is scanned 
// 		else { 
// 			while (!st.empty() && prec(s[i]) <= prec(st.top())) { 
// 				result += st.top();
// 				st.pop(); 
// 			} 
// 			st.push(c); 
// 		} 
// 	} 

// 	// Pop all the remaining elements from the stack 
// 	while (!st.empty()) { 
// 		result += st.top(); 
// 		st.pop(); 
// 	} 

// 	cout << result << endl; 
// } 

// // Driver code 
// int main() 
// { 
// 	string exp = "a+b*(c^d-e)^(f+g*h)-i"; 

// 	// Function call 
// 	infixToPostfix(exp); 
	
// 	return 0; 
// }

/*
prec function to check precedence for the variable having 4 levels
inPo(string s) having a STACK and a STRING RESULT{
for loop to TRAVERSE STRING{
	char c = s[i]
	check if c is operand, then store in result
	check if c is opening bracket, then push 
	check if c is closing bracket, then until the stack shows an opening bracket, add to result, and keep popping the stack
	else until stack is empty and precedence of c is SMALLER THAN STACK(means if precedence of c is bigger than the elements of stack, then stop the process){
		add the stack to result, and keep popping the stack
	}
	then push the value of c inside stack (if stack's precedence is smaller than c);
}

until stack is empty, add the stack to result
print the result
}

Short:
Prec function

inPo(string s){
	stack and string result;
	for loop traversing string{
		store inside c
		check if c is operand (store in result), opening bracket (push in stack), closing bracket (then store in result until stack is empty) 
		or else{
			until stack is empty and precedence of c is smaller than stack, store stack in result
	}
	}
	THEN, store the left out stack in result
	print
}

Basic Structure:
prec
inPo(string s):
2 Variables: stack and string result
For loop containing, if operand (store in result), if opening (store in result) and closing bracket (store in stack), and if else, store stack in result until prec(c) > prec(top)
Storing WHOLE STACK inside Result
Print
*/




//Parenthesis Matching
// #include<bits/stdc++.h>
// using namespace std;

// bool Parenthesis(string a){
// 	stack<char> temp;
// 	for(int i=0;i<a.length();i++){
// 		if(temp.empty()){
// 			temp.push(a[i]);
// 		}

// 		else if((temp.top()=='('&& a[i]==')') || (temp.top()=='{' && a[i]=='}') || (temp.top()=='[' && a[i]== ']')){
// 			//Meaning brackets are complete
// 			temp.pop();
// 		}

// 		else{
// 			temp.push(a[i]);
// 		}
// 	}
// 		if(temp.empty()) return true;
// 		else return false;
// }

// int main()
// {
// 	string a = "{()}[]";

// 	if(Parenthesis(a))	cout<<"Balanced";
// 	else cout<<"Unbalanced";
// 	return 0;
// }
/*
Only 1 function
bool (string a){
	for(till length of a){
		if stack is empty, put a[i] into the stack
		if not empty, then if the parenthesis are closed, Pop the stack (meaning operation of the bracket isn't necessary)
		otherwise push the a[i], into the stack
	}
	if stack is empty, return true, else false	
}
Explaination:
Push every element into the stack, compare and pop if same, and KEEP PUSHED if not same, it is going to be used later.
*/