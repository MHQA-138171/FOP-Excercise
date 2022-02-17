#include <iostream>
using namespace std;
class Student
{
private:
    float marks;
    string name;

public:
    void input(string n, float m)
    {
        cout << "Enetr your name: ";
        cin >> n;
        name = n;
        cout << "Enter your marks: ";
        cin >> m;
        marks = m;
    }
    void display()
    {
        cout << "Student: " << name << endl
             << "Marks: " << marks;
    }
};

int main()
{
    Student S;
    float marks;
    string name;
    S.input(name, marks);
    S.display();
}
// coded by MHQA
