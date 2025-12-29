class Solution {
public:
    long long merge(vector<int> &arr, int l, int m, int r) {
        int n1 = m - l + 1, n2 = r - m;
        vector<int> left(n1), right(n2);
        for(int i = 0; i < n1; i++) left[i] = arr[l + i];
        for(int j = 0; j < n2; j++) right[j] = arr[m + 1 + j];
        int i = 0, j = 0, k = l;
        long long cnt = 0;
        while(i < n1 && j < n2) {
            if(left[i] <= right[j]) arr[k++] = left[i++];
            else {
                arr[k++] = right[j++];
                cnt += (n1 - i);
            }
        }
        while(i < n1) arr[k++] = left[i++];
        while(j < n2) arr[k++] = right[j++];
        return cnt;
    }

    long long mergesort(vector<int> &arr, int l, int r) {
        if(l >= r) return 0;
        int m = (l + r) / 2;
        long long cnt = 0;
        cnt += mergesort(arr, l, m);
        cnt += mergesort(arr, m + 1, r);
        cnt += merge(arr, l, m, r);
        return cnt;
    }

    long long inversionCount(vector<int> &arr) {
        return mergesort(arr, 0, arr.size() - 1);
    }
};
