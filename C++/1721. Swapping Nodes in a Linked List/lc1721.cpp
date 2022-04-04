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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode *t=head,*t1=head;
        while(t)
        {
            t=t->next;
            len++;
        }
        int k1=len-k+1;
        t=head;
        while(--k>0)
        {
           t=t->next; 
        }
        while(--k1>0)
        {
           t1=t1->next; 
        }
        swap(t->val,t1->val);
        return head;
    }
};
