struct ListNode
{
    int value;
    ListNode* next;
    ListNode(int value, ListNode* next = NULL) :
        value(value),
        next(next)
    { }
};

ListNode* RemoveNthFromEnd(ListNode* head, int n)
{
    ListNode dummy(0);
    dummy.next = head;
    ListNode* slow = &dummy;
    ListNode* fast = &dummy;
    for (int i = 0; i <= n; i++)
        fast = fast->next;
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    ListNode* tmp = slow->next;
    slow->next = slow->next->next;
    delete tmp;  
    return dummy.next;
}
// этого задания тоже нет в дз... но я все же его сделал...