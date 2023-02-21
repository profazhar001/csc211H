#include <iostream>
using namespace std;
int main() {
    cout << "Q37 -page 699 Predict the output! \n";

    // int a[5]={0,1,200,230,40};
    int a[5]={10,12,220,430,40};
    int k=3;
    int *p=a+1;

    cout<<a[k] <<endl;  //A 230
    cout<<*(a+k) <<endl; //B 230
    cout<<*a <<endl; //0
    cout<<a[*a] <<endl; //0
    cout<<a[*a+2] <<endl; //200
    cout<<*p <<endl; // 1
    cout<<p[0]<<endl; //1
    cout<<p[1] <<endl;//200

}