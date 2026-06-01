class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode ans(0);
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            ListNode* prev = &ans;
            while (prev->next != NULL && prev->next->val < curr->val) {
                prev = prev->next;
            }
            curr->next = prev->next;
            prev->next = curr;
            curr = nextNode;
        }
        return ans.next;
    }
};