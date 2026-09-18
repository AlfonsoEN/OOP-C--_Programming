/*

    Learning how to use classes!

*/

#include <iostream>
#include <string>

using namespace std;


class Route {

public:
// Using 'public:' allows everyone on the file to see, usee, and access any of the information written.
    // Constructor - Called when the object is created.
    // Constructor has the same name as the class and has no return type, not even void.
    Route(const string& src, const string& dest, int len) {
        source = src;
        destination = dest;
        length = len;
    }


    void print() {

        cout << "{ " << source << " -> " << destination << ", " << length << " miles! }" << endl;

    }


    // Getters, accessors functions.
    string getSrc() { 
        return source;
    }

    // implementation other getters
    string getDest() {
        return destination;
    }
    int getLen() {
        return length;
    }

    // Setters, mutator functions.
    void setDest(const string& dest) {
        destination = dest;
    }



private:
    // Using 'private:' ENCAPSULATES the properties, and they can NOT be changed anymore.
    string source;
    string destination;
    int length;
    
};


int main(void) {
    // Create the Route

    Route r1("Lakeland", "Orlando", 40);

    //Set the properties of r1
    // r1.source = "Lakeland";
    // r1.destination = "Los Angeles";
    // r1.length = 40;
    // Print r1
    r1.print();

    // Create a new Route
    Route summer_trip("Lakeland", "Key West", 400);
    
    summer_trip.setDest("New York");
   // summer_trip.source = "Lakeland";
   // summer_trip.destination = "New York";
   summer_trip.print();



    return 0;
}

