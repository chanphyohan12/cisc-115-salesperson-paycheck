#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
    string employeeName = "Kathryn Janeway";
    double baseSalary = 1525.00;
    double salesAmount = 12253.78;
    double commissionRate = 3.2; 
    double commission = 398.25; 
    double expenses = 195.75;

    double total = baseSalary + commission + expenses;

    cout << "Payroll data for " << employeeName << endl << endl;

    cout << fixed << setprecision(2);
    cout << "Base Salary:    " << setw(7) << baseSalary << endl;
    cout << "Commission:      " << setw(7) << commission 
         << " (" << commissionRate << "% of " << salesAmount << ")" << endl;
    cout << "Expenses:        " << setw(7) << expenses << endl;
    cout << "               --------" << endl;
    cout << "Total:          " << setw(7) << total << endl;

    return 0;
}
