

#include <iostream>
#include <math.h>

using namespace std;




void Exercise() {
    int num;
    cout <<"Enter number: ";
    cin >>num;
    for (int n = 1; n<=num; ++n) {
        if(num%n ==0){
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