#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int total,x;
    float last;
    char z;
    
    
    while(x <=2){
	

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
    else{
       cout <<"No discout"<<endl;
       last = total;
	}
    x++;
    cout <<"last price  :"<<setiosflags(ios::fixed)<<setprecision(2)<<last<<endl<<endl;
    
    cout <<"Do you want to enter more (y or n):";
    cin >> z;
    if(z == 'y'){
    	x = 2;
	}
	else{
		x = 3;
		cout <<"Thank you!"<<endl;
	}
    

}
    return 0;
}
