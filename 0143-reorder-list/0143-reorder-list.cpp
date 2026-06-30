class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        slow->next = NULL;

        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* l1 = head;
        ListNode* l2 = prev;
        
        while(l2){
            ListNode* n1 = l1->next;
            ListNode* n2 = l2->next;
            l1->next = l2;
            l2->next = n1;
            l1 = n1;
            l2 = n2;
        }
    }
};