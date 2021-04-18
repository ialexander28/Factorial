#include <iostream>
#include <math.h>

// repo toke: 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

int factorial(int num); 

int main() 
{
    int n, k, k_comb; 
    int nFact, kFact, n_kFact;
    int kCombinations(int n, int k); 

    std::cout << '\n';

    std::cout << "Enter n and k (n must be > or = k): " << '\n';
    std::cin >> n >> k; 

    k_comb = kCombinations(n, k); 

    std::cout << " Result of 'n' choose 'k' is: " << k_comb << '\n';

    std::cout << '\n';

return 0; 
}

int kCombinations (int n, int k){

    int nFact, kFact, n_kFact, k_comb;

    nFact = factorial(n); 

    kFact = factorial(k); 

    n_kFact = factorial(n - k); 
    
    return k_comb = (nFact / (kFact * n_kFact));
}

int factorial(int num){
    int factRes, i; 
    factRes = 1; 
    for (i = 1; i <= num; ++i)
        factRes *= i; 
    return factRes; 
} 
