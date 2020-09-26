#include <bit/stdc++ .h>

using namespace std;

int prime[1000000];

// Calculate all primes upto n using Sieve of Eratosthenes.

void SieveOfErastosthenes(int n)
{
    // initialize all entries i as true
    // a value in prime[i] will finally be false if i is not a prime, else true.

    for (int i = 1; i <= n + 1; i++)
        prime[i] = true;

    prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        // if prime[p] is not changed, then it is a prime

        if(prime[p] == true){
            // updates all multiples of p greater than or equal to 
            // the square of it numbers which are multiple of p and 
            // are less than p^2 are already been marked.

            for(int i = p * p; i <= n; i += p)
            prime[i] = false;
        }
    }
}
// utility function to check power of two

bool isPowerOfTwo(int n)
{
    return (n && !(n & (n - 1)));

}
// function to check if the given number number is Proth number or not

bool isProthNumber(int n)
{
    int k = 1;

    while (k < (n / k)) {
        // check if k divides n or not
        if(n % k == 0) {
            // check if n/k is power of 2 or not

            if(isPowerOfTwo(n / k))
            return true;
        }
        // update k to next odd number
        k = k + 2;
    }
    // if we reach here, it means there exists no value of K such
    // that k is odd number and n/k is a power of 2 greater than k
    return false;
}
// function to check whether the given number is Proth Prime or not.
// NB: Proth Prime is a Proth Number that is a prime.

bool isProthPrime(int n)
{
    // check n for Proth Number

    if (isProthNumber(n - 1)) {
        // if number is prime, return true

        if(prime[n])
            return true;

        else
            return false;
    }
    else
        return false;
}
// Driver code

int main()
{
    int n = 41;

    // if number is proth number, calculate primes upto n

    SieveOfErastosthenes(n);

    for (int i = 1; i <= n; i++)

        // check n for Proth Prime
        
        if (isProthPrime(i))
            cout << i << endl;
    
    return 0;
}
