#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    string name;
    int id;
    int marks[5];
};

void input_students(Student students[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Enter name, id and 5 marks for student " << i + 1 << ": ";
        cin >> students[i].name >> students[i].id;
        for (int j = 0; j < 5; ++j) {
            cin >> students[i].marks[j];
        }
    }
}

void display_students_above_threshold(Student students[], int n, int threshold) {
    cout << "Students scoring above " << threshold << ":\n";
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum += students[i].marks[j];
        }
        if (sum / 5 > threshold) {
            cout << students[i].name << endl;
        }
    }
}

struct Book {
    string title;
    string author;
    string ISBN;
    double price;
};

void add_book(Book books[], int &count, string title, string author, string ISBN, double price) {
    books[count++] = {title, author, ISBN, price};
}

void search_book_by_title(Book books[], int count, string title) {
    for (int i = 0; i < count; ++i) {
        if (books[i].title == title) {
            cout << "Found book: " << books[i].title << " by " << books[i].author << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

void display_books_under_price(Book books[], int count, double price) {
    cout << "Books under $" << price << ":\n";
    for (int i = 0; i < count; ++i) {
        if (books[i].price < price) {
            cout << books[i].title << " by " << books[i].author << ", $" << books[i].price << endl;
        }
    }
}

struct Employee {
    int id;
    string name;
    string position;
    double salary;
};

void find_highest_salary(Employee employees[], int n) {
    Employee highest = employees[0];
    for (int i = 1; i < n; ++i) {
        if (employees[i].salary > highest.salary) {
            highest = employees[i];
        }
    }
    cout << "Highest salary: " << highest.name << ", $" << highest.salary << endl;
}

void list_employees_by_position(Employee employees[], int n, string position) {
    cout << "Employees in " << position << " position:\n";
    for (int i = 0; i < n; ++i) {
        if (employees[i].position == position) {
            cout << employees[i].name << endl;
        }
    }
}

void sum_matrices(int* A, int* B, int* C, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            *(C + i * cols + j) = *(A + i * cols + j) + *(B + i * cols + j);
        }
    }
}

void print_matrix(int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << *(matrix + i * cols + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int x = 15, y = 20;
    cout << "Larger number: " << (x > y ? x : y) << endl;

    Student students[3];
    input_students(students, 3);
    display_students_above_threshold(students, 3, 70);

    Book books[10];
    int book_count = 0;
    add_book(books, book_count, "C++ Programming", "John Doe", "123456789", 39.99);
    search_book_by_title(books, book_count, "C++ Programming");
    display_books_under_price(books, book_count, 50);

    Employee employees[3] = {{101, "John", "Manager", 50000}, {102, "Jane", "Developer", 60000}, {103, "Mike", "Developer", 55000}};
    find_highest_salary(employees, 3);
    list_employees_by_position(employees, 3, "Developer");

    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    sum_matrices((int*)A, (int*)B, (int*)C, 2, 2);
    print_matrix((int*)C, 2, 2);

    return 0;
}
