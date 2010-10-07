#include <iostream>

using namespace std;

int main()
{
  const size_t n = 1000;
  size_t sum = 0;
  for (size_t i = 1; i < n; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}
