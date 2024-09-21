#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

void show_calculator()
{
    system("cls");
    cout<<"----------------------------------------------"<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"-                 CALCULATOR                 -"<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-    1/x     |  x^2   |    sqrt     |    /   -"<<endl;
    cout<<"-(R)eciprocal|(S)quare|Square (r)oot| Divide -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-     7      |   8    |      9      |    *   -"<<endl;
    cout<<"-            |        |             |Multiply-"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-     4      |    5   |      6      |    -   -"<<endl;
    cout<<"-            |        |             |  Minus -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"      3      |    2   |      1      |    +   -"<<endl;
    cout<<"-            |        |             |   Add  -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-    X       |    0   |      C      |    =   -"<<endl;
    cout<<"-  Delete    |        |    Close    |  Equal -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;

}

void display_answer(double c)
{
    system("cls");
     cout<<"----------------------------------------------"<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"          Answer:      "<<c<<"                 "<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-    1/x     |  x^2   |    sqrt     |    /   -"<<endl;
    cout<<"-(R)eciprocal|(S)quare|Square (r)oot| Divide -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-     7      |   8    |      9      |    *   -"<<endl;
    cout<<"-            |        |             |Multiply-"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-     4      |    5   |      6      |    -   -"<<endl;
    cout<<"-            |        |             |  Minus -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"      3      |    2   |      1      |    +   -"<<endl;
    cout<<"-            |        |             |   Add  -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-    X       |    0   |   (C)lose   |    =   -"<<endl;
    cout<<"-  Delete    |        |             |  Equal -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;

}

void show_operation(double a, double b, char operation)
{
    system("cls");
    cout<<"----------------------------------------------"<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"                     "<<a<<operation<<b<<"                     "<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-    1/x     |  x^2   |    sqrt     |    /   -"<<endl;
    cout<<"-(R)eciprocal|(S)quare|Square (r)oot| Divide -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-     7      |   8    |      9      |    *   -"<<endl;
    cout<<"-            |        |             |Multiply-"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-     4      |    5   |      6      |    -   -"<<endl;
    cout<<"-            |        |             |  Minus -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"      3      |    2   |      1      |    +   -"<<endl;
    cout<<"-            |        |             |   Add  -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-    X       |    0   |   (C)lose   |    =   -"<<endl;
    cout<<"-  Delete    |        |             |  Equal -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;

}

void show_operation_1_variable(double a, string operation)
{
     system("cls");
    cout<<"----------------------------------------------"<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"                 "<<operation<<a<<"                   "<<endl;
    cout<<"---                                        ---"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-    1/x     |  x^2   |    sqrt     |    /   -"<<endl;
    cout<<"-(R)eciprocal|(S)quare|Square (r)oot| Divide -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-     7      |   8    |      9      |    *   -"<<endl;
    cout<<"-            |        |             |Multiply-"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-     4      |    5   |      6      |    -   -"<<endl;
    cout<<"-            |        |             |  Minus -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"      3      |    2   |      1      |    +   -"<<endl;
    cout<<"-            |        |             |   Add  -"<<endl;
     cout<<"----------------------------------------------"<<endl;
    cout<<"-    X       |    0   |   (C)lose   |    =   -"<<endl;
    cout<<"-  Delete    |        |             |  Equal -"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"----------------------------------------------"<<endl;

}

double multiplication()
{
    system("cls");
    cout<<"Please enter two numbers!"<<endl;
    double a,b;
    cin>>a;
    cin>>b;
    show_operation(a,b,'*');
    return a*b;
}

double division()
{
    system("cls");
    cout<<"Please enter two numbers!"<<endl;
    double a,b;
    cin>>a>>b;
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    show_operation(a,b,'/');
    return a/b;
}

double addition()
{
    system("cls");
    cout<<"Please enter two numbers!"<<endl;
    double a,b;
    cin>>a>>b;
    show_operation(a,b,'+');
    return a+b;
}

double subtraction()
{
    system("cls");
    cout<<"Please enter two numbers!"<<endl;
    double a,b;
    cin>>a>>b;
    show_operation(a,b,'-');
    return a-b;
}

double reciprocal()
{
    system("cls");
    cout<<"Please enter a number!"<<endl;
    double a;
    cin>>a;
     if (a == 0) {
        cout << "Error: Reciprocal of zero is not defined." << endl;
        return 0;
    }
    show_operation_1_variable(a,"1/");
    return 1/a;
}

double square()
{
    system("cls");
    cout<<"Please enter a number!"<<endl;
    double a;
    cin>>a;
    show_operation_1_variable(a,"square of ");
    return (a*a);
}

double square_root()
{
    system("cls");
    cout<<"Please enter a number!"<<endl;
    double a;
    cin>>a;
    if (a < 0) {
        cout << "Error: Square root of a negative number is not allowed." << endl;
        return 0;
    }
    show_operation_1_variable(a,"square root of ");
    return sqrt(a);
}

int main()
{
    show_calculator();
    int ok=1;
    double c=0;
    
    while(ok)
    {
        cout<<"Choose an operation ";
        switch(_getch())
        {
            case '*': 
                {
                c=multiplication();
                break; 
                }
            case '+':
                {
                c=addition();
                break;
                }
            case '-': 
                {
                c=subtraction();
                break;
                }
            case '/': 
                {
                c=division();
                break;
                }
            case 'R': 
                {
                c=reciprocal();
                break;
                }
            case 'S': 
                {   
                c=square();
                break;
                }
            case 'r':
                {
                c=square_root();
                break;
                }
            case '=': 
                {
                display_answer(c);
                break;
                }
            case 'X':
                {
                show_calculator();
                break;
                }
            case 'C':
                {
                system("cls");
                cout<<"Calculator closed succesfuly!";
                ok=0; 
                }
        }
    }
    return 0;
}