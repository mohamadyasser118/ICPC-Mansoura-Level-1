#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

vector<int> generate_primes(int limit) {
    vector<int> primes;
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return primes;
}

int count_prime_factors(int n, const vector<int>& primes) {
    unordered_set<int> distinct_prime_factors;
    int original_n = n;

    for (int prime : primes) {
        if (prime * prime > n) break;
        while (n % prime == 0) {
            distinct_prime_factors.insert(prime);
            n /= prime;
        }
    }

    if (n > 1) {
        distinct_prime_factors.insert(n);
    }

    return distinct_prime_factors.size();
}

int main() {
    const int MAX_N = 1000000;
    vector<int> primes = generate_primes(static_cast<int>(sqrt(MAX_N)) + 1);

    int n;
    while (cin >> n && n != 0) {
        int num_prime_factors = count_prime_factors(n, primes);
        cout << n << " : " << num_prime_factors << endl;
    }

    return 0;
}
