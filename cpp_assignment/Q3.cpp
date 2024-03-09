//Write a menu driven program for Student in CPP language, Create a members roll no, name and marks. Implement the following fanction
//void initStudent();
//void printStudentOnConsole();
//void acceptStudenthfromConsole();

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int rollno;
    string name;
    double marks;

    public:
    void initStudent(){
        rollno=0;
        name="_";
        marks=0.0;
    }
    void printStudentOnConsole(){
   cout << "Roll No: " << rollno << endl;
   cout << "Name: " << name<< endl;
   cout << "Marks: " << marks << endl; 
   }
   void acceptStudenthfromConsole(){
   cout<<"Enter rollno: ";
   cin>>rollno;
   cout<<"Enter name: ";
   cin>>name;
   cout<<"Enter marks: ";
   cin>>marks;
   }
};
int main(){
    Student student;
    int choice;

    student.initStudent();

    do {
        cout << "\n1. Initialize Student\n";
        cout << "2. Print Student\n";
        cout << "3. Accept Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.initStudent();
                cout << "Student initialized.\n";
                break;
            case 2:
                student.printStudentOnConsole();
                break;
            case 3:
                student.acceptStudenthfromConsole();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice.\n";
        }
    } while (choice != 4);

    return 0;
}

