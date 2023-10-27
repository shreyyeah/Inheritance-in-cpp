//22070123114
//exp-14-3
#include<iostream>
using namespace std ;
class firstname
{
    public:
    firstname()
    {
        cout<<"This is Ray";
    }
};
class name: public firstname{

};
class Fullname : public name{

};
int main()
{
    Fullname n;
    return 0;
};
