class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = n + m - 1;
        int left = m - 1, right = n - 1;
        while (right >= 0) {
            if (left >= 0 && nums1[left] > nums2[right]) {
                nums1[len] = nums1[left];
                --left, --len;
            } else {
                nums1[len] = nums2[right];
                --len, --right;
            }
        }
    }
};