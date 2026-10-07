#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    char name[50];

public:
    void getStudentDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudentDetails()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};


class Exam : public Student
{
protected:
    float marks[6];

public:
    void getMarks()
    {
        cout << "\nEnter marks for 6 subjects:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "\nMarks obtained:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1
                 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Exam
{
private:
    float total;

public:
    void calculateTotal()
    {
        total = 0;

        for (int i = 0; i < 6; i++)
        {
            total = total + marks[i];
        }
    }

    void displayResult()
    {
        cout << "\n========== RESULT ==========" << endl;

        displayStudentDetails();
        displayMarks();

        cout << "\nTotal Marks: " << total << " / 600" << endl;
    }
};


int main()
{
    Result r;

    cout << "===== STUDENT DETAILS =====" << endl;

    r.getStudentDetails();
    r.getMarks();

    r.calculateTotal();

    r.displayResult();

    return 0;
}
