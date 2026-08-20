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
    ListNode* revlist(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* headRev = revlist(head);
        ListNode* h1=headRev;
        int i=2;
        if(n == 1){
            return revlist(headRev->next);
        }
        else if(n == 2){
            headRev->next = headRev->next->next;
            return revlist(h1);
        }
        while(i!=n){
            i++;
            headRev=headRev->next;
        }
        headRev->next=headRev->next->next;
        return revlist(h1);

    }

};