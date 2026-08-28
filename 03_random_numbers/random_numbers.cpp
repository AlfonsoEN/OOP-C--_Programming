/*

    Practice of how to use random numbers

*/


#include <iostream>
#include <random>
#include <ctime>

int main(void) {

    std::random_device rd;


    std::mt19937 eng(rd());

    // Define distribution of random numbers
    std::uniform_int_distribution<int> dist(1,100);

    int i = 1;
    while ( i < 100){
        std::cout << dist(eng) << std::endl;

        i++;

    }


    return 0;

}