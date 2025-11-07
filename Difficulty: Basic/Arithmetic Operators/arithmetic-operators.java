class Solution {
    public int[] computeOperations(int x, int y) {
        int[] ans = new int[5];
        ans[0] = x + y;
        ans[1] = x - y;
        ans[2] = x * y;
        ans[3] = x / y;
        ans[4] = x % y;
        return ans;
    }
}
