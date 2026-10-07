int threeSumClosest(int* arr, int size, int target) 
{
    int i, j, k;
    int sum;
    int closest = arr[0] + arr[1] + arr[2];
    for(i = 0; i < size - 2; i++)
    {
        for(j = i + 1; j < size - 1; j++)
        {
            for(k = j + 1; k < size; k++)
            {
                sum = arr[i] + arr[j] + arr[k];

                if(abs(target - sum) < abs(target - closest))
                {
                    closest = sum;
                }
                if(sum == target)
                {
                    return sum;
                }
            }
        }
    }

    return closest;
}
