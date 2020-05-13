//Listing 13.11 using cin.get() 1:
#include <iostream>
using namespace std;

int main(){
    char buffer[80];
    cout << "Enter the string: ";
    cin.get(buffer, 79); // get up to 79 or newline
    cout << "Here’s the buffer: " << buffer << endl;
    
    return 0;
}