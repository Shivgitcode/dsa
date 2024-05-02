#include <iostream>
using namespace std;


int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    // switch cases cannot contain float values

    // int weekday=2;

    // switch (weekday){
    //     case 1:
    //         cout<<"Monday"<<endl;
    //         break;
    //     case 2:
    //         cout<<"Tuesday"<<endl;
    //         break;
    //     case 3:
    //         cout<<"Wednesday"<<endl;
    //         break;
    //     default:
    //         cout<<"I need to add"<<endl;
    // }

    int a=3,b=3;

    int result=power(a,b);
    cout<<result<<endl;


}