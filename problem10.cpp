#include <iostream>
#include <vector>

using namespace std;

vector<size_t> sieve(const size_t max_prime)
{
  vector<size_t> primes;
  vector<bool> is_prime(max_prime+1, true);
  is_prime[0] = is_prime[1] = false;
  primes.push_back(2);
  for (size_t i = 3; i <= max_prime; i += 2) {
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
  const size_t n = 2000000;
  vector<size_t> primes = sieve(n);
  unsigned long long sum = 0;
  for (size_t i = 0; i < primes.size(); ++i) {
    sum += primes[i];
  }
  cout << sum << endl;

  return 0;
}
