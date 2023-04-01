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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode *node = head;
        while(node!=NULL){
            node= node->next;
            size++;
        }
        
         if(n==1 && size==1){
            return NULL;
        }
        
        if(size==n){
            ListNode *tmp = head;
            head = head->next;
            return head;
        }
        
       
        
        size = size-n-1;
        ListNode *x = head;
        while(size--){
            x= x->next;
            
        }
        
        x->next = x->next->next;
        return head;
    }
};