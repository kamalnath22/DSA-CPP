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
        if(head != nullptr && head->next == nullptr && n == 1) {
            delete head;
            return nullptr;
        }

        if (head == nullptr) return head;
        ListNode*temp=head;
        ListNode*prev=nullptr;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int sn=(cnt-n)+1;
        int cnt2=0;
        if (sn == 1) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        while(temp!=nullptr){
            cnt2++;
            if(cnt2==sn){
                prev->next=temp->next;
                delete temp;
                break;
            }
                prev=temp;
                temp=temp->next;
               
            
            
        }
        return head;
        
    }
};