#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<size_t> sieve(size_t max_prime)
{
  vector<size_t> primes;

  vector<bool> is_prime(max_prime+1, true);
  is_prime[0] = is_prime[1] = false;

  for (size_t i = 2; i < max_prime; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (size_t j = i+i; j < max_prime; j += i) {
        is_prime[j] = false;
      }
    }
  }

  return primes;
}

int main()
{
  const unsigned long long n = 600851475143ULL;
  const size_t max_prime = sqrt(n) + 1;

  vector<size_t> primes = sieve(max_prime);
  size_t largest_prime = 2;
  for (size_t i = 0; i < primes.size(); ++i) {
    if (primes[i] * primes[i] > n) break;
    if (n % primes[i] == 0) {
      largest_prime = primes[i];
    }
  }

  cout << largest_prime << endl;

  return 0;
}
