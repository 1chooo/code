#include <iostream>

#include <algorithm>

using namespace std;

int k[] = {10000000, 100000, 1000, 100};

string s[] = {"kuti", "lakh", "hajar", "shata"}, answer;

string str(long long int x)

{
  string s = "";

  while (x)

  {
    s += '0' + (x % 10);

    x /= 10;
  }

  reverse(s.begin(), s.end());

  return s;
}

void fix(long long int x)

{
  if (x >= k[0])

  {
    fix(x / k[0]);

    answer += " " + s[0];

    x %= (int)k[0];
  }

  for (int i = 0; i < 4; i++)

  {
    if (x / k[i] > 0)

    {
      answer += " " + str(x / k[i]) + " " + s[i];

      x %= k[i];
    }
  }

  if (x > 0)
    answer += " " + str(x);
}

int main()

{
  ios_base::sync_with_stdio(0);

  cin.tie(0);

  long long int N;

  int Case = 1;

  while (cin >> N)

  {
    cout << "   " << Case++ << ".";

    if (N == 0)
      cout << " 0" << endl;

    else

    {
      answer = "";

      fix(N);

      cout << answer << endl;
    }
  }

  return 0;
}