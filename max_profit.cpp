class Solution {
public:
  int maxProfit(std::vector<int> &P) {
    int ans = 0;
    for (int i = 0; i < (int)P.size() - 1; i++) {
      if (P[i] < P[i + 1])
        ans += (P[i + 1] - P[i]);
    }
    return ans;
  }
};