void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }
    for (j = 0; j < m + n; j++) {
        for (k = 0; k < n + m-1; k++) {
            if (nums1[k] >= nums1[j]) {
                int temp = nums1[k];
                nums1[k] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
}