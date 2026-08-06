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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int i = 1;
        ListNode* buffer1 = new ListNode();
        ListNode* buffer2;
        ListNode* buffer3;
        ListNode* buffer4;
        ListNode* ret = head;
        while(head != nullptr){
            if (i < left || i > right) {
                buffer1 = head;
                head = head->next;
                i++;
            }
            else if (i == left) {
                buffer2 = head;
                buffer3 = head;
                head = head->next;
                i++;
            }
            else if (i > left && i < right){
                buffer4 = head->next;
                head->next = buffer3;
                buffer3 = head;
                head = buffer4;
                i++;
            }
            else if (i == right){
                buffer4 = head->next;
                head->next = buffer3;
                buffer3 = head;
                head = buffer4;
                i++;
                buffer1->next = buffer3;
                buffer2->next = head;
                if (left == 1) ret = buffer3;
            }
        }
        return ret;
    }
};