/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode *a=headA, *b=headB;
        
        int countA=0,countB=0;
        while(a->next)
        {
            countA++;
            a=a->next;
        }
        while(b->next)
        {
            countB++;
            b=b->next;
        }
        int diff=countA-countB;    
        a=headA;
        b=headB;
        if(diff<0)//A short
        {
            while(diff++)
            {
                b=b->next;
            }
        }
        else if(diff>0)//B short
        {
            while(diff--)
            {
                a=a->next;
            }
        }
        if(a==b)
            return a;
        while(a->next && b->next)
        {   
            if(a->next==b->next)
            {
                return a->next;
            }
            a=a->next;
            b=b->next;
        }
        return NULL;
    }
};
