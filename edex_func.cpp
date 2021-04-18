#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int n = 3;

    std::cout << "Before func " << "\n";
    func(n);
    std::cout << "After func " << "\n";

return 0;  
}

void func(int n)
{
    n = 4; 
    std::cout << "Inside func " << "\n";
}

