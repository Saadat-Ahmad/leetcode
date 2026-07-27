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
    ListNode* swapPairs(ListNode* head) {
        ListNode* buf = head;
        ListNode* ret;
        ListNode* tmp;
        ListNode* prev = nullptr;
        if(head && head->next) {
            ret = head->next;
        } else ret = head;
        while(head && head->next){
            buf = head;
            head = head->next;
            if(prev) prev->next = head;
            tmp = head->next;
            head->next = buf;
            head->next->next = tmp;
            prev = head->next;
            head = tmp;
        }
        return ret;
    }
};