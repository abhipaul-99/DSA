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
    int size = 0;
    ListNode *node = head;
    while (node != NULL) {
        node = node->next;
        size++;
    }
    size = size-n;
    if (size==0) {
        ListNode *tmp = head;
        head = head->next;
    } else{
        ListNode *tmp = head;
        while (--size) {
            tmp = tmp->next;
        }
        if(tmp->next && tmp->next->next){
            tmp->next = tmp->next->next;
        }
        else{
            tmp->next = NULL;
        }
    }
    
    return head;
}
};