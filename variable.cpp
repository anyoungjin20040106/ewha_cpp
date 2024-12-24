#include<typeinfo>
#include<iostream>

using namespace std;

int main()
{
    cout<<"안녕 is "<<typeid("안녕").name();
    cout<<"\n1.0f is "<<typeid(1.0f).name();
    cout<<"\n1.0 is "<<typeid(1.0).name();
    cout<<"\n1 is "<<typeid(1).name();
    cout<<"\na is "<<typeid('a').name();
    return 0;
}
