 #include <iostream>
#include <limits>
using namespace std;

// structure for book
struct Book {
    string bookName;
    string bookAuthor;
    int bookId;
};

// structure for student
struct Student {
    int studentId;
    string studentName;
};

// structure for staff
struct Staff {
    int staffId;
    string staffName;
};
void start () {
 cout << "\t\t\t\t...............................................\t\t\t" << endl;
        cout << "\t\t\t\tWelcome to  E-Library Management System \t\t\t" << endl;
        cout << "\t\t\t\tDeveloped by Hassnain Ali \t\t\t" << endl;
          cout << "\t\t\t\t M.Ramiq Khan  \t\t\t" << endl;
            cout << "\t\t\t\t Saifullah Bhutto \t\t\t" << endl;
        cout << "\t\t\t\t...............................................\t\t\t" << endl;
        cout << "\t\t\t\t................................................" << endl;
        cout << "\n\t\t\t\t#################################################" << endl;
}
void welcome (){
cout << "\t\t\t\tWelcome to E-Library management system \t\t\t" << endl ;
}
// function for book issue
void bookIssue() {
    int bookID, studentID;
    cout << "Enter book ID: ";
    cin >> bookID;
    cout << "Enter student ID: ";
    cin >> studentID;
    cout << "Book issued successfully.\n";
}

//c function for book deposit
void bookDeposit() {
    int bookID, studentID;
    cout << "Enter book ID: ";
    cin >> bookID;
    cout << "Enter student ID: ";
    cin >> studentID;
    cout << "Book deposited successfully.\n";
}

// function to add books
void addBook(Book* books, int& n) {
    string bookName, bookAuthor;
    int bookId;

    cout << "Enter book name: ";
    cin.ignore(); // Ignore any previous newline character
    getline(cin, bookName);

    cout << "Enter name of author: ";
    getline(cin, bookAuthor);

    cout << "Enter book ID: ";
    cin >> bookId;

    books[n].bookName = bookName;
    books[n].bookAuthor = bookAuthor;
    books[n].bookId = bookId;

    n++;

    cout << "Book " << bookName << " added successfully.\n";
}

// function to delete books
void deleteBook(Book* books, int &n) {
    int bookId ;
    cout << "Enter book ID: ";
    cin >> bookId;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (books[i].bookId == bookId) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Book not found.\n";
    } else {
        for (int i = index; i < n - 1; i++) {
            books[i] = books[i + 1];
        }
        n--;
        cout << "Book deleted successfully.\n";
    }
}

// function to update books
void updateBook(Book* books, int n) {
    int bookId;
    cout << "Enter book ID: ";
    cin >> bookId;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (books[i].bookId == bookId) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Book not found.\n";
    } else {
        string newName;
        cout << "Enter new book name: ";
        cin.ignore(); // Ignore any previous newline character
        getline(cin, newName);
        books[index].bookName = newName;
        cout << "Book updated successfully.\n";
    }
}

// function to search books
void searchBook(Book* books, int n) {
    int bookId;
    cout << "Enter book ID: ";
    cin >> bookId;
    for (int i = 0; i < n; i++) {
        if (books[i].bookId == bookId) {
            cout << "Book found successfully.\n";
            break;
        }
    }
}

// function to list all books
void listBooks(Book* books, int n) {
    cout << "List of all books:\n";
    cout << "Book ID\tBook Name\tBook Author\n";
    for (int i = 0; i < n; i++) {
        cout << books[i].bookId << "\t" << books[i].bookName << "\t" << books[i].bookAuthor << "\n";
    }
    cout << "List displayed successfully.\n";
}

// function to add students
void addStudent(Student* students, int& m) {
    int MAX_STUDENTS = 100;
    if (m < MAX_STUDENTS) {
        cout << "Enter student ID: ";
        cin >> students[m].studentId;

        cout << "Enter student name: ";
        cin.ignore(); // Ignore any previous newline character
        getline(cin, students[m].studentName);

        cout << "Student added successfully.\n";
        m++;
    } else {
        cout << "Cannot add more students. Maximum limit reached.\n";
    }
}

