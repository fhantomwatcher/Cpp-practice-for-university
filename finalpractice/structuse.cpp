#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary[12];
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee employees[n];
    float maxAvgSalary = -1e9, minAvgSalary = 1e9;
    string maxSalaryEmployee, minSalaryEmployee;

    for (int i = 0; i < n; i++) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "ID: ";
        cin >> employees[i].id;
        
        float sum = 0;
        cout << "Enter 12-month salary: ";
        for (int j = 0; j < 12; j++) {
            cin >> employees[i].salary[j];
            sum += employees[i].salary[j];
        }
        
        float avgSalary = sum / 12;
        if (avgSalary > maxAvgSalary) {
            maxAvgSalary = avgSalary;
            maxSalaryEmployee = employees[i].name;
        }
        if (avgSalary < minAvgSalary) {
            minAvgSalary = avgSalary;
            minSalaryEmployee = employees[i].name;
        }
    }

    cout << "\nEmployee with highest average salary: " << maxSalaryEmployee << " with " << maxAvgSalary << "\n";
    cout << "Employee with lowest average salary: " << minSalaryEmployee << " with " << minAvgSalary << "\n";
    
    return 0;
}
