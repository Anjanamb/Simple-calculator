#include <iostream>
using namespace std;
int main()
{
    // Calculator

    float num1, num2;
    char operation;
    cout << "**AJ Calculator**" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation) // switch statement
    {
    case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
    case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);// 5==5.0
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int) // (isNum1Int == true && isNum2Int == true)
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        else
            cout << "Not valid!";
        break;
    default:cout << "Not valid operation!" << endl; // break;
    }

    system("pause>0");
}
