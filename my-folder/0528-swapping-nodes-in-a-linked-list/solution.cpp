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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev;
        int size = 0;
        while (temp) {
            prev = temp;
            temp = temp->next;
            size++;
        }
        if (size == 1)
            return head;
        if (k == 1) {
            int tempy = head->val;
            head->val = prev->val;
            prev->val = tempy;
            return head;
        }
        ListNode* temp2 = head;
        ListNode* temp3 = head;
        int last = (size - k) + 1;
        int i = 0;
        int tempy1;
        while (i != k - 1) {
            temp2 = temp2->next;
            i++;
        }
        tempy1 = temp2->val;
        int j = 0;
        while (j != last - 1) {
            temp3 = temp3->next;
            j++;
        }
        temp2->val = temp3->val;
        temp3->val = tempy1;
        return head;
    }
};
