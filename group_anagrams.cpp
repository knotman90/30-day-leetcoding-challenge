class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    std::unordered_map<string, vector<int>> M;

    for (int i = 0; i < strs.size(); i++) {
      string s(strs[i]);
      sort(begin(s), end(s));
      M[s].push_back(i);
    }
    vector<vector<string>> ans(M.size());
    int x = 0;
    for (const auto p : M) {
      for (auto i : p.second) {
        ans[x].push_back(strs[i]);
      }
      x++;
    }
    return ans;
  }
};