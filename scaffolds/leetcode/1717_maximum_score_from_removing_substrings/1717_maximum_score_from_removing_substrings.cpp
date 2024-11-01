// https://leetcode.com/problems/maximum-score-from-removing-substrings/solutions/5463686/easy-and-clean-code-c-sc-o-1/
class Solution {
    void getCount(string str, string sub, int& cnt1, int& cnt2) {
    
        char first = sub[0], second = sub[1];
        int i = 1;
        while(i < str.length()) {
            if(i > 0 && str[i-1] == first && str[i] == second) {
                cnt1++;
                str.erase(i-1, 2);
                i--;
                continue;
            }
            i++;
        }

        i = 1;
        while(i < str.length()) {
            if(i > 0 && str[i-1] == second && str[i] == first) {
                cnt2++;
                str.erase(i-1, 2);
                i--;
                continue;
            }
            i++;
        }
        return;
    }
public:
    int maximumGain(string s, int x, int y) {
        
        int mxABcnt = 0;
        int mxBAcnt = 0;
        int minBAcnt = 0;
        int minABcnt= 0;

        getCount(s, "ab", mxABcnt, minBAcnt);
        getCount(s, "ba", mxBAcnt, minABcnt);

        int operation1 = mxABcnt * x + minBAcnt * y;
        int operation2 = mxBAcnt * y + minABcnt * x;
        return max(operation1, operation2);
    }
};

// https://leetcode.com/problems/maximum-score-from-removing-substrings/solutions/5463282/beats-100-explained-with-video-c-java-python-js-greedy-o-n-easy-to-understand/
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int aCount = 0;
        int bCount = 0;
        int lesser = min(x, y);
        int result = 0;

        for (char c : s) {
            if (c > 'b') {
                result += min(aCount, bCount) * lesser;
                aCount = 0;
                bCount = 0;
            } else if (c == 'a') {
                if (x < y && bCount > 0) {
                    bCount--;
                    result += y;
                } else {
                    aCount++;
                }
            } else {
                if (x > y && aCount > 0) {
                    aCount--;
                    result += x;
                } else {
                    bCount++;
                }
            }
        }

        result += min(aCount, bCount) * lesser;
        return result;
    }
};


// https://leetcode.com/problems/maximum-score-from-removing-substrings/solutions/5463249/easiest-3-step-cpp-java-py-js-solution-normal-approach-with-explanation/
//Approach 1
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if (x < y) {
            swap(x, y);
            for (char& c : s) {
                if (c == 'a') c = 'b';
                else if (c == 'b') c = 'a';
            }
        }
        
        int points = 0;
        stack<char> st;
        
        for (char c : s) {
            if (!st.empty() && st.top() == 'a' && c == 'b') {
                st.pop();
                points += x;
            } else {
                st.push(c);
            }
        }
        
        string remaining;
        while (!st.empty()) {
            remaining += st.top();
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());
        
        for (char c : remaining) {
            if (!st.empty() && st.top() == 'b' && c == 'a') {
                st.pop();
                points += y;
            } else {
                st.push(c);
            }
        }
        
        return points;
    }
};

//Aproach 2
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int points = 0;

        // Helper function to remove the specific substring and calculate points
        auto removeSubstring = [&](char first, char second, int pointsValue) {
            stack<char> st;
            int localPoints = 0;
            for (char c : s) {
                if (!st.empty() && st.top() == first && c == second) {
                    st.pop();
                    localPoints += pointsValue;
                } else {
                    st.push(c);
                }
            }
            // Reconstruct the string from the stack
            s = "";
            while (!st.empty()) {
                s += st.top();
                st.pop();
            }
            reverse(s.begin(), s.end());
            return localPoints;
        };

        if (x > y) {
            points += removeSubstring('a', 'b', x);
            points += removeSubstring('b', 'a', y);
        } else {
            points += removeSubstring('b', 'a', y);
            points += removeSubstring('a', 'b', x);
        }

        return points;
    }
};
