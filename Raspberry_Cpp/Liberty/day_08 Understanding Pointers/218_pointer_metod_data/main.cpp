 // Листинг 8,7
 // Указатели как члены класса
 #include<iostream>
 using namespace std;
 
 class SimpleCat{
 public:
 SimpleCat();
 ~SimpleCat();
 
 void SetAge (int age){
 *itsAge = age;
 }
 void SetWeight (int weight){
 * itsWeight = weight;
 }
 
 int GetAge() const {
 return * itsAge;
 }
 int GetWeight() const {
 return * itsWeight;
 }
 private:
 int * itsAge;
 int * itsWeight;
 };
 
 SimpleCat::SimpleCat(){
 itsAge = new int(2);
 itsWeight = new int(5);
 }
 SimpleCat::~SimpleCat(){
 delete itsAge;
 delete itsWeight;
 }
 
 int main(){
 SimpleCat * Frisky = new SimpleCat;
 cout << "Frisky " << Frisky -> GetAge() << " year old\n" << endl;
 Frisky -> SetAge(5);
 cout << "Frisky " << Frisky -> GetAge() << " year old\n" << endl;
 delete Frisky;
 
 return 0;
 }