#include <iostream>

int main(int argc, char* argv[])
{
    int num_cars[5] = {34, 58, 57, 32, 43};
    double avg_cars;

    avg_cars = ((double) (num_cars[0]) + (double) (num_cars[1]) + (double) (num_cars[2]) +
                (double) (num_cars[3]) + (double) (num_cars[4])) / 5; 
    std::cout << "Average number of cars: " << avg_cars << "\n";

    return 0;

}
