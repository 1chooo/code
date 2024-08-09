#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int compare(const void *, const void *);

int main()
{
  int n, count, j;
  string name;

  cin >> n;
  string countries[n];

  for (int i = 0; i < n; i++)
  {
    cin >> countries[i];
    getline(cin, name);
  }

  sort(countries, countries + n);

  for (int i = 0; i < n;)
  {
    cout << countries[i] << " ";
    count = 1;

    for (j = i + 1; j < n; j++)
    {
      // countries[] has been sorted,
      // so if c[i] != c[j] present that it won't have the same country after c[j]
      if (countries[i] != countries[j])
      {
        break;
      }
      count++;
    }
    i = j;
    cout << count << endl;
  }
  return 0;
}