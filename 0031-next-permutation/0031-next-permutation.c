void nextPermutation(int* nums, int numsSize) {
    int j=numsSize-2;
    //Find the first decreasing element
    while(j>=0 && nums[j]>=nums[j+1]){
        j--;
    }
    if(j>=0){
        int k=numsSize-1;
        //Find the element just larger than nums[j]
        while(nums[k]<=nums[j]){
            k--;
        }
        //Swap nums[j] and nums[k]
        int temp = nums[j];
        nums[j] = nums[k];
        nums[k] = temp;
    }
        //Reverse the elements from j+1 to the end of the array
        int l=j+1;
        int r=numsSize-1;
        while(l<r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }
}