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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head ==NULL) return NULL;
        ListNode* w = head;
        ListNode* r = head->next;
        ListNode* s = head;
        while(r != NULL && w!=NULL){
            while(r->val == w->val){
                if(r->next == NULL){
                    w->next = NULL;
                    return s;
                }
                else{
                    r=r->next;
                }
            }
            w->next = NULL;
            w->next = r;
            r=r->next;
            w=w->next;
        }
        return s;
    }
};