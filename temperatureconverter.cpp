#include <iostream>

using namespace std;

int main(){
  double lower, higher, step;
    cout<<"Please give in a lower limit, limit >= 0: ";
    cin>>lower;
    cout<<"Please give in a higher limit, 10 < limit <= 50000: ";
    cin>>higher;
    cout<<"Please give in a step, 0 < step <= 10: ";
    cin>>step;
    
    cout<<"Celsius\t\tFahrenheit"<<endl;
    cout<<"_______\t\t__________"<<endl;

    for(double i = lower; i <= higher; i+=step){
      cout<<i<<"\t\t"<<1.8*i+32<<endl;
    }
    return 0;

}
