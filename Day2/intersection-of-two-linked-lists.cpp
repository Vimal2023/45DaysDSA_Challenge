#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        while(lenA > lenB){
            lenA--;
            headA = headA->next;
        }
        while(lenB > lenA){
            lenB--;
            headB = headB->next;
        }

        while(headA != nullptr && headB != nullptr && headA != headB){
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }

private:
    int getLength(ListNode* head){
        int len = 0;
        while(head != nullptr){
            len++;
            head = head->next;
        }
        return len;
    }
};

int main() {

    ListNode* common = new ListNode(3);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);

    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = common;

    ListNode* headB = new ListNode(6);
    headB->next = common;

    Solution sol;
    ListNode* intersection = sol.getIntersectionNode(headA, headB);

    if (intersection != nullptr) {
        cout << "The intersection node value is: " << intersection->val << endl;
    } else {
        cout << "The lists do not intersect." << endl;
    }
    delete headA->next;
    delete headA;
    delete headB;
    delete common->next->next;
    delete common->next;
    delete common;

    return 0;
}
