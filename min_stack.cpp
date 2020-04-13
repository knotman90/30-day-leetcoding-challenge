class MinStack {
public:
  using pii = std::pair<int, int>;
  std::stack<pii> q;

  MinStack() {}

  void push(int x) {
    const int nm = q.size() > 0 ? min(x, getMin()) : x;
    q.push({x, nm});
  }

  void pop() { q.pop(); }

  int top() { return q.top().first; }

  int getMin() { return q.top().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */