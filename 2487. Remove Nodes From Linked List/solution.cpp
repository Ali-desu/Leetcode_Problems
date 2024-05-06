
#include <iostream>
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
    ListNode* removeNodes(ListNode* head) {
        ios_base::sync_with_stdio(0);
        if(head == nullptr || head->next == nullptr) return head;

        ListNode *current = head;
        ListNode *answer;

        //reverse list
        ListNode *prev = nullptr;
        while(current != nullptr){
            ListNode *next = current->next;
            current->next = prev;
            prev = current;
            current = next;  
        }

        head = prev;

        current = head;
        int max = -INT_MAX;
        prev = nullptr;

        while(current != nullptr){
            if(current->val < max){
                prev->next = current->next;
            }
            else{
                max = current->val;
                prev = current;
            }
            current = current->next;
        }

    

        //reverse list again
        prev = nullptr;
        current = head;
        while(current != nullptr){
            ListNode *next = current->next;
            current->next = prev;
            prev = current;
            current = next;  
        }

        
        head = prev;

        return head;
    }
};