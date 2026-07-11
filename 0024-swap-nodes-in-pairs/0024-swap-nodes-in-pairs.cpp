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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* prev=head;
        ListNode* temp=head->next;
        while(temp!=NULL)
        {

            swap(prev->val,temp->val);

            if(temp->next==NULL) break;
            
            prev=temp->next;
            temp=prev->next;
        }
        return head;
    }
};