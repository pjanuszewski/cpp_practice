#include <iostream>

double harmonic_mean()
{
    double x, y;
    std::cin >> x >> y;
    return 2.0 * x * y / (x + y);
}

int main()
{
    double result = 1;
    while (result != 0)
    {
        result = harmonic_mean();
        std::cout << "The harmonic mean is: " << result << std::endl;
    }
    return 0;
}