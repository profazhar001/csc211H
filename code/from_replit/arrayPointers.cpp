#include <iostream>
using namespace std;


int main() {
    cout << "Hello World!\n";

    int *count, *arrayptr;
    count= new int;
    cout<<"How many students";
    cin>>*count;

    //create a dynamic integer pointer called arrayptr with the count variable
    arrayptr= new int[*count];

    for(int i=0; i<*count; i++)
    {
        cout<<"Enter Score: " <<i <<" :";
        cin>>arrayptr[i];

    }
    for(int i=0; i<*count; i++)
    {
        cout<<"Score " << i<<" : "<<arrayptr[i] <<endl;

    }

    delete [] arrayptr;
    delete count;
    arrayptr=nullptr;
    count=nullptr;

    return 0;

}