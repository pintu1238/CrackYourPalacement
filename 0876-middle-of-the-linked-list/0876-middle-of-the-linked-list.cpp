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

/*class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;

        };
        count/=2;
        
        //this number of step I have to take from start
        
        temp=head;
        while(count--)
            temp=temp->next;
        
        return temp;
    }
};
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //slow 1 step aage badhega
        ListNode *slow=head;
        //fast node 2 step aage bdhega
        ListNode *fast=head;
        
        while(fast!=NULL && fast->next !=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};

