#include <iostream>
#include <string.h>

using namespace std;

class phonebook{
    public:
       phonebook()
          {
            count=0;
          }

       void newrecord();           	// new record
       void search();              	// search by name
       void showall();             	// show all
       void displayentry(int i);    // print on screen info

       int menu();

       struct entrystruct
       {
          char name[15];         	// lenghts name
          char phonen[13];       	// lenghts phone number +38 012 1234567 (13)
       };

       entrystruct entries[20]; 	// number of records in db
       int count;
    };

void phonebook::newrecord()         	// new record
{
   cout << "enter name... ";
   cin >> entries[count].name;

   cout << "enter phone... ";
   cin >> entries[count].phonen;

   ++count;
}

void phonebook::displayentry(int i) 	// print on screen info
{
   //cout << " - - - - - " << endl;
   cout << "record = " << entries[i].name << " - " << entries[i].phonen << endl;
}

void phonebook::showall()           	// show all
{
   cout << "number of entries = " << count << endl; // total record in memory
   for(int i = 0; i < count; ++i)
      displayentry(i);
}

void phonebook::search()            	// search by name
{
   char name[32];
   cout << "enter name... ";
   cin >> name;

   for(int i = 0;i < count;++i)
   {
      if(strcmp(name, entries[i].name) == 0)
      {
         cout << "result " << endl;
         displayentry(i);
         cout << endl;
      }
   }
}

phonebook phonebook;

int menu()
{
   int num;
   bool boolquit = false;

   while(boolquit == false)
   {
      cout << "=-=-=-=-= phone book =-=-=-=-=" << endl;
      cout << "(1) enter new contact" << endl;
      cout << "(2) search by nane" << endl;
      cout << "(3) watch all records" << endl;
      cout << "(4) exit" << endl;
      cout << "=-=-=-=-= phone book =-=-=-=-=" << endl;
      cout << endl;
      cout << "please make choose = ";

      cin >> num;
      cout << endl;

      if (num == 1)             	// compar number enter (num)
         phonebook.newrecord();
      else if (num == 2)
         phonebook.search();
      else if (num == 3)
         phonebook.showall();
      else if (num == 4)
         boolquit = true;
      else
         cout << "please make choose = ";
      cout << endl;
   }
   return 0;
}

int main (){

   menu();

   return 0;
}
