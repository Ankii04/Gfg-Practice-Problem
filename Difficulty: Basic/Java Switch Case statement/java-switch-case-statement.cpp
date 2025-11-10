class Solution {
public:
    double switchCase(int choice, vector<double>& arr) {
        if(choice == 1)
            return M_PI * arr[0] * arr[0];
        else
            return arr[0] * arr[1];
    }
};
