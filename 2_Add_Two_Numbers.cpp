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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode *new_node=new ListNode(0);
        struct ListNode *curr=new_node;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            int result=l1->val+l2->val+carry;
            carry=result/10;
            struct ListNode *temp=new ListNode(result%10);
            curr->next=temp;
            curr=curr->next;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1!=NULL)
        {
            int result=l1->val+carry;
            carry=result/10;
            struct ListNode *temp=new ListNode(result%10);
            curr->next=temp;
            curr=curr->next;
            l1=l1->next;
        }
        
        while(l2!=NULL)
        {
            int result=l2->val+carry;
            carry=result/10;
            struct ListNode *temp=new ListNode(result%10);
            curr->next=temp;
            curr=curr->next;
            l2=l2->next;          
        }
        
        if (carry)
        {
            struct ListNode *temp=new ListNode(carry);
            curr->next=temp;
        }
        return new_node->next;
        
    }
    
};