#include<random>
#include<iostream>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1,100);
    int result=dis(gen);

}