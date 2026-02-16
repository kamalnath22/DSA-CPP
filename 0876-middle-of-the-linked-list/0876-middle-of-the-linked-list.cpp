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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        int n=cnt;
        int sn;
        if(cnt%2==0){
            sn=(n/2)+1;}
         else{
            sn=(n+1)/2;
        }  
        temp=head;
        int cnt1=0;
        while(temp!=nullptr) {
             cnt1++;
             if(cnt1==sn){
             head=temp;

             }
             else{
                temp=temp->next;
             }
        }
            
            
        return head;
        
    }
};