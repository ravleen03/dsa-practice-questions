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
    bool isPalindrome(ListNode* head) 
    {
        int cnt=0;
        ListNode* temp=head;
        ListNode* i=head;
        ListNode* j;
        while (temp!=nullptr)
        {
            cnt++;
            temp=temp->next;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;
        ListNode* curr;
        ListNode* nxt;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        curr=slow;
        if(cnt%2!=0)
        {
        curr=curr->next;
        }
        
        while(curr!=nullptr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        j=prev;
         while(j!=nullptr)
         {
            if(i->val!=j->val)
            return false;
            i=i->next;
            j=j->next;
         }
         return true;
        
    }
};