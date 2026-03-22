/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* mid =getMid(head);
        ListNode* right = mid->next;
        mid->next = nullptr;

    ListNode* l = sortList(head);
    ListNode* r = sortList(right);
    return merge(l,r); 
    }

    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* l, ListNode* r){
        ListNode dummy(0);
        ListNode* curr=&dummy;
        while(l && r){
            if(l->val <= r->val){
                curr->next=l;
                l=l->next;
            }
            else {
                curr->next=r;
                r=r->next;
            }
            curr=curr->next;
        }
        curr->next=l ? l : r;
        return dummy.next;
    }
};