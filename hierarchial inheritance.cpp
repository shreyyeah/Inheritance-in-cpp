//22070123114
//hierarchial inheritance 
#include<iostream>
using namespace std;

class colour //creating class colour
{
public:
void show_colour() {
	cout<<"class colour"<<endl;
}
};
class Blue : public colour
{
public:
void show_Blue() {
	cout<<"class Blue"<<endl;
}
};

class Orange : public colour
{
public:
void show_Orange() {
	cout<<"class Orange"<<endl;
}
};

int main() {
Blue b; 
cout<<"calling from Blue: "<<endl;
b.show_Blue();
b.show_colour();
	
Orange c; 
cout<<"calling from Orange: "<<endl;
c.show_Orange();
c.show_colour();
return 0;
}