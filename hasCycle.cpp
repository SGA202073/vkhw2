struct ListNode
{
    int value;
    ListNode* next;
    ListNode(int value, ListNode* next = NULL) :
        value(value),
        next(next)
    { }
};
bool HasCycle(ListNode* head)
{
    if (head == NULL || head->next == NULL)
        return false;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (slow != fast)
    {
        if (fast == NULL || fast->next == NULL)
            return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}
// я не особо понял нужно ли писать тот код, так как его нет в файле с дз, но на всякий случай вот он)