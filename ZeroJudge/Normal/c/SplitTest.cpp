#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

const vector<string> split(const string& str, const string& pattern) {
    vector<string> result;
    string::size_type begin, end;

    end = str.find(pattern);
    begin = 0;

    while (end != string::npos) {
        if (end - begin != 0) {
            result.push_back(str.substr(begin, end-begin));
        }
        begin = end + pattern.size();
        end = str.find(pattern, begin);
    }

    if (begin != str.length()) {
        result.push_back(str.substr(begin));
    }
    return result;
}

int main(void) {
    string str = "";

    cin >> str;
    string pattern = " ";

    vector<string> ret = split(str, pattern);

    for (auto& s : ret) {
        cout << s << "\n";
    }

    return 0;
}