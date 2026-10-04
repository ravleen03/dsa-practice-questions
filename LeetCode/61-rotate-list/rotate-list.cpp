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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode* temp=head;
        int cnt=0,x=1;
        if(head==nullptr || head->next==nullptr)
        return head; 
        while(temp->next!=nullptr)
        {
            cnt++;
            temp=temp->next;
        }
        cnt++;
        k=k%cnt;
        if(k==0)
        return head;
        temp->next=head;
        temp=head;
        int pos=cnt-k;
        while(x!=pos)
        {
            x++;
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;


        
    }
};