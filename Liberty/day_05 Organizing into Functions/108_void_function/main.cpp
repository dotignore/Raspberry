#include<iostream>
using std::cout;
using std::endl;
using std::cin;

void myFunction();

int x=5, y=7;

int main(){
    cout << "x from main: " << x << "\n";   //1: x from main: 5
    cout << "y from main: " << y << "\n";   //2: y from main: 7
    myFunction();
    cout << "Back from myFunction! \n\n";   //5: Back from myFunction!
    cout << "x from main: " << x << endl;   //6: x from main: 5
    cout << "y from main: " << y << endl;   //7: y from main: 7
    
    return 0;
}

void myFunction(){
    int y= 10;
    
    cout << "x from myFunction: " << x << "\n";     //3: x from myFunction: 5
    cout << "y from myFunction: " << y << "\n\n";   //4: y from myFunction: 10
}