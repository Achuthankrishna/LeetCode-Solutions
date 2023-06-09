int l=0;
int h=nums.size()-1;
while(l<=h)
{
    int mid=(l+h)/2;
    if(nums[mid]==target)
    {
        return mid;
    }
    if (nums[l]<=nums[mid])
    {
        if(target>nums[mid] || target<nums[l])
            l=mid+1;
        else
            h=mid-1;
    }
    else
    {
        if(target<nums[mid] || nums[h]<target)
            h=mid-1;
        else
            l=mid+1;
    }
}
return -1;