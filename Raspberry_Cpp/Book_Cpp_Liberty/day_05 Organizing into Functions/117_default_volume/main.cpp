// Листинг 5,7 Использование стандортных
// значений параметров
#include<iostream>
using namespace std;

int VolumeCube(int length, int width = 25, int height =1);

int main(){
    int length = 100;
    int width = 50;
    int height = 2;
    int volume;
    
    volume = VolumeCube(length, width, height); //100*50*2 = 10000
    cout << "First volume equals: " << volume << "\n";
 
    volume = VolumeCube(length, width       );  //100*50*1 = 5000
    cout << "Second time volume equals: " << volume << "\n";
    
    volume = VolumeCube(length              );  //100*25*1 = 2500
    cout << "Second time volume equals: " << volume << "\n";
    
    return 0;
}

int VolumeCube(int length, int width, int height){
    return (length * width * height);
}