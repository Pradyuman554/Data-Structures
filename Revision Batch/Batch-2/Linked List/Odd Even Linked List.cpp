class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenhead = even;

        while(even!=NULL && even->next!=NULL){
            odd->next = odd->next->next; // connect odd nodes
            odd = odd->next; // Iterate odd pointer
            even->next = even->next->next; // connect even nodes
            even = even->next; //Iterate even pointer
        }
        odd->next = evenhead;
        return head;
    }
};