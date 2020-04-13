class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    const int size = nums.size();
    for (int i = 0; i < size; i++) {
      if (nums[i] != 0) {
        int ii = i;
        for (int j = i - 1; j >= 0 && nums[j] == 0; j--, ii--) {
          swap(nums[j], nums[ii]);
        }
      }
    }
  }
};