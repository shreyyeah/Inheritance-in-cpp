//22070123114
//exp-14
#include<iostream>
using namespace std;
class name
{
    public:
name(){
    cout<<"My name is Ray"<<endl;
}

};
class prn{
    public:
    prn()
    {
        cout<<"My prn is 114";
    }
};
class student: public name,public prn{};
int main()
{
    student b2;
    return 0;
}