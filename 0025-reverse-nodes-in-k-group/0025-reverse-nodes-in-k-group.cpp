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
        ListNode* current = head;
        ListNode* previousGroupEnd = nullptr;

        while (true) {

            // Step 1: Find the kth node
            ListNode* kth = current;

            for (int i = 0; i < k; i++) {
                if (kth == nullptr) {
                    return head;
                }

                kth = kth->next;
            }

            // kth is now the first node of the next group
            ListNode* nextGroup = kth;

            // Step 2: Reverse the current group
            ListNode* prev = nextGroup;
            ListNode* curr = current;

            while (curr != nextGroup) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            // Step 3: Connect previous group to this reversed group
            if (previousGroupEnd != nullptr) {
                previousGroupEnd->next = prev;
            }
            else {
                // First group gives us the new head
                head = prev;
            }

            // Step 4: The old beginning becomes the end
            previousGroupEnd = current;

            // Move to next group
            current = nextGroup;
        }
    }
};