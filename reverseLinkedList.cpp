struct ListNode
{
    int value;
    ListNode* next;
    ListNode(int value, ListNode* next = NULL) :
        value(value),
        next(next)
    { }
};

ListNode* ReverseLinkedList(ListNode* head)
{
    ListNode* prev = NULL;
    ListNode* current = head;
    while (current != NULL)
    {
        ListNode* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head = prev;
    return head;
}
/*запоминаем следующий узел, делаем, чтобы текущий указатель указывал на предыдущий,
 сдвигаем предыдущий на текущий и переходим к следующему узлу.
О(н), т к current прходит по списку от начала до конца,то есть число выполнений -- количество
узлов,и в цикле мы выполняем 4 действия, таким образом сложность это О(1) число раз, равное кол-ву
узлов в списке (пусть их н) получаем О(н). все доказано
*/