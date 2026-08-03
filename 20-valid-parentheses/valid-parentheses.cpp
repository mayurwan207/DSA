class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
       
        unordered_map<char, char> matchMap = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (matchMap.count(c)) {
               
                if (stk.empty() || stk.top() != matchMap[c]) {
                    return false;
                }
                stk.pop();
            } else {
                
                stk.push(c);
            }
        }
       
        return stk.empty();
    }
};