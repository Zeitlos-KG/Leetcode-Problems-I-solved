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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp){
            temp = temp->next;
            size++;
        }
        if(size==1) {
            head = nullptr;
            return head;
        };
        cout << size;
        int index = size - n;
        if(index==0) {
            ListNode* temp3 = head;
            temp3 = temp3->next;
            head = temp3;
            return head;
        }
        cout << " " << index;
        int i = 1;
        ListNode* temp2 = head;
        while(i!=index){
            temp2 = temp2->next;
            i++;
        }
        if(index==0) temp2->next = nullptr;
        else temp2->next = temp2->next->next;
        return head;
    }
};
