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
    ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* temp=head;
            int count=0;
            while(temp!=nullptr)
            {
                count++;
                temp=temp->next;
            }

            ListNode* prev = nullptr;
            ListNode* curr = head;
            ListNode* front = head;
            ListNode* newhead=nullptr;
            ListNode* gt=nullptr;
            int total=count/k;
        while(total>0)
        {
            ListNode* gs=curr;
            prev=nullptr;

        for(int i = 0 ; i < k ; i++)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;  
        }
        if(newhead==nullptr)
        newhead=prev;

        if(gt!=nullptr)
        gt->next=prev;

        gt=gs;
        total--;
        }
        gt->next=curr;
        return newhead;
    }
};