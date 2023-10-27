//22070123114
//exp-14-2
#include<iostream>
using namespace std;
class name{
    public:
    name()
    {
        cout<<"My name is Ray";
    }
};
class Firstname: public name{
};
int main()
{
    Firstname n;
    return 0;
}