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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* farzi=new ListNode(0);
        ListNode* tail=farzi;
        int carry=0;
        while(l1 || l2 || carry){
            int n1=(l1) ? l1->val:0;
            int n2=(l2) ? l2->val:0;
            int sum=n1+n2+carry;
            int d=sum%10;
            carry=sum/10;

            ListNode* nn=new ListNode(d);
            tail->next=nn;
            tail=tail->next;
            l1=(l1) ? l1->next : NULL;
            l2=(l2) ? l2->next : NULL;
        }
        return farzi->next;
    }
};