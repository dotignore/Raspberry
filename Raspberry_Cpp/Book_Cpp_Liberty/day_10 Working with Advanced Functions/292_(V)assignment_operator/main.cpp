// Листинг 10,15
// конструктор копировщик
#include<iostream>
using namespace std;

class CAT{
public:
    CAT();          // конструктор по умолчанию
    // конструтктор копировальщик и деструктор попущены
    
    int GetAge() const {return *itsAge;}
    void SetAge(int age) {*itsAge = age;}
    
    CAT & operator = (const CAT &);
private:
    int * itsAge;
};

CAT::CAT(){                                 //            CAT frisky;       CAT whiskers;
    cout << "this " << this << " ";         // this     = 0x7fff5fbff7d0    0x7fff5fbff7c8
    cout << "itsAge " << itsAge << " ";     // itsAge   = 0x7fff5fbff8e8    0x7fff00000011 (а на что указывают эти значения)
    cout << "&itsAge " << &itsAge << " ";   // &itsAge  = 0x7fff5fbff7d0    0x7fff5fbff7c8
    cout << endl;
    itsAge = new int;
    *itsAge = 5;
    cout << "this " << this << " ";         // this     = 0x7fff5fbff7d0    0x7fff5fbff7c8
    cout << "itsAge " << itsAge << " ";     // itsAge   = 0x1001000e0       0x100103a90     (это понятно itsAge = new int;)
    cout << "&itsAge " << &itsAge << " ";   // &itsAge  = 0x7fff5fbff7d0    0x7fff5fbff7c8
    cout << "*itsAge " << *itsAge << " ";   // &itsAge  = 5                 6 неможет быть мы не создали копирощик frisky.SetAge(6);
    cout << endl;
}

CAT & CAT::operator = (const CAT & rhs){
    cout << "this " << this << " ";
    cout << "itsAge " << itsAge << " ";
    cout << "*itsAge " << *itsAge << " ";
    cout << "&rhs " << &rhs << " ";
    cout << "\nсравниваем  " << " this (this whiskers) " << this << " &rhs (this frisky) " << &rhs << " \n";
    cout << "если условие не срабатывает  то присваиваем *itsAge = rhs.GetAge(); \n";
    cout << "я уже нестал дописывать тут меняем или оставляем значение  с 5 на 6 или \n";
    
    if(this == &rhs){
        cout << "return this ";
        return *this;
    }
    *itsAge = rhs.GetAge();
    return *this;
}

int main(){
    CAT frisky;                 // this 0x7fff5fbff7d0 = frisky
    cout << "frisky's age: " << frisky.GetAge() << endl;        // frisky's age: 5
    
    cout << "Setting frisky to 6...\n";                         // Setting frisky to 6...
    frisky.SetAge(6);                       // frisky 6 (используется копировщик CAT(); по умолчанию в компиляторе)
    
    CAT whiskers;               // this 0x7fff5fbff7c8 = whiskers
    cout << "whiskers' age: " << whiskers.GetAge() << endl;     // whiskers' age: 5
    
    cout << "copyng frisky to whiskers...\n";                   // copyng frisky to whiskers...
    whiskers = frisky;
    cout << "whiskers' age: " << whiskers.GetAge() << endl;     // whiskers' age: 6
    
    return 0;
}

/*
 this 0x7fff5fbff7d0 itsAge 0x7fff5fbff8e8 &itsAge 0x7fff5fbff7d0
 this 0x7fff5fbff7d0 itsAge 0x1001000e0 &itsAge 0x7fff5fbff7d0 *itsAge 5
 frisky's age: 5
 Setting frisky to 6...
 this 0x7fff5fbff7c8 itsAge 0x7fff00000011 &itsAge 0x7fff5fbff7c8
 this 0x7fff5fbff7c8 itsAge 0x100103a90 &itsAge 0x7fff5fbff7c8 *itsAge 5
 whiskers' age: 5
 copyng frisky to whiskers...
 this 0x7fff5fbff7c8 itsAge 0x100103a90 *itsAge 5 &rhs 0x7fff5fbff7d0
 сравниваем   this (this whiskers) 0x7fff5fbff7c8 &rhs (this frisky) 0x7fff5fbff7d0
 если условие не срабатывает  то присваиваем *itsAge = rhs.GetAge();
 я уже нестал дописывать тут меняем или оставляем значение  с 5 на 6 или
 whiskers' age: 6
 Program ended with exit code: 0
 */

/*

// Листинг 10,15
// конструктор копировщик
#include<iostream>
using namespace std;

class CAT{
public:
    CAT();          // конструктор по умолчанию
    // конструтктор копировальщик и деструктор попущены
    int GetAge() const {return *itsAge;}
    int GetWeight() const {return *itsWeight;}
    void SetAge(int age) {*itsAge = age;}
    CAT & operator = (const CAT &);
private:
    int *itsAge;
    int * itsWeight;
};

CAT::CAT(){
    itsAge = new int;
    itsWeight = new int;
    *itsAge = 5;
    *itsWeight = 9;
}

CAT & CAT::operator=(const CAT & rhs){
    if(this == &rhs)
        return *this;
    *itsAge = rhs.GetAge();
    *itsWeight = rhs.GetWeight();
    return *this;
}

int main(){
    CAT frisky;
    cout << "frisky's age: " << frisky.GetAge() << endl;
    cout << "Setting frisky to 6...\n";
    frisky.SetAge(6);
    CAT whiskers;
    cout << "whiskers' age: " << whiskers.GetAge() << endl;
    cout << "copyng frisky to whiskers...\n";
    whiskers = frisky;
    cout << "whiskers' age: " << whiskers.GetAge() << endl;
    
    return 0;
}

*/