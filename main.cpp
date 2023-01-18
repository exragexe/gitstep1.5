

#include <iostream>
#include <math.h>

using namespace std;
int num;
int null = 0;


void Exercise() {
    cout << "Enter number: ";
    cin>> num; //числа яке вводить користувач
    do
    {
        cout << null<<" ";
        ++null;

    } while (null <= num);// умова що число додається до i до поки не буде рівне з num


}
int main()
{
    Exercise();
    return 0;
}