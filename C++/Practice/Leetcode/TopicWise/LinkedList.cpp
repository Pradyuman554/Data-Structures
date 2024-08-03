//Reverse a LinkedList: Brute Force
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         vector<int> arr;
//         ListNode* ptr=head;
//         while(ptr!=NULL){
//             arr.push_back(ptr->val);
//             ptr=ptr->next;
//         }
//         ptr=head;
//         for(int i=arr.size()-1;i>=0;i--){
//             ptr->val=arr[i];
//             ptr=ptr->next;
//         }
//         ptr=head;
//         return ptr;
//     }
// };

//Reverse a LinkedList: Recursive Approach
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {

//         if(head==NULL or head->next==NULL)
//         return head;

//         ListNode* newHead = reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;

//         return newHead;
//     }
// };

//Reverse a LinkedList: Iterative Approach; 3 Pointers
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         while(curr){
//             ListNode* forw = curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forw;
//         }
//         return prev;
//     }
// };




//Find the middle element of a LinkedList: Brute Force
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int count=0;
//         ListNode* ptr=head;
//         while(ptr!=NULL){
//             ptr=ptr->next;
//             count++;
//         }
//         ptr=head;
//         int n = count/2;
//         for(int i=0;i<n;i++){
//             ptr=ptr->next;
//         }
//         return ptr;
//     }
// };

//Find the middle element of LinkedList: Optimal using 2 pointers, one with 2x speed than the other
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//        int l=0;
//        ListNode* temp = head;
//        while(temp!=NULL)
//        {
//            l+=1;
//            temp=temp->next;
//        }
//        ListNode* slow = head;
//        ListNode* fast  = head;
//        while(fast->next && fast->next->next && slow->next)
//        {
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        if(l%2==1) return slow;  //For odd
//        return slow->next;       //For even
//     }
// };





//Merge Sort in LinkedList
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* dummy = new ListNode();
//         ListNode* head=dummy;
//         while(list1 && list2){
//             if(list1->val>list2->val){
//                 head->next=list2;
//                 list2=list2->next;
//             }
//             else {
//                 head->next=list1;
//                 list1=list1->next;
//             }
//             head=head->next;
//         }
//         if(list1){
//             head->next=list1;
//             list1=list1->next;            
//             head=head->next;
//         }

//         if(list2){
//             head->next=list2;
//             list2=list2->next;         
//             head=head->next;
//         }
//     return dummy->next;
//     }
// };





//Remove an element: 2 Pointers
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
        
//         ListNode* fast = dummy;
//         ListNode* slow = dummy;
        
//         for (int i = 0; i <= n; ++i) {
//             fast = fast->next;
//         }
        
//         while (fast != nullptr) {
//             fast = fast->next;
//             slow = slow->next;
//         }
        
//         slow->next = slow->next->next;
        
//         return dummy->next;
//     }
// };





//Add 2 numbers as a Linked List
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int carry = 0;
//         ListNode* dummyHead = new ListNode();
//         ListNode* ptr = dummyHead;

//         while (l1 || l2 || carry) {
//             int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
//             carry = sum / 10;

//             ptr->next = new ListNode(sum % 10);
//             ptr = ptr->next;

//             if (l1) l1 = l1->next;
//             if (l2) l2 = l2->next;
//         }

//         return dummyHead->next;
//     }
// };





//Delete a given node when the node is given: Pointer change
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         *node = *node->next;
//         }
// };

//Delete a given node when the node is given: Fill the next node's info into current one
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node->val = node->next->val;
//         node->next = node->next->next;
//         }
// };

//Delete a given node when the node is given: Same like last approach, just we make an alias: newNode
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         ListNode* nextNode = node->next;
//         node->val = nextNode->val;
//         node->next = nextNode->next;
//         delete nextNode;
//         }
// };





//Intersection of 2 Linked Lists
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         map<ListNode*,int> mp;
//         ListNode* a = headA;
//         ListNode* b = headB;

//         while(a){
//             mp[a] = a->val;
//             a=a->next;
//         }

//         while(b){
//             if(mp.count(b))    return b;
//             b=b->next;
//         }
//         return NULL;
//     }
// };




//Detect cycle in a linked list
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head==NULL)  return false;
//         ListNode* slow = head;
//         ListNode* fast = head->next;

//         while(fast!=slow){
//             if(fast==slow)  return true;
//             slow = slow->next;
//             if(fast && fast->next)  fast = fast->next->next;
//             else return false;
//         }
//         return true;
//     }
// };





//Reverse Nodes in k-group, reverse in the order of k, Recursive Approach
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* ptr = head;
//         for(int i=0;i<k;i++){
//             if(ptr==NULL)   return head;    //Because we only iterate till the list is divisible by k
//             ptr = ptr->next;
//         }

//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* nxt = NULL;
//         for(int i=0;i<k;i++){
//             nxt = curr->next;   //For iteration, so that the next pointer of the current is not lost
//             curr->next = prev;  //Now that we've secured the next pointer, we can safely point curr's next  to prev
//             prev = curr;
//             curr = nxt;         //For iteration
//         }
//         head->next = reverseKGroup(curr, k); //curr as it already contains the next pointer
//         return prev;
//     }
// };

//Iterative Approach
// class Solution {
// public:
//     		ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         ListNode* before = dummy;
//         ListNode* after = head;
//         ListNode* curr = nullptr;
//         ListNode* prev = nullptr;
//         ListNode* nxt = nullptr;
//         while(true){
//             ListNode* cursor = after;
//             for(int i = 0; i < k; i++){
//                 if(cursor == nullptr) return dummy->next;
//                 cursor = cursor->next;
//             }
//             curr = after;
//             prev = before;
//             for(int i = 0; i < k; i++){
//                 nxt = curr->next;
//                 curr->next = prev;
//                 prev = curr;
//                 curr = nxt;
//             }
//             after->next = curr;
//             before->next = prev;
//             before = after;
//             after = curr;
//         }
//     }
// };


//Optimised, Using Count
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         int cnt = 0;
//         ListNode* counter = head;
//         ListNode* temp = head;
//         ListNode* ans = head;
//         while(counter!=NULL){
//             cnt++;
//             counter = counter->next;
//         }
//         cnt /= k;
//         stack<int> st;
//         int k1 = k;

//         while(temp!=NULL){
//             st.push(temp->val);
//             k1--;
//             temp = temp->next;
//             if(k1==0){
//                 while(!st.empty()){
//                     ans->val = st.top();
//                     st.pop();
//                     ans = ans->next;
//                 }
//                 cnt--;
//                 k1 = k;
//             }
//             if(cnt==0){
//                 break;
//             }
//         }
//         return head;
//     }
// };

//Reverse a LinkedList in K group: Easier Approach without using stack
// node* reverseKNodes(node* head,int k) {
//     if(head == NULL||head->next == NULL) return head;
    
//     int length = lengthOfLinkedList(head);   //User defined function to find length of the list
    
//     node* dummyHead = new node(0);
//     dummyHead->next = head;
    
//     node* pre = dummyHead;
//     node* cur;
//     node* nex;
    
//     while(length >= k) {
//         cur = pre->next;
//         nex = cur->next;
//         for(int i=1;i<k;i++) {
//             cur->next = nex->next;
//             nex->next = pre->next;
//             pre->next = nex;
//             nex = cur->next;
//         }
//         pre = cur;
//         length -= k;
//     }
//     return dummyHead->next;
// }





//Check if a List is Palindrome or not: Making a new Reversed List and comparing it
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//          if(head == NULL || head->next == NULL){
//             return (head);
//         }
//         ListNode *r_head = NULL;
//         ListNode *ptr = head;
//         while(ptr!=NULL){
//             ListNode *temp = new ListNode(ptr->val);
//             temp ->next = r_head;   //Reversing; r_head stores the previous node
//             r_head = temp;          //Just incrementing to next value
//             ptr = ptr->next;
//         }
//         while(head && r_head){
//             if(head->val != r_head->val){
//                 return false;
//             }
//             head = head->next;
//             r_head = r_head->next;
//         }
//         return true;
//     }
// };

//Check if a List is Palindrome or not: Using half list reverse
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         // Steps to follow:
//         // 1_) Find the middle element
//         ListNode *slow = head, *fast = head;
//         while(fast!=NULL && fast->next !=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         // 2_) if the no of nodes are odd then move slow to one point
//         if(fast != NULL && fast->next == NULL){
//             slow = slow->next;
//         }
//         //3_) Reverse the end half
//         ListNode *prev = NULL;
//         ListNode *temp = NULL;
//         while(slow != NULL && slow->next != NULL){
//             temp = slow->next;
//             slow->next = prev;
//             prev = slow;
//             slow = temp;
//         }
//         if(slow != NULL){
//             slow->next = prev;
//         }
//         //4_) Compare the start half and end half if found any inequality then return false otherwise return true.
//         fast = head;
//         while(slow && fast){
//             if(slow->val != fast->val){
//                 return false;
//             }
//             slow = slow->next;
//             fast = fast->next;
//         }
//         return true;
//     }
// };

//Check if a List is Palindrome or not: Using half list reverse and Functions
// class Solution {
// public:
//     ListNode* getMid(ListNode* head){
//         ListNode* fast = head ; 
//         ListNode* slow = head ; 
//         while(fast){
//             slow = slow->next; 
//             if(fast->next){
//                 fast = fast->next ;
//             }
//             if(fast->next){
//                 fast = fast->next ;
//             }
//             else return slow ;
//         }
//         return slow ;
//     }

//     ListNode* reverse(ListNode* &head){
//         if(head == NULL || head->next == NULL){
//             return head ;
//         }

//         ListNode* cHad = reverse(head->next);

//         head->next->next = head ;
//         head->next = NULL ;
//         return cHad ;
//     }
//     bool isPalindrome(ListNode* head) {
//         if(!head && !head->next) return true ;

//         ListNode* mid = getMid(head) ;
//         mid = reverse(mid) ;
//         //mid = mid->next ;

//         ListNode* front = head ;

//         while(mid){
//             if(front->val != mid->val){
//                 return false ;
//             }
//             front = front->next ;
//             mid = mid->next ;
//         }
//         return true ;
//     }
// };




//Check if a Linked List has cycles: 3 Pointer Approach: Fast, Slow, Entry
// class Solution{
// public:
// ListNode* detectcycle(ListNode* head){
// if(head == NULL||head->next == NULL) return NULL;
        
//     node* fast = head;
//     node* slow = head;
//     node* entry = head;
        
//     while(fast->next != NULL&&fast->next->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
            
//         if(slow == fast) {
//             while(slow != entry) {
//                 slow = slow->next;
//                 entry = entry->next;
//             }
//             return slow;
//         }
//     }
//     return NULL;
// }
// };





//Sort a Branched LinkedList into a Single Linked List: Brute Force
// Node *flatten(Node *root)
// {
//     vector<int> vec;
//     Node* ptr = root;
    
//     while(ptr){
//         Node* ktr = ptr;
//         while(ktr){
//             vec.push_back(ktr->data);
//             ktr=ktr->bottom;
//         }
//         ptr=ptr->next;
//     }
//     sort(begin(vec),end(vec));
//     Node* node = new Node(vec[0]);
//     Node* nod = node;   //Because otherwise original pointer changes, and we will end up returning the last node
//     for(int i=1;i<vec.size();i++){
//         nod->bottom = new Node(vec[i]);
//         nod = nod->bottom;
//     }
//     return node;
// }


//Using MERGE SORT IN LINKED LIST:
// Node* merge( Node* a, Node* b )
// {
//     // If one of the linked lists is empty, return the other
//     if (a == NULL)
//         return b;

//     if (b == NULL)
//         return a;

//     Node* result;
//     // Compare the data of the nodes and merge them in sorted order
//     if (a->data < b->data)
//     {
//         result = a;  //Put the node as a, and then recurse on a's bottom because a was put as the result NOT b
//         // Recursively merge the rest of the nodes
//         result->bottom = merge( a->bottom, b );
//     }
//     else
//     {
//         result = b;  //Put the node as b, and then recurse on b's bottom because a was put as the result NOT a
//         // Recursively merge the rest of the nodes
//         result->bottom = merge( a, b->bottom );
//     }

//     return result;
// }

// // Function to flatten a linked list
// Node* flatten (Node* root)
// {
//     // Base cases
//     // If the root or the next node is empty, return the root
//     if (root == NULL || root->next == NULL)
//         return root;
//     // Recursively flatten the remaining linked lists and merge them
//     return merge( root, flatten(root->next) );
// }





//Rotate a Linked List by k times
// class Solution {
// public:
//     int number(ListNode* head){
//         ListNode* ptr = head;
//         int count=0;
//         while(ptr){
//             ptr=ptr->next;
//             count++;
//         }
//         return count;
//     }
//
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL || head->next==NULL)  return head;
//         ListNode* ptr = head;
//         ListNode* fast = head->next;
//         ListNode* slow = head;
//         int size = number(head);
//         k = k % size;   //To optimize the code for big value of k
//         for(int i=0;i<k;i++){
//             fast = head->next;
//             slow = head;
//             while(fast->next){
//                 fast = fast->next;
//                 slow = slow->next;
//             }
//             slow->next = NULL;
//             fast->next = head;
//             head = fast;
//         }
//     return head;
//     }
// };

