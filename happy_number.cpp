class Solution {
public:
  int square_digits(int n) {
    int ans = 0;
    while (n) {
      const int d = n % 10;

      ans += d * d;
      n /= 10;
    }
    return ans;
  }

  bool isHappy(int n) {
    int n1 = n;
    do {
      n = square_digits(n);
      n1 = square_digits(square_digits(n1));
    } while (n != n1);

    return n == 1;
  }
};