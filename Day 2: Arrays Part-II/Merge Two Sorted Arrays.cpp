vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	// Write your code here.
    int j=0;
        for(int i=m;i<m+n;i++)
        {
            nums1[i]=nums2[j];
            j++;
        }
        
        int gap;
        if(nums1.size()%2==0)
            gap=nums1.size()/2;
        else
            gap=(nums1.size()/2)+1;
        while(gap>=1)
        {
            // cout<<gap;
            int j=0,k=gap;
            while(k<nums1.size())
            {
                if(nums1[j]>nums1[k])
                    swap(nums1[j],nums1[k]);
                j++;k++;
            }
            if(gap==1)
                break;
            if(gap%2==0)
                gap/=2;
            else
                gap=(gap/2)+1;
        }
    return nums1;
}
