#include <iostream>
#include <vector>
#include <string>

using namespace std;

void sieve_of_eratosthenes(vector<int>& prime, int limit) {
    prime[0] = prime[1] = 1;
    for (int i = 2; i < limit; ++i) {
        if (prime[i] == 0) {
            for (int j = i * 2; j < limit; j += i) {
                prime[j] = 1;
            }
        }
    }
}

void process_test_cases(int t, const vector<int>& prime) {
    string s;
    int case_num = 0;

    while (t--) {
        cin >> s;
        vector<int> asci(128, 0);

        for (char c : s) {
            asci[c]++;
        }

        cout << "Case " << ++case_num << ": ";
        bool has_prime_count = false;

        for (int i = 0; i < 128; ++i) {
            if (prime[asci[i]] == 0 && asci[i] > 0) {
                cout << static_cast<char>(i);
                has_prime_count = true;
            }
        }

        if (!has_prime_count) {
            cout << "empty";
        }
        cout << endl;
    }
}

int main() {
    vector<int> prime(2002, 0);
    int t;

    sieve_of_eratosthenes(prime, 2002);

    cin >> t;

    process_test_cases(t, prime);

    return 0;
}
