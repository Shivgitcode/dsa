#include <iostream>
using namespace std;


int main(){
    int x; // int 4 byte
    int y;
    float z; // float stores 8 byte
    char ch='a'; // char 1 byte
    bool isProgrammer=true; //
    // double d =1.23; // 8 byte
    int a=123;
    cout<<"size of a is :"<<sizeof(a)<<endl;


    // this is called typecasting 

    int b='a';
    cout <<b<<endl; //prints the ascii value of a 

    int d=2/5 ;//prints 0  dividing  integer by integer

    cout<<d<<endl;

    int e=2.0/5; //prints 0 bcs storing inside integer
    cout<<e<<endl;

    float f=2.0/5; //prints 0.4 

    cout<<f<<endl;
    // logical op  && || !

    int a =0;
    cout<<!a<<endl;



    cout<<"Hello world"<<endl;
    
}