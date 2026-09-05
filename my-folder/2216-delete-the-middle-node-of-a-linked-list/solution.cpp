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
    ListNode* deleteMiddle(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            size++;
        }
        if(size == 1){
            head = nullptr;
            return head;
        }
        int mid = size/2;
        int i = 0;
        ListNode* temp2 = head;
        while(i!=mid-1){
            temp2 = temp2->next;
            i++;
        }
        if(mid==size-1) temp2->next = nullptr;
        else temp2->next = temp2->next->next;
        return head;
    }
};
