





#include <iostream>
#include <Windows.h>
using namespace std;

void Exercise() {


    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    unsigned int operation;
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "#===========";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "CONVERTATION VALUTS";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "===========#"<<endl;
    /////// line 1
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "   FUNCTION                    VALUTS";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "    |"<< endl;
    /////// line 2
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "1 - GRN in USD;       GRN:0,027 USD:36,74";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|" << endl;
    /////// line 3
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "2 - USD in GRN;       EURO:0,92 USD:1,08 ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|" << endl;
    /////// line 4
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "3 - EURO in USD;     EURO:0,025 GRN:39,75";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|" << endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "4 - USD in EURO;                         ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|" << endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "5 - EURO in GRN;                         ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|" << endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "6 - GRN in EURO;                         ";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|" << endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout << "#====================";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "=====================#" << endl;
    /////// line 5
    SetConsoleTextAttribute(hConsole, 15);
    for (;;) {
        cout << "Enter number of function: ";

        cin >> operation;
        cout <<"Enter the amount of money: ";
        unsigned int n;
        int exit =0;
        cin>>n;
        switch (operation)
        {
            case 1: {
                cout <<n * 0.027<<endl ;


            }break;
            case 2: {
                cout <<n * 36.74<<endl ;


            }break;
            case 3: {
                cout <<n * 0.92 <<endl;


            }break;
            case 4: {
                cout <<n * 1.08 <<endl;


            }break;
            case 5: {
                cout <<n * 0.025 <<endl;


            }break;
            case 6: {
                cout <<n * 39.75 <<endl;


            }break;

        }
        cout <<"if u wanna exit press - 0"<< endl;
        if(n==exit){
            break;
        }

    }


}
int main()
{
    Exercise();
    return 0;
}