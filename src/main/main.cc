#include <iostream>
#include "src/lib/solution.h"

int main()
{
    // Solution solution ;
    // std::cout << solution.PrintHelloWorld() << std::endl;

    //integers
    int example1[] = {1,2,3,4,5};
    cout << sizeof(example1)/sizeof(example1[0]) << endl;
    //char
    char example2[] = {'a','b','c'};
    cout << sizeof(example2)/sizeof(example2[0]) << endl;
    //float
    float example3[] = {1.111, 2.222, 3.333, 4.444};
    cout << sizeof(example3)/sizeof(example3[0]) << endl;
    return EXIT_SUCCESS;
}