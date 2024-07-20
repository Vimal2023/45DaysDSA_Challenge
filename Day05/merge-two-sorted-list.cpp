#include <iostream>
#include <climits>
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* returnNode = new ListNode(INT_MIN);
        ListNode* headNode = returnNode;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                returnNode->next = list1;
                list1 = list1->next;
            } else {
                returnNode->next = list2;
                list2 = list2->next;
            }
            returnNode = returnNode->next;
        }

        if (list1 == nullptr) {
            returnNode->next = list2;
        } else if (list2 == nullptr) {
            returnNode->next = list1;
        }
        ListNode* mergedHead = headNode->next;
        delete headNode;
        return mergedHead;
    }
};

void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
