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
    bool hasCycle(ListNode *head) {
        ListNode* slowptr = head;
        int slowptr_counter = 0;


        ListNode* fastptr = head;
        int fastptr_counter = 0;


        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        do {
            slowptr = slowptr->next;
            //slowptr_counter++;

            fastptr = fastptr->next;
            if (fastptr->next == nullptr)
                return false;
            fastptr = fastptr->next;
            if (fastptr->next == nullptr)
                return false;
            //fastptr_counter+=2;

        } while (slowptr != fastptr);

        return true;
        
    }
};
