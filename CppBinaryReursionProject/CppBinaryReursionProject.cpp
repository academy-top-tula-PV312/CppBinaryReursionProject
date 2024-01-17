#include <iostream>

double PowerLine(double x, int n);
double PowerBinary(double x, int n);

int main()
{
    std::cout << "Hello World!\n";
}

double PowerLine(double x, int n)
{
    double result(1);
    for (int i{}; i < n; i++)
        result *= x;
    return result;
}

double PowerBinary(double x, int n)
{
    double result(1);

    while (n)
    {
        /*if (n & 1)
        {
            result *= x;
            n--;
        }
        else
        {
            x *= x;
            n /= 2;
        }*/

        if (n & 1)
            result *= x;
        x *= x;
        n /= 2;
    }

    return result;
}
