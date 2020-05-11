// Листинг 7,6
// Если условие продолжение цикла не выполняется
// тело цикла пропускается
#include<iostream>
using namespace std;

int main(){
    int counter;
    cout << "How many hellos?: ";
    cin >> counter;
    
    while(counter < 0){
        cout << "Hello!\n";
        counter--;
    }
    cout << "Counter is OutPut: " << counter << endl;
    
    return 0;
}