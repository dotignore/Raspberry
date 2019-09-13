// Листинг 5.5 передачя параметров как значений
#include<iostream>
using std::endl;
using std::cout;
using std::cin;

void swap(int x, int y);

int main(){
    int x = 5, y =10;
    
    cout << "1: Main. Before swap, x: " << x << " y: " << y << "\n";
    swap(x,y);
    cout << "4: Main. After swap, x: " << x << " y: " << y << "\n";
    
    return 0;
}

void swap(int x, int y){
    int temp;
    cout << "2: Swap Before swap, x: " << x << " y: " << y << "\n";
    
    temp = x;
    x = y;
    y =  temp;
    
    cout << "3: Swap. After swap, x: " << x << " y: " << y << "\n";
}