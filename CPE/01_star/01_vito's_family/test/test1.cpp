#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int cases;
  cin >> cases;

  while (cases--)
  {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    sort(arr.begin(), arr.end());

    int middle = arr[n / 2];
    int all = 0;

    for (int i = 0; i < n; i++)
      all += abs(arr[i] - middle);

    cout << all << endl;
  }

  return 0;
}
