#include <bits/stdc++.h>
using namespace std;
vector<long long int> v;

int main()
{
  long long int n, d, i, j, r, s;
  // freopen("834.txt","r",stdin);
  // freopen("834out.txt","w",stdout);
  while (cin >> n >> d)
  {
    v.clear();
    while (d > 0)
    {
      r = n % d;
      s = n / d;
      v.push_back(s);
      n = d;
      d = r;
    }
    cout << "[";
    for (i = 0; i < v.size(); i++)
    {
      if (i == v.size() - 1)
      {
        cout << v[i] << "]" << endl;
      }
      else if (i == 0)
      {
        cout << v[i] << ";";
      }
      else
      {
        cout << v[i] << ",";
      }
    }
  }
  return 0;
}