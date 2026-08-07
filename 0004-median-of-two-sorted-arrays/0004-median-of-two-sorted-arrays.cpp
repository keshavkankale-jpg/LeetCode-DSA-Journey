class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> merge(m + n); 
        
        int i = 0, j = 0, k = 0;
        while (j < m && k < n) {
            if (nums1[j] <= nums2[k]) {
                merge[i] = nums1[j];
                j++;
            } else {
                merge[i] = nums2[k];
                k++;
            }
            i++;
        }
        while (j < m) {
            merge[i] = nums1[j];
            j++;
            i++;
        }
        while (k < n) {
            merge[i] = nums2[k];
            k++;
            i++;
        }
        int left = 0;
        int right = (m + n) - 1;
        int mid = left + (right - left) / 2;
        
        if ((m + n) % 2 == 0) {
            double a = merge[mid];
            double b = merge[mid + 1];
            double ans = (a + b) / 2.0; 
            return ans;
        } else {
            return merge[mid];
        }
    }
};