/*

    Structs, in C++. GOATED.

*/


#include <iostream>
#include <string>


// STRUCTS!!!

struct Lecture {
    std::string title;
    int duration; // duration in secods.
};


// Function Prototype
void printLecture(Lecture &l);
Lecture createLecture(const std::string& title, int duration);
bool isLongLecture(Lecture &l);

int main(void) {
    Lecture oop; // Created a "lecture"
 
    // Initialize the members of the Lecture object (variable.)
    oop.title = "Classes and Objects!";
    oop.duration = 50 * 60;

    printLecture(oop);

    // Create Math 

    Lecture math {"Graphs", 60 * 75};
    printLecture(math);
    
    // let's create a lecture with the new function
    
    Lecture english = createLecture("Alphabet", 35);
    printLecture(english);
    
    if (isLongLecture(math)) {
        std::cout << "This is a long lecture!" << std::endl;
    } else {
        std::cout << "This is a short lecture!" << std::endl;
    }


    return 0;
}

void printLecture(Lecture &l) {
    std::cout << "Title:\t\t" << l.title << std::endl;
    std::cout << "Duration\t" << l.duration / 60 << " Minutes and " << l.duration % 60 << " Seconds" << std::endl << std::endl;

    
}

bool isLongLecture(Lecture &l){

    return 1 ? l.duration > 60 * 60 : 0;
}

Lecture createLecture(const std::string& title, int duration) {
    
    
    Lecture l{title, duration * 60};
    return l;



}