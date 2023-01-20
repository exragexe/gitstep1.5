

#include <iostream>
#include <math.h>
using namespace std;

void Exercise() {
    int num;
    cin >> num;
    int new_num = 0;
    int digit, place = 1;
    while (num > 0) {
        digit = num % 10;
        if (digit != 3 && digit != 6) {
            new_num += digit * place;
            place *= 10;
        }
        num /= 10;
    }
    cout << new_num << endl;

}
int main()
{
    Exercise();
    return 0;
}