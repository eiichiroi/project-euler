#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <functional>
#include <algorithm>

using namespace std;

bool is_palindromic_number(size_t n)
{
  ostringstream oss;
  oss << n;
  string str = oss.str();
  return equal(str.begin(), str.end(), str.rbegin());
}

int main()
{
  vector<size_t> products;
  for (size_t i = 100; i < 1000; ++i) {
    for (size_t j = 100; j <= i; ++j) {
      products.push_back(i * j);
    }
  }

  sort(products.begin(), products.end(), greater<size_t>());

  for (size_t i = 0; i < products.size(); ++i) {
    if (is_palindromic_number(products[i])) {
      cout << products[i] << endl;
      break;
    }
  }
  
  return 0;
}
