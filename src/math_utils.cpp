#include "math_utils.hpp"

namespace mathutils
{

    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {

        if (b == 0)
        {
            throw std::runtime_error("divide by zero");
        }

        return a / b;
    }

    bool isPrime(int n)
    {

        if (n <= 1)
        {
            return false;
        }

        for (int i = 2; i * i <= n; i++)
        {

            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

}