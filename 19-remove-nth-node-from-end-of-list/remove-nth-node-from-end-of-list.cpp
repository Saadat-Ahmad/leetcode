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
        int i = 0, it = 0;
        ListNode* ret = head;
        while(head != nullptr){
            i++;
            head = head->next;
        }
        if (i == n) return ret->next;
        head = ret;
        while(it < i-n-1){
            head = head->next;
            it++;
        }
        head->next = head->next->next;
        return ret;
    }
};