/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int binarySearch(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return 1;  
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0; 
}

struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    qsort(nums, numsSize, sizeof(int), compare);

    struct ListNode* prev = NULL;
    struct ListNode* temp = head;

    
    while (temp) {
        if (binarySearch(nums, numsSize, temp->val)) {
            struct ListNode* nodeToDelete = temp;
            if (temp == head) {
                head = head->next;
                temp = head;  
            } else {
                prev->next = temp->next;
                temp = temp->next;  
            }
            free(nodeToDelete);  
        } else {
            prev = temp;
            temp = temp->next;
        }
    }

    return head;
}
