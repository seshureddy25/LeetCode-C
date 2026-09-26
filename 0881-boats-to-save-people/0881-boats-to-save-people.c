int compare(const void *a, const void *b)
{
    return (*(int *)a > *(int *)b) - (*(int *)a < *(int *)b);
}
int numRescueBoats(int* people, int peopleSize, int limit)
{
    qsort(people, peopleSize, sizeof(int), compare);
    int left = 0;
    int right = peopleSize - 1;
    int count = 0;
    while (left <= right)
    {
        if (people[left] + people[right] <= limit)
            left++;
        right--;
        count++;
    }
    return count;
}