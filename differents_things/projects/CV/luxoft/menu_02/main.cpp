/*record the phone number of a person*/
//vector will be used so that vector library will be used

#include<iostream>
#include<string>
#include<vector>

using namespace std;
vector<string>Names;
vector<string>Phones;

//the program will have 3 sections to add a contact, search for a contact using ID, and search for contact using name

void NewContact();
void SearchByID();
void SearchByName();

int main()
{
int sel=0;
while(true) /*infinite loop used here*/
{

cout<<"choose a number to execute a option\n";
cout<<"[1]New Contact\n";
cout<<"[2]Search by ID\n";
cout<<"[3]Search by Name\n";
cout<<"[4]Exit\n";
cout<<"your choice:";
cin>>sel;
switch(sel)
{

case 1:
NewContact();
break;
case 2:

SearchByID();
break;
case 3:
SearchByName();
break;
default:
cout<<"sorry";
break;
}
if(sel==4)
{
break;
}
}

return 0;
}
void NewContact()
{

string name;
string phone;
cout<<"enter your contact's name and phone\n";
cin>>name>>phone;
cout<<"the id for this contact will be\n"<<name<<endl<<phone;
Names.push_back(name);
Phones.push_back(phone);
}
void SearchByID()
{

int value;
cout<<"enter your contact's id that you need to search";
cin>>value;
if(value>=Names.size())
{

cout<<"this id does not exist\n";
return; /*return is used here to terminate the function*/
}
cout<<"information for contact\n";
cout<<"Name"<<Names[value]<<endl; /*[] index is this and this is used to differentiate the values within the vector*/
cout<<"Phone"<<Phones[value]<<endl;
}
void SearchByName()
{

bool found=false; /*bool is a data type that is only true or false, it will tell us if the search was either successful or failed*/
string name;
cout<<"enter the name to search\n";
cin>>name;
for(int i=0;i!=Names.size();i++)
{
if(Names[i]==name)
{

cout<<"Name:"<<Names[i]<<endl;
cout<<"Phone:"<<Phones[i]<<endl;
found=true;

}

}
if(!found)
{
cout<<"Not found"<<endl;
}

}
