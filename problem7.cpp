#include <iostream>
#include <vector>

using namespace std;

vector<size_t> sieve(const size_t max_prime)
{
  vector<size_t> primes;
  vector<bool> is_prime(max_prime+1, true);
  is_prime[0] = is_prime[1] = false;
  primes.push_back(2);
g  for (size_t i = 3; i <= max_prime; i += 2) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (size_t j = i+i; j <= max_prime; j += i) {
        is_prime[j] = false;
      }
    }
  }
  return primes;
}

int main()
{
  const size_t n = 10001;
  vector<size_t> primes = sieve(1000000);
  for (size_t i = primes[primes.size()-1]+1; primes.size() < n; ++i) {
    bool is_prime = true;
    for (size_t j = 0; j < primes.size(); ++j) {
      if (i % primes[j] == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      primes.push_back(i);
    }
  }
  cout << primes[n-1] << endl;
  return 0;
}


