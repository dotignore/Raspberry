// Листинг 14,11 Массивы указателей на функции-члены
#include<iostream>
using namespace std;

class Dog{
public:
    void Speak() const{cout << "Woof!\n";}
    void Move() const{cout << "Walking to heel...\n";}
    void Eat() const{cout << "Gobbling food...\n";}
    void Glowl() const {cout << "Grrrrr\n";}
    void Whimper() const {cout << "Whining noises...\n";}
    void RollOver() const {cout << "Rolling over...\n";}
    void PlayDead() const {cout << "Is this the end of Little Caesar?\n";}
};

typedef void (Dog::*PDF)()const;

int main(){
    const int MaxFuncs = 7;
   
    PDF DogFunctions[MaxFuncs] =
        {&Dog::Speak,
        &Dog::Move,
        &Dog::Eat,
        &Dog::Glowl,
        &Dog::Whimper,
        &Dog::RollOver,
        &Dog::PlayDead};
    
    Dog* pDog =0;
    int Method;
    bool fQuit = false;
    
    while (!fQuit){
        cout << "(0)Quit (1)Speak (2)Move (3)Eat (4)Growl (5)Whimper (6)Roll Over (7)Play Dead: ";
        cin >> Method;
        
        if(Method == 0){
            fQuit = true;
        }
        else{
            pDog = new Dog;
            (pDog->*DogFunctions[Method-1])();
            delete pDog;
        }
    }
    
    return 0;
}

/*
 (0)Quit (1)Speak (2)Move (3)Eat (4)Growl (5)Whimper (6)Roll Over (7)Play Dead: 1
 Woof!
 (0)Quit (1)Speak (2)Move (3)Eat (4)Growl (5)Whimper (6)Roll Over (7)Play Dead: 4
 Grrrrr
 (0)Quit (1)Speak (2)Move (3)Eat (4)Growl (5)Whimper (6)Roll Over (7)Play Dead: 7
 Is this the end of Little Caesar?
 (0)Quit (1)Speak (2)Move (3)Eat (4)Growl (5)Whimper (6)Roll Over (7)Play Dead: 0
 Program ended with exit code: 0
*/