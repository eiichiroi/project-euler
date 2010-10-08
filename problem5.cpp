#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
  return a/gcd(a, b)*b;
}

int main()
{
  const int n = 20;
  int least_common_multiple = 1;
  for (int i = 1; i <= n; ++i) {
    least_common_multiple = lcm(least_common_multiple, i);
  }
  cout << least_common_multiple << endl;

  return 0;
}
