#include <iostream>

using namespace std;

int main()
{
  const size_t n = 4000000;
  size_t sum = 0;
  for (size_t a = 1, b = 1, c; (c = a + b) <= n; a = b, b = c) {
    if (c % 2 == 0) {
      sum += c;
    }
  }
  cout << sum << endl;
  return 0;
}
