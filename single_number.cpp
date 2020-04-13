class Solution {
public:
  int singleNumber(vector<int> &nums) {
    return std::accumulate(begin(nums), end(nums), 0,
                           [](const auto x, const auto y) { return x ^ y; });
  }
};