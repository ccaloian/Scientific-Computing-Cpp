#include <iostream>

int main(int argc, char* argv[])
{
    int *p_i, *p_j, *p_k;
    int i, j;

    i = 2;
    j = 5;
    p_i = &i;
    p_j = &j;
    std::cout << "i = " << i << ", j = " << j << "\n";
    
    // swap i and j using a temporary int pointer variable
    p_k = new int;
    *p_k = i;
    *p_i = j;
    *p_j = *p_k;
    std::cout << "i = " << i << ", j = " << j << "\n";

    delete p_k;

    return 0;
}
    
