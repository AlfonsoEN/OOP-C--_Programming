/*

VECTORS!

vectors are passed by value, not reference.

*/

#include <iostream>
#include <vector>


void print(std::vector<int>& v);
void print_backwards(std::vector<int>& v);


int main(void) {

    std::vector<int> v; // Empty vector (dynamic array) of intengers.


    // Create and initialize

    std::vector<int> v2 {1,2,3,10,5,6};

    // Printing the vector
    print(v2);

    std::vector<int> v3(10,1);
    print(v3);

    // Copy from another vector
    std::vector<int> v4(v2);
    print_backwards(v4);

    // GET THE SIZE

    std::cout << "v2 size: " << v2.size() << std::endl;

    // First number of v2
    std::cout << "v2 first: " << v2.front() << std::endl;

    // Last number of v2
    std::cout << "v2 back: " << v2.back() << std::endl;

    // Add element at the end
    v2.push_back(10);
    print(v2);


    // Remove from the end
    print(v4);
    v4.pop_back();
    print(v4);

    // Iterator - object points to a certain location in th evector
    // Begin () - POINTS to the first element
    // End() - POINTS to the last element

    std::cout << *v2.begin() << std::endl;

    v2.insert(v2.begin() + 1, 999);
    print(v2);
    v2.insert(v2.end(), 999);
    print(v2);
    v2.erase(v2.end());
    print(v2);







    
    return 0;
}

void print_backwards(std::vector<int>& v) {
    for (int i = v.size()-1; i >= 0; i--) {
         std::cout << v.at(i) << " ";
     }
     std::cout << std::endl;

    
}


void print(std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}

