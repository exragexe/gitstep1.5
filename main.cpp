

#include <iostream>
using namespace std;
void Exercise(){

    int num, sum = 0;
    cout << "Enter numbers, enter 0 to stop: ";
    cin >> num;
    while (num != 0) {
        sum += num;
        cin >> num;
    }
    cout<< "Suma: "<<sum;
}
int main(){
    Exercise();
    return 0;
}