

#include <iostream>
#include <math.h>
using namespace std;

void Exercise() {
    int n;
    for (int i = 100; i <=999 ; ++i) {
        if(i/10%10 == i%10){
            ++n;

        }
        else if(i/100%10==i/10%10){
            ++n;

        }
        else if(i/100 %10==i%10){
            ++n;

        }
        else{
            continue;
        }

    }
    cout <<"Kolvo chisel: "<< n;


    //числа яке вводить користувач 1.if(i/10%10 == i%10) 2.if(i/100%10==i/10%10) 3.if(i/100 %10==i%10)


}
int main()
{
    Exercise();
    return 0;
}