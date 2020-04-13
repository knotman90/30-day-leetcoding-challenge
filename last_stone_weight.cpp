class Solution {
public:
  int lastStoneWeight(vector<int> &stones) {
    multiset<int, std::greater<int>> S;
    for (const auto s : stones) {
      S.insert(s);
    }

    while (S.size() > 1) {
      const auto it = S.begin();
      const auto itn = std::next(it);
      const auto s1 = *it;
      const auto s2 = *itn;
      S.erase(it);
      S.erase(itn);
      if (s1 != s2)
        S.insert(s1 - s2);
    }
    S.insert(0);
    return *S.begin();
  }
};