int maxProduct(int* nums, int numsSize)
{
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];
    for(int i = 1; i < numsSize; i++)
    {
        int x = nums[i];
        int a = maxProd * x;
        int b = minProd * x;
        if(x > a && x > b)
            maxProd = x;
        else if(a > b)
            maxProd = a;
        else
            maxProd = b;
        if(x < a && x < b)
            minProd = x;
        else if(a < b)
            minProd = a;
        else
            minProd = b;
        if(maxProd > result)
            result = maxProd;
    }

    return result;
}