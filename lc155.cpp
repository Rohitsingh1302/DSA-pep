#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<long> st;
    long minVal;
public:
    void push(int val) {
        if(st.empty()) st.push(0), minVal = val;
        else st.push((long)val - minVal), minVal = min(minVal, (long)val);
    }
    void pop() {
        long diff = st.top(); st.pop();
        if(diff < 0) minVal -= diff;
    }
    int top() {
        long diff = st.top();
        return diff > 0 ? minVal + diff : minVal;
    }
    int getMin() { return minVal; }
};

int main() {
    MinStack st;
    st.push(-2);
    st.push(0);
    st.push(-3);
    cout << st.getMin() << endl; // -3
    st.pop();
    cout << st.top() << endl;    // 0
    cout << st.getMin() << endl; // -2
}
