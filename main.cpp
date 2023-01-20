

#include <iostream>
#include <math.h>
using namespace std;

void Exercise() {
    long long num,res=1;
    const int num2 = 20;
    cout << "Enter number: ";
    cin>> num; //числа яке вводить користувач
    for (int i = num; i <= num2 ; ++i ) {
        if(i>20){
            break;
        }
        res *= i;
    }
    cout << "Dobytok: "<< res;


}
int main()
{
    Exercise();
    return 0;
}