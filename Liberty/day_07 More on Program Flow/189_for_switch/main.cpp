// листинг 7,17
// обработка диалога с пользователем
// посредством бесконечного цикла
#include<iostream>
using namespace std;

// прототипы функций
int menu();
void DoTaskOne();
void DoTaskMany(int);

int main(){

    bool exit = false;          // присваиваем "false" один раз чтоб мы немогли выйти из цыкла
    for( ; ; )
    {
        int choice = menu();
        
        switch(choice)
        {
            case(1): DoTaskOne();   break;
            case(2): DoTaskMany(2); break;
            case(3): DoTaskMany(3); break;
            case(4): continue;      break;
            case(5): exit=true;     break;
            
            default: cout << " Please select again!\n"; break;
        }       // конец блока switch
        
        if (exit == true)
            break;
    }           // и так до бесконечности
    
    return 0;
}               // конец функции name

int menu() {
    int choice;
    cout << " **** Menu **** "  << endl << endl;
    cout << "(1) Choice one. "          << endl;
    cout << "(2) Choice two. "          << endl;
    cout << "(3) Choice three. "        << endl;
    cout << "(4) Redisplay menu. "      << endl;
    cout << "(5) Quit. "        << endl << endl;
    cout << ": ";
    cin >> choice; 
    return choice;
}

void DoTaskOne(){
    cout << "Task one!\n";
}

void DoTaskMany(int witch){
    if(witch == 2)
        cout << "Task Two!\n";
    else
        cout << "Task Three!\n";
}
