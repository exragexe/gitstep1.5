

#include <iostream>
#include <math.h>
using namespace std;

void Exercise() {
    int num,res;
    cout << "Enter number: ";
    cin>> num; //числа яке вводить користувач
    for (int i = 1; i <=10 ; ++i ) {
        res = num * i;
        cout << num<<"*"<<i<<" = "<<res<<endl;

    }

}
int main()
{
    Exercise();
    return 0;
}
