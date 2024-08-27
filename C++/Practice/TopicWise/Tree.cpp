//Tree
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left,*right;
// };

// Node* newNode(int data){
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// void Inorder(Node* node){
//     if(node==NULL)  return;
//     Inorder(node->left);
//     cout<<node->data<<" ";
//     Inorder(node->right);
// }

// int main()
// {
//     Node* root = newNode(2);
//     root->left = newNode(1);
//     root->right = newNode(3);
//     root->left->left = newNode(5);
//     root->left->right = newNode(4);

//     cout<<"Inorder Traversal: ";
//     Inorder(root);
    
//     return 0;
// }
/*
Make class Node with data and left,right pointer.
Function to make New node with class pointer type obv and setting their pointers to NULL as we would've done.
And it returns this node

A void function Inorder(Node* node)
If node is NULL then return (end the process)
Else, recursively call the Leftest Node until node is NULL. Then print this data. Then keep going right, etc.


Workflow:
        2
    1       3
5       4

Recursion:
At root 2:
    Inorder Left is initiated, cout<<data is in Stack(1) also, and Inorder Right is in Stack (1).
    Inorder left goes to 1 WHICH IS IN Stack(1).
    Then it goes to 5 AND Inorder Right is in Stack(2), and since it is NULL, its RETURNS 5.

    Inorder left(1) is initiated, which PRINTS 1 and continues with Inorder Right(2) is initiated.

    Inorder Right(2) is initiated, which PRINTS 4 and THEN TERMINATES..

    cout<<data in Stack(1) is initiated, PRINTS 2 and THEN TERMINATES.

    Inorder Right(1) is initiated, which PRINTS 3 and then TERMINATES.
*/




//Preorder
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left,*right;
// };

// Node* newNode(int data){
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// void Preorder(Node* node){
//     if(node==NULL)  return;
//     cout<<node->data<<" ";
//     Preorder(node->left);
//     Preorder(node->right);
// }

// int main()
// {
//     Node* root = newNode(2);
//     root->left = newNode(1);
//     root->right = newNode(3);
//     root->left->left = newNode(5);
//     root->left->right = newNode(4);

//     cout<<"Inorder Traversal: ";
//     Preorder(root);
    
//     return 0;
// }
/*A void function Preorder(Node* node)
If node is NULL then return (end the process)
Else, Then print this data. Then recursively call the Leftest Node until node is NULL. Then keep going right, etc.
*/




//PostOrder
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left,*right;
// };

// Node* newNode(int data){
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// void Postorder(Node* node){
//     if(node==NULL)  return;
//     Postorder(node->left);
//     Postorder(node->right);
//     cout<<node->data<<" ";
// }

// int main()
// {
//     Node* root = newNode(2);
//     root->left = newNode(1);
//     root->right = newNode(3);
//     root->left->left = newNode(5);
//     root->left->right = newNode(4);

//     cout<<"Inorder Traversal: ";
//     Postorder(root);
    
//     return 0;
// }
/*A void function Preorder(Node* node)
If node is NULL then return (end the process)
Else, Then print this data. Then recursively call the Leftest Node until node is NULL. Then keep going right, etc.
*/




//Traversing Trees using Stacks
//Inorder
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left,*right;
// };

// Node* newNode(int data){
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// void Inorder(Node* node){
//     stack<Node*> s;
//     Node* curr = node;

//     while(curr!=NULL || s.empty()!=true){
//         while(curr!=NULL){
//             s.push(curr);
//             curr = curr->left;
//         }

//         curr = s.top();
//         cout<<curr->data;
//         s.pop();

//         curr = curr->right;
//     }    
// }

// int main()
// {
//     Node* root = newNode(2);
//     root->left = newNode(1);
//     root->right = newNode(3);
//     root->left->left = newNode(5);
//     root->left->right = newNode(4);

//     cout<<"Inorder Traversal: ";
//     Inorder(root);
    
//     return 0;
// }
/*
        1
    2       3
4       5

s = 4 2 1
curr = 4, s = 2 1
cout<<4;
curr = right traverse (in case the tree is Incomplete Tree)

Now the Stack is NOT EMPTY, so we continue the process
As curr is NULL, inner while loop not initiated
curr = 2, s = 1
cout<<2;
curr = right traverse, goes to 5.
Rest Ez
*/




