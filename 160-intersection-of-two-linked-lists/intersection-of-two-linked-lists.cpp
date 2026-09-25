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
        // Brute force
        // ListNode *p=headA;
        // ListNode *q=headB;
        // while(p!=NULL){
        //     ListNode* temp = q;
        //     while(temp!=NULL){
        //         if(p==temp) return temp;
        //         temp = temp->next;
        //     }
        //     p=p->next;
        // }
        // return NULL;


        //set ds 
        unordered_set<ListNode*> seen;
        ListNode *p = headA;
        while(p){
                seen.insert(p);
            p = p->next;
        }
        p = headB;
        while (p) {
            if (seen.count(p)) return p;
            p = p->next;
        }
        return NULL;








        // set ds
        // unordered_set<ListNode*> seen;
        // ListNode *p = headA;
        // while (p) {
        //     visited.insert(p);
        //     p = p->next;
        // }
        // p = headB;
        // while (p) {
        //     if (visited.count(p)) return p;
        //     p = p->next;
        // }
        // return NULL;

    }
};