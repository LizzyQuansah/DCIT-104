//10987988
//Write a program that produces the average of all even numbers less than a number

#include <iostream>

using namespace std;

int main()
{
    int number = 2;
    int sum = 0;
    int average;
    while(number < 500)
    {
        sum += number;
        number += 2;
    }
    average = sum / (500 / 2);
    cout << average << endl;
    return 0;
}
