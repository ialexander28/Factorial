#include <iostream>
#include <math.h>

int main() 
{
    int n, k, i, nFact, kFact, n_kFact, k_comb; 

    std::cout << "Enter 'n' and 'k' (n>=k) " << '\n';
    std::cin >> n >> k; 

    nFact = 1; 
    for (i = 1; i <= n; i++)
    {
        nFact *= i; 
    }

    kFact = 1; 
    for (i = 1; i <= n; i++)
    {
        kFact *= i; 
    }

    n_kFact = 1; 
    for (i = 1; i <= n; i++)
    {
        n_kFact *= i; 
    }
    
    k_comb = nFact / (kFact * n_kFact);

    std::cout << " Result of 'n' choose 'k' is: " << k_comb << '\n';


return 0; 
}