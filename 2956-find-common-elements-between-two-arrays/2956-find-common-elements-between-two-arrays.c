/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int freq1[101]={0};
    int freq2[101]={0};
    for(int i=0;i<nums1Size;i++)
        freq1[nums1[i]]++;
    for(int i=0;i<nums2Size;i++)
        freq2[nums2[i]]++;
    int *arr=malloc(2*sizeof(int));
    arr[0]=0;
    arr[1]=0;
    for(int i=0;i<nums1Size;i++)
        if(freq2[nums1[i]])
            arr[0]++;
    for(int i=0;i<nums2Size;i++)
        if(freq1[nums2[i]])
            arr[1]++;
    *returnSize=2;
    return arr;
}