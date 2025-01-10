#include<iostream>
using namespace std;

class a
{
    int b;//size of int 4 byte
    char c;//size of char is 1 byte but ans will be 8 byte due to padding

};

int main(){
    a obj;
    cout<<sizeof(obj)<<"";
}