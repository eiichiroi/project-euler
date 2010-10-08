#include <iostream>

using namespace std;

int main()
{
  const size_t n = 1000;

  for (size_t a = 1; a < n; ++a) {
    for (size_t b = a+1; b < n; ++b) {
      size_t c = n - a - b;
      if (a*a + b*b == c*c) {
        cout << a*b*c << endl;
        break;
      }
    }
  }

  return 0;
}
