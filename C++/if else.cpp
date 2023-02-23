#include <iostream>
#include <iomanip>
using namspace std;

int main(){

    int total;
    float last;

    cout <<"Enter the total price :";
    cin >>total;

    if(total >10000){

        last = (float)(total - (total *0.25));

    }
    else if(total >5000){

        last = (float)(total - (total *0.15));
    }
    else if(total > 3000){
        last = (float)(total - (total *0.1));
    }
    
    cout <<"last price  :"<<setiosflags(ios::fixed)<<setprecision(2)<<last<<endl;


    return 0;