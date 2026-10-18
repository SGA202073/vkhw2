bool IsPalindrome(const char* s, int len)
{
    if (len < 2)
        return true;
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}
/* указатели начинают двигаться с разных краев массива, на каждом шаге мы двигаем оба указателя  на 1.
в худшем случае мы дойдем до их встречи, то есть сделаем не более н/2 шагов (н -- длина строки), внутри каждой
итерации фиксированное число операций, то есть О(1). таким образом О(н).*/