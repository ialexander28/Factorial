#include <iostream>
#include <math.h>

int factorial(int num); 

int main() 
{
    int n, k, k_comb; 
    int nFact, kFact, n_kFact;

    std::cout << '\n';

    std::cout << "Enter n and k (n must be > or = k): " << '\n';
    std::cin >> n >> k; 

    nFact = factorial(n); 

    kFact = factorial(k); 

    n_kFact = factorial(n - k); 
    
    k_comb = (nFact / (kFact * n_kFact));

    std::cout << " Result of 'n' choose 'k' is: " << k_comb << '\n';

    std::cout << '\n';

return 0; 
}

int factorial(int num){
    int factRes, i; 
    factRes = 1; 
    for (i = 1; i <= num; ++i)
        factRes *= i; 
    return factRes; 
} 