// function to delete students
void deleteStudent(Student* students, int& m) {
    int studentId;
    cout << "Enter student ID: ";
    cin >> studentId;
    int index = -1;
    for (int i = 0; i < m; i++) {
        if (students[i].studentId == studentId) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Student not found.\n";
    } else {
        for (int i = index; i < m - 1; i++) {
            students[i] = students[i + 1];
        }
        m--;
        cout << "Student deleted successfully.\n";
    }
}

// function to update students
void updateStudent(Student* students, int m) {
    int studentId;
    cout << "Enter student ID: ";
    cin >> studentId;
    int index = -1;
    for (int i = 0; i < m; i++) {
        if (students[i].studentId == studentId) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Student not found.\n";
    } else {
        string newName;
        cout << "Enter new student name: ";
        cin.ignore(); // Ignore any previous newline character
        getline(cin, newName);
        students[index].studentName = newName;
        cout << "Student updated successfully.\n";
    }
}

// function to search students
void searchStudent(Student* students, int m) {
    int studentId;
    cout << "Enter student ID: ";
    cin >> studentId;
    for (int i = 0; i < m; i++) {
        if (students[i].studentId == studentId) {
            cout << "Student found successfully.\n";
            break;
        }
    }
}

// function to list all students
void listStudents(Student* students, int m) {
    cout << "List of all students:\n";
    cout << "Student ID\tStudent Name\n";
    for (int i = 0; i < m; i++) {
        cout << students[i].studentId << "\t" << students[i].studentName << "\n";
    }
    cout << "List displayed successfully.\n";
}

// function to add staff
void addStaff(Staff* staffs, int& p) {
    int staffId;
    string staffName;
    cout << "Enter staff ID: ";
    cin >> staffId;
    cout << "Enter staff name: ";
    cin.ignore(); // Ignore any previous newline character
    getline(cin, staffName);
    staffs[p].staffId = staffId;
    staffs[p].staffName = staffName;
    p++;
    cout << "Staff added successfully.\n";
}

// function to delete staff
void deleteStaff(Staff* staffs, int& p) {
    int staffId;
    cout << "Enter staff ID: ";
    cin >> staffId;
    int index = -1;
    for (int i = 0; i < p; i++) {
        if (staffs[i].staffId == staffId) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Staff not found.\n";
    } else {
        for (int i = index; i < p - 1; i++) {
            staffs[i] = staffs[i + 1];
        }
        p--;
        cout << "Staff deleted successfully.\n";
    }
}

// function to update staff
void updateStaff(Staff* staffs, int p) {
    int staffId;
    cout << "Enter staff ID: ";
    cin >> staffId;
    int index = -1;
    for (int i = 0; i < p; i++) {
        if (staffs[i].staffId == staffId) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Staff not found.\n";
    } else {
        string newName;
        cout << "Enter new staff name: ";
        cin.ignore(); // Ignore any previous newline character
        getline(cin, newName);
        staffs[index].staffName = newName;
        cout << "Staff updated successfully.\n";
    }
}

// function to search staff
void searchStaff(Staff* staffs, int p) {
    int staffId;
    cout << "Enter staff ID: ";
    cin >> staffId;
    for (int i = 0; i < p; i++) {
        if (staffs[i].staffId == staffId) {
            cout << "Staff found successfully.\n";
            break;
        }
    }
}

