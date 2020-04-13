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
    ListNode* middleNode(ListNode* head) {
        ListNode* s,* f;
        s=f=head;
        while(f && f->next)
        {
            s = s->next;
            f = f->next->next;
        }
        return s;
        
    }
};