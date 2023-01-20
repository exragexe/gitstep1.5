

#include <iostream>
#include <math.h>

using namespace std;




void Exercise() {
    int x,y;

    cout << "Enter first number: ";
    cin>> x;
    cout <<"Enter second number: ";
    cin >> y;

    cout <<x<<" in degrees "<< y << " = "<< pow(x,y);


}
int main()
{
    Exercise();
    return 0;
}