// function to list all staff
void listStaff(Staff* staffs, int p) {
    cout << "List of all staff:\n";
    cout << "Staff ID\tStaff Name\n";
    for (int i = 0; i < p; i++) {
        cout << staffs[i].staffId << "\t" << staffs[i].staffName << "\n";
    }
    cout << "List displayed successfully.\n";
}
void handleInvalidInput() {
 cout << "Invalid input. Please enter a valid choice.\n";
   cin.clear();  // Clear the error flag
 cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
}
// main program
int main() {
    Book books[100];
    Student students[100];
    Staff staffs[100];
    int n = 0, m = 0, p = 0;
    welcome();
    start ();

    while (true) {
        int choice;
        cout << "E-library Management System\nMain Menu:\n";
        cout << " 1. Book Issue\n 2. Book Deposit\n 3. Administrator Menu\n 4. Exit\n";
        cout << "Enter your choice: ";
        if (!(cin >> choice)) {
            handleInvalidInput();
            continue;  // Ask the user for input again
        }

        switch (choice) {
            case 1:
                bookIssue();
                break;
            case 2:
                bookDeposit();
                break;
            case 3:
                while (true) {
                    int choice;
                    cout << "Administrator Menu:\n";
                    cout << " 1. Book Menu\n 2. Student Menu\n 3. Staff Menu\n 4. Main Menu\n";
                    cout << "Enter your choice: ";
                    if (!(cin >> choice)) {
                        handleInvalidInput();
                        continue;  // Ask the user for input again
                    }

                    switch (choice) {
                        case 1:
                            while (true) {
                                int choice;
                                cout << "Book Menu:\n";
                                cout << "1. Add Book\n 2. Delete Book\n 3. Update Book\n 4. Search Book\n 5. List of All Books\n 6. Main Menu\n";
                                cout << "Enter your choice: ";
                                if (!(cin >> choice)) {
                                    handleInvalidInput();
                                    continue;  // Ask the user for input again
                                }

                                switch (choice) {
                                    case 1:
                                        addBook(books, n);
                                        break;
                                    case 2:
                                        deleteBook(books, n);
                                        break;
                                    case 3:
                                        updateBook(books, n);
                                        break;
                                    case 4:
                                        searchBook(books, n);
                                        break;
                                    case 5:
                                        listBooks(books, n);
                                        break;
                                    case 6:
                                        goto main_menu;
                                    default:
                                        handleInvalidInput();
                                }
                            }
                            break;

                        case 2:
                            while (true) {
                                int choice;
                                cout << "Student Menu:\n";
                                cout << "1. Add Student\n 2. Delete Student\n 3. Update Student\n 4. Search Student\n 5. List of All Students\n 6. Main Menu\n";
                                cout << "Enter your choice: ";
                                if (!(cin >> choice)) {
                                    handleInvalidInput();
                                    continue;  // Ask the user for input again
                                }

                                switch (choice) {
                                    case 1:
                                        addStudent(students, m);
                                        break;
                                    case 2:
                                        deleteStudent(students, m);
                                        break;
                                    case 3:
                                        updateStudent(students, m);
                                        break;
                                    case 4:
                                        searchStudent(students, m);
                                        break;
                                    case 5:
                                        listStudents(students, m);
                                        break;
                                    case 6:
                                        goto main_menu;
                                    default:
                                        handleInvalidInput();
                                }
                            }
                            break;

                        case 3:
                            while (true) {
                                int choice;
                                cout << "Staff Menu:\n";
                                cout << "1. Add Staff\n 2. Delete Staff\n 3. Update Staff\n 4. Search Staff\n 5. List of All Staff\n 6. Main Menu\n";
                                cout << "Enter your choice: ";
                                if (!(cin >> choice)) {
                                    handleInvalidInput();
                                    continue;  // Ask the user for input again
                                }

                                switch (choice) {
                                    case 1:
                                        addStaff(staffs, p);
                                        break;
                                    case 2:
                                        deleteStaff(staffs, p);
                                        break;
                                    case 3:
                                        updateStaff(staffs, p);
                                        break;
                                    case 4:
                                        searchStaff(staffs, p);
                                        break;
                                    case 5:
                                        listStaff(staffs, p);
                                        break;
                                    case 6:
                                        goto main_menu;
                                    default:
                                        handleInvalidInput();
                                }
                            }
                            break;

                        case 4:
                            goto main_menu;

                        default:
                            handleInvalidInput();
                    }
                }
                main_menu:
                break;

            case 4:
                return 0;

            default:
                handleInvalidInput();
        }
    }

    return 0;
}
