public class Solution {
    public int GetMinDistance(int[] nums, int target, int start) {
        int n = nums.Length;
        int res = n;
        for( int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                res = Math.Min(res, Math.Abs(i-start));
            }
        }
        return res;
    }
}