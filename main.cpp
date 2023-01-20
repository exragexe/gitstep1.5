

#include <iostream>
#include <math.h>

using namespace std;




void Exercise() {
    int num,num2;
    cout <<"Enter first number: ";
    cin >>num;
    cout <<"Enter second number: ";
    cin >>num2;
    for (int n = 1; n<=num; ++n) {
        if(num%n ==0&&num2%n==0){
            cout <<n<<" ";
        }
        else{
            cout <<"";
        }


    }



}
int main()
{
    Exercise();
    return 0;
}