 // Листинг 7.4
 // Пример использования оператора break и continue
 #include<iostream>
 using namespace std;
 
 int main(){
 unsigned short small;
 unsigned long large;
 unsigned long skip;
 unsigned long target;
 const unsigned short MAXSMALL=65535;
 
 cout << "Enter a small number: ";
 cin >> small;
 cout << "Enter a large number: ";
 cin >> large;
 cout << "Enter a skip number: ";
 cin >> skip;
 cout << "Enter a target number: ";
 cin >> target;
 
 cout << "\n";
 // установка условий продолжения цикла
 
 while(small < large && large > 0 && small < MAXSMALL){
     small++;
     if(small % skip == 0){   // уменьшить значение large
         cout << "skipping on: " << small << endl;
     }
     if(large == target){    // проверка попадания в цель
         cout << " Target reached!";
         break;
     }
     large-=2;
}                           // конец цикла
cout << "\nSmall: " << small << " Large: " << large << endl;
return 0;
}