//Preorder
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left,*right;
// };

// Node* newNode(int data){
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// void Preorder(Node* root)
// {
//     stack<Node*> s;
//     s.push(root);

//     while (s.empty() == false) {
//         Node* node = s.top();
//         cout<<node->data<<" ";
//         s.pop();

//         if (node->right)
//             s.push(node->right);
//         if (node->left)
//             s.push(node->left);
//     }
// }

// int main()
// {
//     Node* root = newNode(2);
//     root->left = newNode(1);
//     root->right = newNode(3);
//     root->left->left = newNode(5);
//     root->left->right = newNode(4);

//     cout<<"Preorder Traversal: ";
//     Preorder(root);
    
//     return 0;
// }
/*
Preorder is: Root->left->right
1) Push root inside stack
2) Till stack is empty, print the data AT THE TOP OF STACK, and KEEP POPPING STACK
3) If TOP's right exists, THEN PUSH IT. (right first, because stack is LIFO)
4) If TOP's left exists, THEN PUSH IT.
*/





//Postorder
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
};

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

vector<int> Postorder(Node* root){
    vector<int> postOrderList;

    if (root == NULL)        return postOrderList;
    stack<Node*> S;
    S.push(root);
    Node* prev = NULL;

    while (!S.empty()) {
        auto current = S.top();
        /* go down the tree in search of a leaf an if so
           process it and pop stack otherwise move down */
        if (prev == NULL || prev->left == current
            || prev->right == current) {
            if (current->left)
                S.push(current->left);
            else if (current->right)
                S.push(current->right);
            else {
                S.pop();
                postOrderList.push_back(current->data);
            }
            /* go up the tree from left node, if the child
               is right push it onto stack otherwise process
               parent and pop stack */
        }

        else if (current->left == prev) {
            if (current->right)
                S.push(current->right);
            else {
                S.pop();
                postOrderList.push_back(current->data);
            }
 
            /* go up the tree from right node and after
            coming back from right node process parent and
            pop stack */
        }
        else if (current->right == prev) {
            S.pop();
            postOrderList.push_back(current->data);
        }
        prev = current;
    }
    return postOrderList;
}

int main()
{   
    Node* root = NULL;
    root = newNode(2);
    root->left = newNode(1);
    root->right = newNode(3);
    root->left->left = newNode(5);
    root->left->right = newNode(4);

    cout<<"Postorder Traversal: ";
    vector<int> a = Postorder(root);
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    
    return 0;
}

/*
1) If root is NULL, return the list, prev=NULL, stack, list
2) Else while(stack is not empty):
	a) if(prev=NULL or its left or right are current):
		1. If current's left exist, push
		2. If right exist, push
		3. Else pop and print data
	b) else if (current->left=prev)
		1. if(right exist)	then push
		2. else pop and print data
	c) else if (current->right=prev)	pop and print ans
	prev=current
return ans.
*/





//BINARY SEARCH TREES
//Searching in Binary Search Trees
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left, *right;
// };

// Node* newnode(int item){
//     Node* temp = new Node;
//     temp->data= item;
//     temp->left=temp->right=NULL;
//     return temp;
// }

// Node* insert(Node* node, int data){
//     if(node==NULL)  return newnode(data);    //If there is no root node, then make a new one
//     else if(node->data > data){
//         node->left = insert(node->left, data);
//     }
//     else node->right = insert(node->right, data);
//     return node;
// }

// Node* search(Node* root, int data){
//     if(root==NULL||root->data==data)  return root;    //If root is NULL or the key is FOUND
//     if(root->data < data)   return search(root->right, data);    //If key is BIGGER
//     return search(root->left,data);   //If key is SMALLER
// }

// int main()
// {
//     Node* root = NULL; 
//     root = insert(root, 50);
//     insert(root,30);
//     insert(root,20);
//     insert(root,10);
//     insert(root,15);
//     insert(root,16);

// if(search(root,17)==NULL)    cout<<"Not found";
// else cout<<"Found";
    
//     return 0;
// }
/*
Insert function(node, data):
1) If node is NULL, make a new node
2) Else if node's current data is smaller than new data, then recurse in its right, otherwise its left. Then return Node

Search(root, data):
1) If root is NULL or Data is found, then return root
2) Else if its data is smaller than it, then search in left subtree(recursively)
3) Else search right subtree(recursively).

Please INITIALIZE THE ROOT OF TREE IN MAIN FUNCTION.
*/




