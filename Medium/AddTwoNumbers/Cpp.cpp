#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* current = result;
        int carry = 0;

        while(l1 || l2){
            int sum = carry;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        if(carry){
            current->next = new ListNode(carry);
        }
        return result->next;
    }
};

int main() {
    ListNode* l1 = new ListNode(9, new ListNode(9, new ListNode(9)));
    ListNode* l2 = new ListNode(9, new ListNode(9, new ListNode(9)));
    Solution s;
    ListNode* result = s.addTwoNumbers(l1, l2);
    while(result){
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    return 0;
}