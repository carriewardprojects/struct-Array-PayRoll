/*
 * Carrie Ward
 * Created on December 2, 2017, 8:33 PM
 * A simple C++ program that uses an array of structs
 * source: C++ from Control Structures through Objects by Tony Gaddis
 */

#include <iostream>
#include <iomanip>

using namespace std;

struct PayInfo
{
    int hours;      // hours worked per week
    double payRate; // Hourly pay rate
};

int main() {

    const int NUM_WORKERS = 3;      // Number of workers
    PayInfo workers[NUM_WORKERS];   // Array of structs
    int index;

    // Get employee data
    cout << "Enter the hours worked by " << NUM_WORKERS
         << " employees and their hourly rates." << endl;

    for (index = 0; index < NUM_WORKERS; index++)
    {
        // Get the hours worked by an employee
        cout << "Enter hours works by employee #" << (index + 1);
        cout << ": ";
        cin >> workers[index].hours;

        // Get the employee's hourly pay rate
        cout << "Enter hourly pay rate for employee #";
        cout << (index + 1) << "; ";
        cin >> workers[index].payRate;
        cout << endl;
    }

    // Display each employee's gross pay
    cout << fixed << showpoint << setprecision(2);

    for (index = 0; index < NUM_WORKERS; index++)
    {
        double gross;
        gross = workers[index].hours * workers[index].payRate;
        cout << "Employee #" << (index + 1);
        cout << ": $" << gross << endl;
    }

    return 0;
}
