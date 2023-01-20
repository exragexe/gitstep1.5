

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
using namespace std;
using namespace chrono;
void Exercise(){
    auto start = high_resolution_clock::now();
    int n,formula;
    int x= 1;
    int exit =0;
    srand(time(0));
    int zagadane = rand() % 500 +1;



    cout <<"====GAME - Guess the number===="<<endl;


    for(;;){


        cout <<"Enter number: ";
        cin >>n;

        if(n == exit){

            break;
        }
        else if(zagadane > n){
            cout <<"you need more number, try again(if u wanna exit print - 0)"<< endl;
            ++x;
            continue;
        }

        else if(zagadane < n){
            cout <<"you need smaller numbers, try again(if u wanna exit print - 0)"<<endl;
            ++x;
            continue;
        }

        else if (n == zagadane){

            cout <<"You won!"<<endl;
            cout <<"Number of attempts: "<< x <<endl;

            break;
        }
        else{
            cout <<"Error";
            break;
        }
    }
    auto finish = high_resolution_clock::now();
    duration<double> elapsed = finish - start;
    cout <<"Elapsed time: "<< elapsed.count()<<" seconds" <<endl;

}
int main(){
    Exercise();
    return 0;
}