class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (int i = 0; i < operations.size(); i++) {

            int a, b, record;

            if (operations[i] == "D") {
                record = st.top() * 2;
                st.push(record);
            }
            else if (operations[i] == "+") {
                a = st.top(); st.pop();
                b = st.top();
                st.push(a);
                st.push(a + b);
            }
            else if (operations[i] == "C") {
                st.pop();
            }
            else {
                st.push(stoi(operations[i]));
            }
        }

        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
