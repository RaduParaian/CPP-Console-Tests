#include <iostream>
using namespace std;

int main()
{
    int name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
}

int branch()
{
    //branch
}

/* #include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Enter operator" << endl;
    cout << "+  -  *  /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch (op) {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }
    return 0;
} */