/*

A program that stores and displays numeric student 
and course information.

*/

#include <iostream>

using namespace std;

namespace student {
    int id = 0;

}

namespace course {
    int id = 0;
}

int main(void) {
    cout << ("Enter student ID:") << endl;
    cin >> student::id;
    cout << ("Enter course ID:") << endl;
    cin >> course::id;
    
    printf("\n--- Registration information ---\n");
    printf("Student ID: %d\nCourse ID: %d\n", student::id, course::id);


    return 0;
}

