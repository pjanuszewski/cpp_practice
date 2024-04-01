#include <iostream>

double harmonic_mean()
{
    double a, b;
    std::cin >> a >> b;
    return 2.0 * a * b / (a + b);
}

int main()
{
    double val = 1;
    while (val != 0.0)
    {
        val = harmonic_mean();
        std::cout << val << std::endl;
    }
    std::cout << "End of program" << std::endl;
}