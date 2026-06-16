#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
    // If n is 2 or less, there are no prime numbers strictly less than n
    if (n <= 2) {
        return 0;
    }

    // Create a boolean vector initialized to true. 
    // index represents the number, value represents if it's prime.
    vector<bool> isPrime(n, true);
    
    // 0 and 1 are not prime numbers
    isPrime[0] = false;
    isPrime[1] = false;

    // Sieve of Eratosthenes optimization loop
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            // Mark all multiples of i starting from i * i as false (composite)
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Count how many numbers remain marked as true (prime)
    int primeCount = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            primeCount++;
        }
    }

    return primeCount;
}

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    int result = countPrimes(n);
    cout << "Number of prime numbers strictly less than " << n << " is: " << result << endl;

    return 0;
}