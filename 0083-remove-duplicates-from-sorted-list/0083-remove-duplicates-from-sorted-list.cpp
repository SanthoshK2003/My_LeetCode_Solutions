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
        if (head == NULL || head->next == NULL) { // Check if the list is empty or has only one node
            return head;
        }
        ListNode* curr=head;
        ListNode* temp=curr->next;
        while(temp!=NULL)
        {
            if(curr->val == temp->val)
            {
                temp=temp->next;
                continue;
            }
            curr->next=temp;
            curr=temp;
            temp=temp->next;    
        }
        curr->next=NULL;
        return head;
    }
};