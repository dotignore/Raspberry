// Листинг демонстррует использование инструкции
// if совмесно с оператором отношений
#include <iostream>
using namespace std;

int main(){
    int RedSoxScore, YankeesScore;
    
    cout << "Enter the score for the Red Sox: ";
    cin >> RedSoxScore;
    
    cout << "\nEnter the score for the Yankees: ";
    cin >> YankeesScore;
    cout << "\n";
    
    if(RedSoxScore > YankeesScore)
        cout << "Go Sox!\n";
    
    if(RedSoxScore < YankeesScore)
        cout << "Go Yankees!\n";
        cout << "Happy days in NY!\n";
    
    if(RedSoxScore == YankeesScore){
        cout << "A tie? Naah, can`t be.\n";
        cout << "Give me the real score for the Yanks: ";
        cin >> YankeesScore;
        
        if(RedSoxScore > YankeesScore)
            cout << "Knew it! Go Sox!\n";
        
        if(RedSoxScore < YankeesScore)
            cout << "Knew it! Go Yankees!\n";
        
        if(RedSoxScore == YankeesScore)
            cout << "Wow, it rellay was a tie!\n";
    }

    cout << "\nThanks for telling me." << endl;
    return 0;
}