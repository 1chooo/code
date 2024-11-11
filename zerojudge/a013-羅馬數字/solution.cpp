/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a013
*  Status:
*/

#include <iostream>
#include <string>

using namespace std;

int trans(char);

int main() {
    string rn[2], rn_ans;
    int dec[2], dec_ans, dec_dig[4];
    rn[1].clear();
    rn[0].clear();
    while (cin >> rn[0]) {
        if (rn[0][0] == '#') break;
        cin >> rn[1];
        if (rn[0].compare(rn[1]) == 0) {
            cout << "ZERO\n";
            continue;
        }

        dec[0] = 0;
        dec[1] = 0;
        rn_ans.clear();
        for (int n = 0, len = 0; n < 2; n++) {
            len = rn[n].length();
            for (int i = 0; i < len - 1; i++) {
                if (trans(rn[n][i]) >= trans(rn[n][i + 1]))
                    dec[n] += trans(rn[n][i]);
                else {
                    dec[n] += trans(rn[n][i + 1]) - trans(rn[n][i]);
                    i++;
                }
            }
            if (len == 1) dec[n] = trans(rn[n][0]);
            else if (trans(rn[n][len - 1]) <= trans(rn[n][len - 2]))
                dec[n] += trans(rn[n][len - 1]);
        }
        dec_ans = dec[0] - dec[1];
        if (dec_ans < 0) dec_ans *= -1;
        
        for (int i = 3; i >= 0; i--) {
            dec_dig[i] = dec_ans % 10;
            dec_ans -= dec_dig[i];
            dec_ans /= 10;
        }
        for (int i = 0; i < dec_dig[0]; i++)
            rn_ans += 'M';
        switch (dec_dig[1]) {
        case 9:
            rn_ans += "CM";
            break;
        case 4:
            rn_ans += "CD";
            break;
        case 8: case 7: case 6: case 5:
            rn_ans += 'D';
            dec_dig[1] -= 5;
        case 3: case 2: case 1:
            for (int i = 0; i < dec_dig[1]; i++)
                rn_ans += 'C';
            break;
        }
        switch (dec_dig[2]) {
        case 9:
            rn_ans += "XC";
            break;
        case 4:
            rn_ans += "XL";
            break;
        case 8: case 7: case 6: case 5:
            rn_ans += 'L';
            dec_dig[2] -= 5;
        case 3: case 2: case 1:
            for (int i = 0; i < dec_dig[2]; i++)
                rn_ans += 'X';
            break;
        }
        switch (dec_dig[3]) {
        case 9:
            rn_ans += "IX";
            break;
        case 4:
            rn_ans += "IV";
            break;
        case 8: case 7: case 6: case 5:
            rn_ans += 'V';
            dec_dig[3] -= 5;
        case 3: case 2: case 1:
            for (int i = 0; i < dec_dig[3]; i++)
                rn_ans += 'I';
            break;
        }

        cout << rn_ans << '\n';
    } 
    return 0;
}

int trans(char rn) {
    switch (rn)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return -1;
    }
}

