#include<iostream>
#include<typeinfo>//typeid를 쓸수 있게 해주는 해더파일

using namespace std;

int main()
{
    int a={};
    //변수를 입력받을 때는 cin>>변수를 쓴다
    cin>>a;
    //내용을 출력할떄는 때는 cout<<변수&내용<<변수&내용를 쓴다
    //++a는 먼저 1을 더하고 코드를 실행한다
    cout<<"++a is "<<++a<<"\n";
    //a++는 먼저 코드를 실행하고 1을 더한다
    cout<<"a++ is "<<a++<<"\n";
    cout<<"a++ after "<<a<<"\n";
    //해당 변수의 자료형을 보고싶으면 typeid(변수명).name()
    cout<<"a의 자료형 : "<<typeid(a).name()<<"\n";
    //해당 변수의 자료형을 바꾸고 싶다면 static_cast<char>(변수명)
    cout<<"static_cast<char>(a)의 자료형 : "<<typeid(static_cast<char>(a)).name()<<"\n";
    return 0;
}
