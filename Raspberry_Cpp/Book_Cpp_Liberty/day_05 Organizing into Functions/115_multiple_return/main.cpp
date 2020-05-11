// Листинг 5.6 Использование нескольких
// операторов return
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int Doubler(int AmountToDouble);

int main(){
    int result = 0;
    int input;
    
    cout << "1: Enter a number between 0 and 10,000 to double: ";
    cin >> input;
    
    cout << "\n2: Before doubler is called... ";
    cout << "\n3: input: " << input << " doubler: " << result << "\n";
    
    result = Doubler(input);
    
    cout << "\n4: Back from Doubler...\n";
    cout << "\n5: input: " << input << " doubler: " << result << "\n";
    
    return 0;
}

int Doubler(int original){
    if(original <= 10000)
        return original * 2;
    else
        return -1;
    cout << "Your can`t get here!\n";
}