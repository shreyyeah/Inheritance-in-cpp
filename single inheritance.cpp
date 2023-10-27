//22070123114
//experiment-14
//Inheritance 
#include<iostream>
using namespace std;
// Base class
class vehicle{ //creating class vehicle
    public:
     string brand="Ford";
     void color(){
        cout<<"Red\n";
     }
};

// derived class
class car:public vehicle{
    public:
     string model="Mustang";
};
int main()
{
    car mycar;
    mycar.color();
    cout<<mycar.brand +" " + mycar.model;
    return 0;
}