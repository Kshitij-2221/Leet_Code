class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Dummy node to simplify list creation
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry;

            // Add value from first list
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add value from second list
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Calculate new digit and carry
            carry = sum / 10;
            int digit = sum % 10;

            // Create new node
            tail->next = new ListNode(digit);

            // Move tail
            tail = tail->next;
        }

        // Return head of new list
        return dummy->next;
    }
};