

#include <iostream>
#include <math.h>
using namespace std;
void Exercise(){

    int A;
    cout <<"Enter number: ";
    cin >> A;
    int sum =0;
    while(A>0){
        sum += A % 10;
        A /= 10;
    }
    if(sum*sum*sum == A*A){
        cout <<"True";
    }
    else{
        cout <<"False";
    }
}
int main(){
    Exercise();
    return 0;
}