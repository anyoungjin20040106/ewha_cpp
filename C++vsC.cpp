#include<iostream>//C언어는 stdio.h지만 C++은 iostream이다
#include<typeinfo>
using namespace std;//std안에있는 한수나 변수를 가져온다

int main(){
    string name;//string은 문자열이다
    int age={};
    cout<<"이름을 입력해주세요 : ";//printf대신 cout 혹은 std::cout
    cin>>name;//scanf대신 cin
    cout<<"나이를 입력해주세요 : ";//printf대신 cout 혹은 std::cout
    cin>>age;
    cout<<"이름 : "<<name<<"\n나이 : "<<age;
    cout<<"\n이름의 자료형 : "<<typeid(name).name()<<"\n나이의 자료형 : "<<typeid(age).name();
    cout<<"\n나이를 char로 바꾸어 보자 : "<<typeid(static_cast<char>(age)).name();
    return 0;
}