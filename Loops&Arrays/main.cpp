/*
1. Assign 10 random numbers to an array. Compute the average value of the numbers in the array. Use a for loop for your solution.
2. Assign 5 names to an array. Display the names in reverse order. Use a for loop for your solution.
3. Rewrite Exercise 1 with a range for loop.
4. Draw this pattern on your screen using for loops:

*
**
***
****
*****

*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //1
    cout << "QUESTION 1" << endl;
    srand(time(0));
    int grade;
    const unsigned numGrades = 9;
    int Grades[numGrades];
    int sum = 0;
    double average = 0.0;
    cout << "Array: ";
    for (unsigned i = 0; i <= numGrades; ++i)
    {
        Grades[i] = rand() % 50 + 50;
        cout << Grades[i] << " ";
        sum = sum + Grades[i];
    }
    cout << "\n" << "Sum: " << sum << endl;
    average = sum / (numGrades + 1);
    cout << "Average: " << average << endl << endl;

    //2
    cout << "QUESTION 2" << endl;
    string name;
    string Names[5];
    Names[0] = "Joe";
    Names[1] = "Jim";
    Names[2] = "Billy";
    Names[3] = "Bob";
    Names[4] = "John";
    for (int i = 0; i < 5; ++i)
    {
        cout << Names[i] << " ";
    }
    cout << "\n" << "Array reversed: ";
    for (int i = 4; i >= 0; --i)
    {
        cout << Names[i] << " ";
    }
    cout << endl <<endl;

    //3 Could not figure out how get the loop working. Output was always a repeating number or set of numbers
    cout << "QUESTION 3" << endl;
    /*srand(time(0));
    int num;
    const unsigned numSize = 9;
    int Numbers[numSize];
    int numSum = 0;
    double numAvg = 0.0;
    cout << "Array: ";
    for (int numSize : Numbers)
    {
        Numbers[numSize] = rand() % 50 + 50;
        cout << num << " ";
        numSum = numSum + Numbers[numSize];
    }
    cout << "\n" << "Sum: " << numSum << endl;
    numAvg = numSum / (numSize + 1);
    cout << "Average: " << numAvg << endl << endl;*/
    cout << endl;

    //4
    cout << "QUESTION 4" << endl;
    string star = "";
    int n = 5;
    for (int i = 1; i <= n; ++i)
    {
        star = star + "*";
        cout << star << endl;
    }
    //return 0;
}
