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
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        vector<int>result;
        while(temp!=nullptr){
            result.push_back(temp->val);
            temp=temp->next;
        }
        int low=0;
        int high=result.size()-1;
        while(low<=high){
            if(result[low]!=result[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};