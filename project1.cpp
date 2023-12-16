#include <iostream>
#include <queue>
#include <deque>
using namespace std;
#define size 100

struct student
{
    double grade;
    string name;
    int id;
};


student Queue[size];
int front = -1;
int rear = -1;

void enqueue(student Student)
{
    if(rear != size-1)
    {
        if(front == -1 && rear == -1)
        {
            front++;
                Queue[++rear]= Student;
        }
        else 
        {
                Queue[++rear]= Student;
        }
    }
    else
    {
        cout<<"The list is full" << endl;
    }
}

void dequeue()
{
        if(front != -1 && rear != -1 && front <= rear)
    {
        front++;
    }
    else
    {
        cout<< "queue is empty" << endl;
    }
}

void addStudent() {
    student Student;
    cout << "Enter student ID: ";
    cin >> Student.id;
    cout << "Enter student name: ";
    cin >> Student.name;
    cout << "Enter student grade: ";
    cin >> Student.grade;

    enqueue(Student);
    cout << "Student added to the queue." << endl;
}
int main()
{


    return 0;
}
