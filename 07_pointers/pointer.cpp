/*

Playing with pointers (again.)

*/


#include <iostream>

int main(void) {
    int num = 42;
    double speed = 65.3;

    void *ptr; // Define a void pointer.

    ptr = &num; // ptr points to the address of num.

    std::cout << "Int value via void* " << *(static_cast<int*>(ptr)) << std::endl;

    ptr = &speed;

    std::cout << "Double value via void* " << *(static_cast<double*>(ptr)) << std::endl;


    return 0;
}