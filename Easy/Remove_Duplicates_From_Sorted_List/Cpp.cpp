#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *trav = head, *skip;
        while (trav != nullptr) {
            skip = trav->next;
            while (skip != nullptr && trav->val == skip->val) {
                skip = skip->next;
            }
            trav->next = skip;
            trav = skip;
        }
        return head;
    }

    void printList(ListNode* head) {
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    Solution solution;
    head = solution.deleteDuplicates(head);
    solution.printList(head);
    return 0;
}