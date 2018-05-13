#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    std::ifstream read_file("x_and_y.dat");
    if (!read_file.is_open())
    {
        return 1;
    }

    int number_of_rows = 0;
    while (!read_file.eof())
    {
        double dummy1, dummy2, dummy3, dummy4;
        read_file >> dummy1 >> dummy2;
        read_file >> dummy3 >> dummy4;
        // check if the line has valid data input
        if (!read_file.fail()) 
        {
            number_of_rows++;
        } 
    }
    
    std::cout << "Number of rows: " << number_of_rows << "\n";
    read_file.close();
    
    return 0;
}
