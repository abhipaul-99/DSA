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
    bool hasCycle(ListNode *head) {
        ListNode *f = head;
        ListNode *s = head;
        if(head==NULL){
            return false;
        }
        while(f!=NULL && f->next!=NULL){
           
            f = f->next->next;
            s = s->next;
             if(f==s){
                return true;
            }
    
        }
        return false;
        
        
    }
};