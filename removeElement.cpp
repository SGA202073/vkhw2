struct ListNode
{
    int value;
    ListNode* next;
    ListNode(int value, ListNode* next = NULL) :
        value(value),
        next(next)
    { }
};

ListNode* RemoveElements(ListNode* head, int val)
{
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    ListNode* cur = head;
    while (cur != NULL)
    {
        if (cur->value == val)
        {
            ListNode* tmp = cur;
            prev->next = cur->next;
            cur = cur->next;
            delete tmp;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return dummy.next;
}
/* благодаря dummy, голова обрабатывается, как внутренние элементы. если совпадение было найдено,
то prev перенаправляет через удаляетмый узел.*/