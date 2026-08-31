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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* tempNext = head->next->next;
        ListNode* prev = head;
        vector<int> cp;
        int index = 2;
        while (temp && tempNext && prev) {
            if (temp->val > tempNext->val && temp->val > prev->val)
                cp.push_back(index);
            else if (temp->val < tempNext->val && temp->val < prev->val)
                cp.push_back(index);
            index++;
            prev = temp;
            temp = temp->next;
            tempNext = tempNext->next;
        }
        if (cp.size() < 2)
            return {-1, -1};
        sort(cp.begin(), cp.end());
        int x = cp.size();
        int maxDistance = cp[x - 1] - cp[0];
        int min = INT_MAX;
        for (int i = 0; i < x - 1; i++) {
            if (cp[i + 1] - cp[i] < min) {
                min = cp[i + 1] - cp[i];
            }
        }
        return {min, maxDistance};
    }
};
