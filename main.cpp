

#include <iostream>
#include <math.h>
using namespace std;

void Exercise(){
    int firstm,secondm;
    int res =0;
    cout <<"Enter first limit: ";
    cin >> firstm;
    cout <<"Enter second limit: ";
    cin >> secondm;
    for (int i = firstm; i <= secondm; i++)
    {
        res += i;
    }
    cout << "Suma:  " << res << endl;
    
}
int main(){
    Exercise();
    return 0;
}