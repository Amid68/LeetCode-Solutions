/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int length = 0;
    struct ListNode * temp = head;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }
    temp = head;
    for (int i = 0; i < length/2; i++) {
        temp = temp->next;
    }
    return temp;
}
