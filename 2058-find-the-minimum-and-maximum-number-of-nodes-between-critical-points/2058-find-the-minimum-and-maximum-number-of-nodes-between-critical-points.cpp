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
        int first = -1, last = -1;
        int mn = INT_MAX, mx = -1;
        int pos = 1;

        ListNode* prev = head;
        head = head->next;

        while (head->next) {
            if ((head->val > prev->val && head->val > head->next->val) ||
                (head->val < prev->val && head->val < head->next->val)) {

                if (first == -1) {
                    first = pos;
                } else {
                    mn = min(mn, pos - last);
                    mx = pos - first;
                }

                last = pos;
            }

            prev = head;
            head = head->next;
            ++pos;
        }

        return first == last ? vector<int>{-1, -1} : vector<int>{mn, mx};
    }
};