struct ListNode
{
    int value;
    ListNode* next;
    ListNode(int value, ListNode* next = NULL) :
        value(value),
        next(next)
    { }
};

ListNode* MiddleNode(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
/* slow сдвигается на 1, а fast на 2, поэтому, когда fast дойдет до конца,
slow будет на половине.
*/