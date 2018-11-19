#include <iostream>

int main(int argc, char* argv[])
{
    int i;
    int* p_j;

    i = 5;
    p_j = &i;
    std::cout << "i: " << i << "\n";
    *p_j *= 5;
    std::cout << "i: " << i << "\n";

    int* p_k;
    p_k = new int;
    *p_k = i;
    std::cout << "*p_k: " << *p_k << "\n";
    delete p_k;

    return 0;
}