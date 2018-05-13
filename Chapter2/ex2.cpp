#include <iostream>

int main(int argc, char* argv[])
{
    double p, q, x, y;
    int j, part;

    std::cout << "Input float values for variables p, q, x, y (IN THE GIVEN ORDER) followed by RETURN: ";
    std::cin >> p >> q >> x >> y;
    std::cout << "Input int values for variable j followed by RETURN: ";
    std::cin >> j;
    // Prompt the user to select which part of the exercise is executed
    do
    {
    std::cout << "Which part should be executed (1, 2 or 3)? ";
    std::cin >> part;
    } while ( !( (part == 1) || (part == 2) || (part == 3) ) );

    switch (part)
    {
        case 1: // part (1)
            {
                if ((p >= q) || (j != 10))
                {
                    x = 5.0;
                }
            }
            break;
        case 2: // part (2)
            {
                if ((y >= q) && (j == 20))
                {
                    x = 5.0;
                }
            }
            break;
        case 3: // part (3)
            {
                if (p > q)
                {
                    x = 0.0;
                }
                else if ((p <= q) && (j == 10))
                {
                    x = 1.0;
                }
                else
                {
                    x = 2.0;
                }
            }
            break;
        default:
            std::cout << "It should never reach this case because of the do-while above...\n";
    }

    // Write value of x to the user
    std::cout << "x = " << x << "\n";

    return 0;
}
