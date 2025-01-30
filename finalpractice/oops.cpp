#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;

public:
    // Constructor
    Employee(string empName, int empId, float empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
        cout << "Constructor called for " << name << "\n";
    }

    // Getter Methods (Encapsulation)
    string getName() { return name; }
    int getId() { return id; }
    float getSalary() { return salary; }

    // Setter Method
    void setSalary(float newSalary) {
        if (newSalary > 0) {
            salary = newSalary;
        }
    }

    // Display Method
    void display() {
        cout << "Employee ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for " << name << "\n";
    }
};

int main() {
    // Creating objects using the constructor
    Employee emp1("John Doe", 101, 50000);
    Employee emp2("Jane Smith", 102, 60000);

    // Display employee details
    emp1.display();
    emp2.display();

    // Modify salary using setter
    emp1.setSalary(55000);
    cout << "\nAfter salary update:\n";
    emp1.display();

    return 0;
}
