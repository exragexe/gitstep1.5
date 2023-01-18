

#include <iostream>
#include <Windows.h>
using namespace std;

void Exercise() {
    long FIRSTnum, SECONDnum;
    cout << "Enter first number of diapazon: ";
    cin>> FIRSTnum;
    cout << "Enter second number of diapazon: ";
    cin >> SECONDnum;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    unsigned int operation;
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "#===========";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "FUNCTION";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "===========#"<<endl;
    /////// line 1
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|        ";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "1 - odd numbers";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "       |"<< endl;
    /////// line 2
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|        ";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "2 - even numbers";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "      |" << endl;
    /////// line 3
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "|        ";
    SetConsoleTextAttribute(hConsole, 15);
    cout << "3 - odd number 7";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "      |" << endl;
    /////// line 4
    ///////////////////////////////////
    SetConsoleTextAttribute(hConsole, 4);
    cout << "#===============";
    SetConsoleTextAttribute(hConsole, 4);
    cout << "===============#" << endl;
    /////// line 5
    SetConsoleTextAttribute(hConsole, 15);
    cout << "Enter number: ";

    cin >> operation;
    switch (operation)
    {
        case 1: {
            {if (FIRSTnum < SECONDnum)
                {
                    do
                    {
                        if(FIRSTnum % 2==0){
                            cout << FIRSTnum << " ";
                        }
                        else{

                        }
                        FIRSTnum++;

                    } while (FIRSTnum <= SECONDnum);
                }
                else
                {
                    do
                    {
                        if(SECONDnum %2 ==0){
                            cout << SECONDnum << " ";
                        }
                        else{

                        }
                        SECONDnum++;
                    } while (SECONDnum <= FIRSTnum);
                }}



        }break;
        case 2: {
            {if (FIRSTnum < SECONDnum)
                {
                    do
                    {
                        if(FIRSTnum %3 ==0){
                            cout << FIRSTnum << " ";
                        }
                        else{

                        }
                        FIRSTnum++;
                    } while (FIRSTnum <= SECONDnum);
                }
                else
                {
                    do
                    {
                        if(SECONDnum %3==0){
                            cout << SECONDnum << " ";
                        }
                        else{

                        }
                        SECONDnum++;
                    } while (SECONDnum <= FIRSTnum && SECONDnum % 3 == 0);
                }}

        }break;
        case 3: {
            {if (FIRSTnum < SECONDnum)
                {
                    do
                    {
                       if(FIRSTnum %7==0){
                           cout << FIRSTnum << " ";
                       }
                       else{

                       }
                        FIRSTnum++;
                    } while (FIRSTnum <= SECONDnum);
                }
                else
                {
                    do
                    {
                        if(SECONDnum %7==0){
                            cout << SECONDnum << " ";
                        }
                        else{

                        }
                        SECONDnum++;
                    } while (SECONDnum <= FIRSTnum);
                }}

        }break;
        default:
            cout << "Can`t do operation";
            break;
    }


}
int main()
{
    Exercise();
    return 0;
}