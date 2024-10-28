#include <bits/stdc++.h>
#include <unordered_map>

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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        unordered_map<int, ListNode*> m;
        int sum = 0;
        m[0] = dummy;
        while(head){
            sum += head->val;
            m[sum] = head;
            head = head->next;
        }
        sum = 0;
        head = dummy;
        while(head){
            sum += head->val;
            head->next = m[sum]->next;
            head = head->next;
        }
        return dummy->next;
    }
};

int main(){
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(-3, new ListNode(4)))));
    Solution sol;
    ListNode* res = sol.removeZeroSumSublists(head);
    while(res){
        cout << res->val << " ";
        res = res->next;
    }
    return 0;
}