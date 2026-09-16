/*

*/

#include <iostream>

// Function Prototypes.

void countdown(int n);
void countup(int n);
int power(int base, int exp);


int main(void) {
    countup(30);
    countdown(30);

    power(2,10);


    return 0;
}

void countup(int n) {
    // Base case
    if (n <= 100) {
        std::cout << n << "\t";
        countup(n+1);
    }
    else {
        return;
    }


}


void countdown(int n) {
    // Base case
    if (n <= 0) {
        return;
    }
    else {
        std::cout << n << "\t";
        countdown(n-1);
    }



}


int power(int base, int exp) {
    if (exp == 0) {
        std::cout << "I am power(" << exp << "). and I know the answer is 1!\n\n.";
        return 1;
    }
    std::cout << "\n I am the power(" << base << "," << exp << ")\n I remember " << base << " and ask power(" << base << " " << exp - 1 << ") for help!";
    int help = power(base, exp-1);
    std::cout << "\n I am the power(" << base << ","  << exp-1 << ")\n I remember " << help << " and ask power(" << base << " " << exp - 1 << ") for help!";
    std::cout << "\nI will do " << help << " * " << base << " = " << (base * help);
    return base * help; 

}