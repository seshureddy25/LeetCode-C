/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int size=nums1Size<nums2Size?nums1Size:nums2Size;
    int *arr=malloc(size*sizeof(int));
    int freq[10001]={0};
    for(int i=0;i<nums1Size;i++)
        freq[nums1[i]]++;
    int j=0;
    for(int i=0;i<nums2Size;i++)
    {
        if(freq[nums2[i]]!=0)
        {
            arr[j++]=nums2[i];
            freq[nums2[i]]=0;
        }
    }
    *returnSize=j;
    return arr;
}