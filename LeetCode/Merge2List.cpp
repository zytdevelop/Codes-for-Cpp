/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr||l2 == nullptr)
    {
        return l1 == nullptr ? l2 : l1;
    }

    ListNode* newNode = new ListNode(0);
    ListNode* pNode = newNode;
    while(l1&&l2)
    {
        if(l1->val > l2->val)
        {
            pNode->next = l2;
            l2 = l2->next;
        }
        else
        {
            pNode->next = l1;
            l1 = l1->next;
        }
        pNode = pNode->next;
    }
    while(l1)
    {
        pNode->next = l1;
        l1 = l1->next;
        pNode = pNode->next;
    }
    while(l2)
    {
        pNode->next =l2;
        l2 = l2->next;
        pNode = pNode->next;
    }

    return newNode->next;
}