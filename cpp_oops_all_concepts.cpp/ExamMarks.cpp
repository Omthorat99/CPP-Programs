#include <iostream>
using namespace std;

class ExamMarks
{
public:
    int marks1, marks2;

    ExamMarks()
    {
        marks1 = 70;
        marks2 = 80;
    }

    void display()
    {
        cout << "total marks: " << marks1 + marks2 << endl;
    }

    virtual void show()
    {
        cout << "Marks" << endl;
    }
};

class FinalMarks : public ExamMarks
{
public:
    void show()
    {
        cout << "Final marks" << endl;
    }
};

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{

    ExamMarks e;
    e.display();

    FinalMarks f;
    ExamMarks *ptr = &f;
    ptr->show();

    cout << "Addition : " << add(5, 5) << endl;

    return 0;
}