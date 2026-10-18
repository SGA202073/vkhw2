bool TwoSum(const int* arr, size_t len, int target)
{
    if (len < 2) 
        return false;
    int left = 0;          
    int right = len - 1;   
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return true;      
        }
        else if (sum < target)
        {
            left++;           
        }
        else
        {
            right--;          
        }
    }
    return false; 
}
/*  указатели начинают двигаться с разных краев массива, на каждом шаге мы двигаемся ровно 1 указатель  на 1.
в худшем случае мы дойдем до их встречи, то есть сделаем не более н шагов (длина массива), внутри каждой
итерации фиксированное число операций, то есть О(1). таким образом О(н).*/