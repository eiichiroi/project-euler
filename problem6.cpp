#include <iostream>

using namespace std;

inline int sum_of_square(int n)
{
  return n*(n+1)*(2*n+1)/6;
}

inline int square(int n) { return n*n; }
inline int square_of_sum(int n)
{
  return square(n*(n+1)/2);
}

int main()
{
  const size_t n = 100;
  cout << square_of_sum(n) - sum_of_square(n) << endl;
  return 0;
}
