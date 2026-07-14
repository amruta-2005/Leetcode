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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* leftPre=dummy;
        ListNode* curr=head;
        for(int i=0;i<left-1;i++)
        {
            leftPre=leftPre->next;
            curr=curr->next;
        }
        ListNode* sublist=curr;
        ListNode* prev=NULL;
        for(int i=0;i<right-left+1;i++)
        {
            ListNode* newNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newNode;
        }
        leftPre->next=prev;
        sublist->next=curr;
        return dummy->next;
    }
};