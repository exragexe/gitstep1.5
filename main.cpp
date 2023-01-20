

#include <iostream>
#include <math.h>

using namespace std;




void Exercise() {
    int num,res;
    const int num2 = 500;
    cout << "Enter number: ";
    cin>> num; //числа яке вводить користувач
    for (int i = num; i <= num2 ; ++i ) {
        res +=i;
        
    }
    cout << "Suma: "<< res-2;


}
int main()
{
    Exercise();
    return 0;
}