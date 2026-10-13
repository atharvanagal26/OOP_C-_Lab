#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *marks = new (nothrow) int;

    if (marks == NULL)
    {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    *marks = 85;
    cout << "Student's Marks: " << *marks << endl;

    delete marks;
    marks = NULL;

    int *subjectMarks = new (nothrow) int[3];

    if (subjectMarks == NULL)
    {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    subjectMarks[0] = 85;
    subjectMarks[1] = 90;
    subjectMarks[2] = 78;

    cout << "\nMarks in 3 Subjects:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Subject " << i + 1 << ": "
             << subjectMarks[i] << endl;
    }
    delete[] subjectMarks;
    subjectMarks = NULL;

    return 0;
}