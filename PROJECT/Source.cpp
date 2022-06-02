#include<iostream>
#include<string>
using namespace std;
string d0 = " \
         ******** \n \
         *      * \n \
         *      * \n \
         *      * \n \
         *      * \n \
         *      * \n \
         ******** \n \
        ";


string d1 = " \
             *   \n \
            **   \n \
           * *   \n \
          *  *   \n \
             *   \n \
             *   \n \
             *   \n \
        ";

string d2 = " \
         ******** \n \
                * \n \
                * \n \
         ******** \n \
         *        \n \
         *        \n \
         ******** \n \
        ";

string d3 = " \
         ******** \n \
                * \n \
                * \n \
         ******** \n \
                * \n \
                * \n \
         ******** \n \
        ";

string d4 = " \
         *      * \n \
         *      * \n \
         *      * \n \
         ******** \n \
                * \n \
                * \n \
                * \n \
        ";


string d5 = " \
         ******** \n \
         *        \n \
         *        \n \
         ******** \n \
                * \n \
                * \n \
         ******** \n \
        ";


string d6 = " \
         ******** \n \
         *        \n \
         *        \n \
         ******** \n \
         *      * \n \
         *      * \n \
         ******** \n \
        ";

string d7 = " \
         ******** \n \
                * \n \
                * \n \
                * \n \
                * \n \
                * \n \
                * \n \
        ";

string d8 = " \
         ******** \n \
         *      * \n \
         *      * \n \
         ******** \n \
         *      * \n \
         *      * \n \
         ******** \n \
        ";

string d9 = " \
         ******** \n \
         *      * \n \
         *      * \n \
         ******** \n \
                * \n \
                * \n \
         ******** \n \
        ";

string plus_sign = " \
             *      \n \
             *      \n \
             *      \n \
       ************ \n \
             *      \n \
             *      \n \
             *      \n \
        ";


string mult = " \
        *       *\n \
         *     * \n \
          *   *  \n \
           * *   \n \
            *    \n \
           * *   \n \
          *  *   \n \
         *    *  \n \
        *      * \n \   ";



void Show(int num1,int num2,int sign) {
    if (num1 == 1) {
        cout << d1 << endl;
    }
    else if (num1 == 2) {
        cout << d2 << endl;
    }
    else if (num1 == 3) {
        cout << d3 << endl;
    }
    else if (num1 == 4) {
        cout << d4 << endl;
    }
    else if (num1 == 5) {
        cout << d5 << endl;
    }
    else if (num1 == 0) {
        cout << d0 << endl;
    }

    if(sign==1) cout << plus_sign << endl;
    else if(sign==0) cout << mult << endl;

    if (num2 == 1) {
        cout << d1 << endl;
    }
    else if (num2 == 2) {
        cout << d2 << endl;
    }
    else if (num2 == 3) {
        cout << d3 << endl;
    }
    else if (num2 == 4) {
        cout << d4 << endl;
    }
    else if (num2 == 5) {
        cout << d5 << endl;
    }
    else if (num2 == 0) {
        cout << d0 << endl;
    }

    cout << "   ========================" << endl;
}

#include<Windows.h>
#include<conio.h>

void main() {
    while (true)
    {
        srand(time(0));
        system("cls");

        system("color 7");
        int num1 = 0; int num2 = 0;

        num1 = rand() % (5 - 1);
        num2 = rand() % (5 - 1);
        int sign = rand() % (2);


        Show(num1, num2, sign);

        int result = _getch();
        result = result - 48;
        if (result == 1) {
            cout << d1 << endl;
        }
        else if (result == 2) {
            cout << d2 << endl;
        }
        else if (result == 3) {
            cout << d3 << endl;
        }
        else if (result == 4) {
            cout << d4 << endl;
        }
        else if (result == 5) {
            cout << d5 << endl;
        }
        else if (result == 6) {
            cout << d6 << endl;
        }
        else if (result == 7) {
            cout << d7 << endl;
        }
        else if (result == 8) {
            cout << d8 << endl;
        }
        else if (result == 9) {
            cout << d9 << endl;
        }
        else if (result == 0) {
            cout << d0 << endl;
        }

        if (sign == 1) {

            if (result == num1 + num2) {
                system("color 2");
            }
            else {
                system("color 4");
            }
        }
        else if (sign == 0) {
            if (result == num1 * num2) {
                system("color 2");
            }
            else {
                system("color 4");
            }
        }
        Sleep(2000);

    }
}





