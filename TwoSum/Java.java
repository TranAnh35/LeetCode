package TwoSum;

import java.util.HashMap;
import java.util.Map;

public class Java {
    class Solution {
        public int[] twoSum(int[] nums, int target) {
            Map<Integer, Integer> map = new HashMap<>();
            int n = nums.length;

            for(int i = 0; i < n; i++) {
                int complement = target - nums[i];
                if(map.containsKey(complement)) {
                    return new int[] {map.get(complement), i};
                }
                map.put(nums[i], i);
            }
            return new int[] {};
        }
    }
    public static void main(String[] args) {
        Solution s = new Java().new Solution();
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        int[] result = s.twoSum(nums, target);
        for(int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }
    }
}
