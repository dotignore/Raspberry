// Листинг 7,3
// Сложные услвия в конструкциях while
#include<iostream>
using namespace std;

int main(){
      unsigned short small;
      unsigned long large;
const unsigned short MAXSMALL= 65535;
    
    cout << "Enter a small number: ";
    cin >> small;
    cout << "Enter a large number: ";
    cin >> large;
    
    cout << "small: " << small << "...";
    
    // на каждой итерации проверяются три условия
    
    while(small < large && large > 0  && small < MAXSMALL){
        if(small % 5000 == 0)
            cout << ".";
        small++;
        large-=2;

    }
    cout << "\nSmall: " << small << " Large: " << large << endl;
    
    return 0;
}
