// //LinkedList Practice thang
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

// SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
//     SinglyLinkedListNode*rHead =NULL;
//     while(llist != NULL){
//         SinglyLinkedListNode* node = new SinglyLinkedListNode(llist->data);     //He made a new node which is simply the current node
//         node->next = rHead;     //Made the current node point to the previous node
//         rHead = node;       //Made the previous node, THE NEXT NODE
        
//         llist = llist->next;    //Normal Incrementing
//     }
//     return rHead;   //Returning this node head at the end
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

//     cout<<reverse(llist);

//    return 0;
// }




// int superDigit(string n, int k) {
//     // Calculate the sum of the digits in the string n
//     long long sum = 0;
//     for (char c : n) {
//         sum += c - '0';  // Convert character to integer and add to sum
//     }
    
//     // If k is 1 and the sum is a single digit, return it
//     if (k == 1 && sum < 10) {
//         return sum;
//     }
    
//     // Otherwise, calculate the super digit of the sum*k
//     return superDigit(to_string(sum * k), 1);
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
//

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr{1,1,2,3,4,5,6,2,3,4,5,10,10,10,12,12,12};
	map<int,int> mp;
	for(int i: arr)	mp[i]++;

	for(auto it: mp)	cout<<"Frequency of "<<it.first<<" is "<<it.second<<" "<<endl;

	return 0;
}