class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> v(2);
        vector<int> freq(n+1, 0);

        for(int i=0;i<n;i++){
            freq[arr[i]]++;
            if(freq[arr[i]] == 2){
                v[0] = arr[i];
            }
        }

        for(int i=1;i<=n;i++){
            if(freq[i] == 0){
                v[1] = i;
                break;
            }
        }

        return v;
    }
};
