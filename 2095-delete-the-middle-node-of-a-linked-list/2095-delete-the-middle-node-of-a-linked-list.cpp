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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        if(head==NULL || head->next==NULL) return NULL;
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        temp=head;
        int k=(len/2);
        int cnt=0;
        ListNode* prev=dummy;
    while(temp!=NULL)
    {
        if(cnt==k)
        {
            ListNode* del=temp;
            prev->next=temp->next;
            delete del;
            break;
        }
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    return dummy->next;
    }
};