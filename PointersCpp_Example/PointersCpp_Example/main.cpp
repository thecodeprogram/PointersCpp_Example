/*
This File Created
By: Burak Hamdi TUFAN
On: https://thecodeprogram.com/
At: 18.04.2020
*/


#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Accessing the Adresses : " << endl;
    int  var_1;
    bool var_2;
    cout << "Address of var_1 is " << &var_1 << endl;
    cout << "Address of var_2 is " << &var_2 << endl;
    cout << "-----------------------------------------" << endl;

    cout << "Define and use the pointers : " << endl;

    int  *p_int_var;   //an integer pointer
    bool *p_bool_var;  //a bool pointer

    var_1 = 33;
    var_2 = true;

    p_int_var = &var_1;
    p_bool_var = &var_2;

    cout << "Value of var_1: " << var_1 << ", Adress is : " << p_int_var << endl;
    cout << "Value of var_2: " << var_2 << ", Adress is : " << p_bool_var << endl;

    cout << "Address of p_int_var : " << p_int_var << " , value is :  " <<*p_int_var << endl;
    cout << "Address of p_bool_var : " << p_bool_var << " , value is :  " <<*p_bool_var << endl;

    cout << "-----------------------------------------" << endl;
    cout << "Arithmetic operations with pointers : " << endl;

    int num1 = 33, num2 =44;

    int *p_num1 = &num1;
    int *p_num2 = &num2;

    int sum = (*p_num1) + (*p_num2);
    int multiply = (*p_num1) * (*p_num2);

    cout << "output of sum is " << sum << " , and multiply is   " << multiply << endl;


    return a.exec();
}
