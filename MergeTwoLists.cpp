struct ListNode
{
    int value;
    ListNode* next;
    ListNode(int value, ListNode* next = NULL) :
        value(value),
        next(next)
    { }
};
ListNode* MergeTwoLists(ListNode* list1, ListNode* list2)
{
    ListNode dummy(0);
    ListNode* tail = &dummy;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->value <= list2->value)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1 != NULL)
        tail->next = list1;
    else
        tail->next = list2;
    return dummy.next;
}
/* на каждом шаге мы сравниваем узлы и сдвигаем уазатель тогоо списка, какой меньше
указательlist1 сдвигается н раз, а 2 -- м, внутри каждой итерации О(1),таким образом,
сложность О(н+м). доп памяти не требует так как мы не создаем новые узлы чеерез new, а
лишь перенаправляем некст у уже существующих узлов  */