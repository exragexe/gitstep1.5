

#include <iostream>
#include <math.h>

using namespace std;
void Exercise() {
    int one=0;
    int sto = 1000;
    int res;
    for (; one <= sto; ) {
        res += ++one -1;
    }

    cout <<"AVG: "<<res / sto;


}
int main()
{
    Exercise();
    return 0;
}