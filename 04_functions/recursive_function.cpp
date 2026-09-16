


#include <iostream>


int i = 1;


void f() {
    if (i == 100) {
        std::cout << "enough!" << std::endl;
        return ;
    }
    std::cout << i++ << " - hello" << std::endl;
    f();

}


int main(void) {

    f();

    return 0;
}