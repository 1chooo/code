#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCase_num;

    cin >> testCase_num;
    for (int i = 0; i < testCase_num; i++) {
        int simulationDay;
        int politicalParty_num;
        cin >> simulationDay >> politicalParty_num;

        int partyHartal[politicalParty_num];
        vector<int> hartals;
        for (int j = 0; j < politicalParty_num; j++) {
            cin >> partyHartal[j];

            // simulate hartals for all parties
            for (int k = 0; k <= simulationDay; k += partyHartal[j]) {
                if (j != 0) {
                    // repeated hartals and day0 won't push into vector again
                    if (k != 0 && find(hartals.begin(), hartals.end(), k) == hartals.end()) {
                        hartals.push_back(k);
                    }
                } else {
                    if (k != 0) {
                        hartals.push_back(k);
                    }
                }
            }
        }

        sort(hartals.begin(), hartals.end());

        int lostWorkingDay = 0;
        for (int j = 0; j < hartals.size(); j++) {
            // skip Friday and Saturday
            if (hartals[j] % 7 != 6 && hartals[j] % 7 != 0) {
                lostWorkingDay++;
            }
        }
        cout << lostWorkingDay << endl;
    }
    return 0;
}