//Deleting in BST
// C++ program to implement optimized delete in BST.
// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
// 	int key;
// 	struct Node *left, *right;
// };

// // A utility function to create a new BST node
// Node* newNode(int item)
// {
// 	Node* temp = new Node;
// 	temp->key = item;
// 	temp->left = temp->right = NULL;
// 	return temp;
// }

// // A utility function to do inorder traversal of BST
// void inorder(Node* root)
// {
// 	if (root != NULL) {
// 		inorder(root->left);
// 		printf("%d ", root->key);
// 		inorder(root->right);
// 	}
// }

// Node* insert(Node* node, int key)
// {
// 	if (node == NULL)
// 		return newNode(key);
	
// 	else {if (key < node->key)
// 		node->left = insert(node->left, key);
// 	else
// 		node->right = insert(node->right, key);
// 	return node;
// 	}
// }

// /* Given a binary search tree and a key, this function
// deletes the key and returns the new root */
// Node* deleteNode(Node* root, int k)
// {
// 	// Base case
// 	if (root == NULL)
// 		return root;

// 	// Recursive calls for ancestors of
// 	// node to be deleted
// 	if (root->key > k) {
// 		root->left = deleteNode(root->left, k);
// 		return root;
// 	}
// 	else if (root->key < k) {
// 		root->right = deleteNode(root->right, k);
// 		return root;
// 	}

// 	// We reach here when root is the node
// 	// to be deleted.

// 	// If one of the children is empty
// 	if (root->left == NULL) {
// 		Node* temp = root->right;
// 		delete root;
// 		return temp;
// 	}
// 	else if (root->right == NULL) {
// 		Node* temp = root->left;
// 		delete root;
// 		return temp;
// 	}

// 	// If both children exist
// 	else {

// 		Node* succParent = root;

// 		// Find successor
// 		Node* succ = root->right;
// 		while (succ->left != NULL) {
// 			succParent = succ;
// 			succ = succ->left;
// 		}

// 		// Delete successor. Since successor
// 		// is always left child of its parent
// 		// we can safely make successor's right
// 		// right child as left of its parent.
// 		// If there is no succ, then assign
// 		// succ->right to succParent->right
// 		if (succParent != root)
// 			succParent->left = succ->right;
// 		else
// 			succParent->right = succ->right;

// 		// Copy Successor Data to root
// 		root->key = succ->key;

// 		// Delete Successor and return root
// 		delete succ;
// 		return root;
// 	}
// }

// // Driver Code
// int main()
// {
// 	/* Let us create following BST
// 			50
// 		   / \
// 		  30 70
// 		  / \ / \
// 	    20 40 60 80 
		
// */
// 	Node* root = NULL;
// 	root = insert(root, 50);
// 	root = insert(root, 30);
// 	root = insert(root, 20);
// 	root = insert(root, 40);
// 	root = insert(root, 70);
// 	root = insert(root, 60);

// 	printf("Original BST: ");
// 	inorder(root);

// 	printf("\n\nDelete a Leaf Node: 20\n");
// 	root = deleteNode(root, 20);
// 	printf("Modified BST tree after deleting Leaf Node:\n");
// 	inorder(root);

// 	printf("\n\nDelete Node with single child: 70\n");
// 	root = deleteNode(root, 70);
// 	printf("Modified BST tree after deleting single child Node:\n");
// 	inorder(root);

// 	printf("\n\nDelete Node with both child: 50\n");
// 	root = deleteNode(root, 50);
// 	printf("Modified BST tree after deleting both child Node:\n");
// 	inorder(root);

// 	return 0;
// }

/*
deleteNode:
1) If root is NULL, then return the root

Conditions:
2) if Root>key:
    Then recurse on the Left subtree and return root at the last
3) Else if recurse on the right subtree and return root at the last

Here, we reach after we have FOUND OUR VALUE, AND ROOT = k.
4) If One of the children of root is empty, then delete the root, and simply return the other child which is not empty
5) Else (when both children exist) traverse to the leftest element of the left subtree, then:
    a) If the leftmost element (the successor) has children (a right child), then, then replace the successor's location with his children.
    b) If it doesnt have children, then just replace it with the root.
*/