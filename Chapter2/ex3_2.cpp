#include <iostream>

int main(int argc, char* argv[])
{
    int x = 0;
    int sum = 0;

    while (1)
    {
        std::cout << "Enter positive integers to be added (-1 for termination): ";
        std::cin >> x;
        
        if (x != -1) 
        {
            if (sum + x > 100) 
            {
                std::cout << "x = " << x << " discarded, sum = " << sum << "\n";
                return 0;
            }
            else
            {
                sum += x;
            }
        }
        else 
        {
            std::cout << "sum = " << sum << "\n";
            return 0;
        }

    }

}
