#include <iostream>
using std::string;

// function prototype

int helloLength(void);


int main(void) {
    std::cout << helloLength();
    return 0;

}


int helloLength(void) {
    string hello("hello");
    return hello.length();

}
