class Solution {
public:
  int countElements(vector<int> &arr) {
    constexpr int SIZE = 1000;
    bool C[SIZE + 10] = {false};
    sort(begin(arr), end(arr), std::greater<int>());
    int ans = 0;
    for (const auto x : arr) {
      if (C[x + 1])
        ans++;
      C[x] = true;
    }
    return ans;
  }
};