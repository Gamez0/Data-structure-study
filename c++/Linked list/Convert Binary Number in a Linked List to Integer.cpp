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
#include <stack>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        // use stack
        // stack<int> s;
        // while(head!=NULL){
        //     s.push(head->val);
        //     head = head->next;
        // }
        // int ans=0;
        // int d=1;
        // while(!s.empty()){
        //     ans+=s.top()*d;
        //     s.pop();
        //     d*=2;
        // }
        // return ans;
        
        // use bit manipulation
        int num = head->val;
        head = head->next;
        while(head){
            num=num<<1 | head->val;
            head = head->next;
        }
        return num;
    }
};
