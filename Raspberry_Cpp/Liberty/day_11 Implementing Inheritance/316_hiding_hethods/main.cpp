#include<iostream>
using namespace std;

class Mammal{
public:
    void Move() const{cout << "Mammal move one step\n";}
    void Move(int distance) const{
        cout << "Mammal move ";
        cout << distance << " steps.\n";
    }
private:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal{
public:
    // Возможно последует сообение, что ссылка скрыта!
    void Move() const{cout << "Dog move 5 steps.\n";}
};

int main(){
    Mammal bigAnimal;
    Dog fido;
    
    bigAnimal.Move();
    bigAnimal.Move(2);
    
    fido.Move();
    //fido.Move(10);
    //fido.Mammal::Move(10);
    
    return 0;
}