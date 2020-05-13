#include <iostream>
using namespace std;

int main(){
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    
    int choice;
    cout << "Enter a day (0-6): ";
    cin >> choice;
    
    if (choice == Sunday || choice == Saturday) cout  << "\nYou`re already off on weekends!\n";
    else
        cout << "\nOkay, I`ll put in the vacation day.\n";
    
    return 0;
}
