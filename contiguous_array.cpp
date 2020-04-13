class Solution {
public:
  int findMaxLength(vector<int> &nums) {
    vector<int> M(n, -1);
    // unordered_map<int,int> M;
    int cont = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i])
        cont++;
      else
        cont--;
      M[cont] = i;
    }

    cont = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
      auto it = M.find(cont);
      if (it != M.end() && (*it).second > i) {
        const int dist = (*it).second - i + 1;
        ans = std::max(ans, dist);
      }
      if (nums[i])
        cont++;
      else
        cont--;
    }
    return ans;
  }
};