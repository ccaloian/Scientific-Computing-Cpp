#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::string given_name, family_name;
    
    std::cout << "Enter your GIVEN NAME followed by RETURN: ";
    std::getline(std::cin, given_name);
    
    std::cout << "Enter you FAMILY NAME folowed by RETURN: ";
    std::getline(std::cin, family_name);

    std::cout << "Your full name is: " << given_name << ", " << family_name << "\n";

   return 0; 
}
