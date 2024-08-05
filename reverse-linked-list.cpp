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
    ListNode* reverseList(ListNode* head) {
        // ListNode* curr = 
        if (head == nullptr) {
            return nullptr;
        }
        std::stack <int> stack;
        //ListNode* answNode = new ListNode();
        while (head != nullptr) {
            stack.push(head->val);
            head = head->next;
        }
        
        ListNode* currNode = new ListNode();
        ListNode* answNode = currNode;
        while (!stack.empty()) {
            //currNode->val = stack.top();
            ListNode* nextNode = new ListNode();
            currNode->val = stack.top();
            if (stack.size() >= 2)
                currNode->next = nextNode;
            currNode = nextNode; 
            stack.pop();
        }

		//ListNode* Nextnode = Currnode->next;
        // if (head == nullptr) {
        //     return nullptr;
        // }
        // else {
        //     return answNode;
        // }
        return answNode;
    }
};
