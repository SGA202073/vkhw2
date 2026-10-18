int RemoveDuplicates(int* arr, int len)
{
    if (len == 0)
        return 0;
    int slow = 0;
    for (int fast = 1; fast < len; fast++)
        if (arr[fast] != arr[slow])
        {
            slow++;
            arr[slow] = arr[fast];
        }
    return slow + 1; 
}
/* slow указывает на позицию, куда стоит записать уникальный элемент, а fast ищет новые значения.
массив отсортирован, поэтому все одинаковые стоят раядо. все изменения проходят внутри старого массива,
 доп память не выделяется, сложность -- один проход -- то есть О(н)*/