//Rotate List: FINDING THE NEW LAST NODE APPROACH, find the last node
// class Solution {
//     ListNode*findnode(ListNode*temp, int k){
//         int count = 1;
//         while(temp != nullptr){
//             if(count == k) return temp;
//             count++;
//             temp = temp->next;
        
//         }
//         return temp;
//     }
//     public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head == nullptr || k == 0) return head;
//         ListNode*tail  = head;
//         int len = 1; 
        
//         while(tail -> next != nullptr){
//             tail = tail -> next;
//              len+=1;
//         }
//         if(k%len == 0)return head;
//             k = k % len;
//             tail -> next  = head;
//             ListNode*newlastNode = findnode(head, len-k);
//             head = newlastNode -> next;
//             newlastNode->next = nullptr;
//             return head;
//     }
// };





//Make a deep copy of a Linked List with Random Pointers
// class Solution {
// public:

//     Node* copyRandomList(Node* head) {
//         if (!head) return NULL;
//         Node* ptr = head;

//         //List copied
//         while(ptr){
//             Node* copyptr = new Node(ptr->val);
//             copyptr->next = ptr->next;
//             ptr->next = copyptr;
//             ptr = copyptr->next;
//         }

//         ptr=head;
//         while (ptr) {
//             Node* copy = ptr->next;
//             if (ptr->random)    copy->random = ptr->random->next;
//             ptr = copy->next;
//         }

//         ptr=head;
//         Node* newhead = ptr->next;
//         Node* copyptr = newhead;
        
//         while(ptr){
//             ptr->next = ptr->next->next;
//             ptr = ptr->next;

//             if(ptr){
//             copyptr->next = copyptr->next->next;
//             copyptr = copyptr->next;
//             }
//         }
//         return newhead;
//     }
// };