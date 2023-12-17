#include <iostream>
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


double calculateGradeAverage() {
    double total = 0;
    int count = 0;
    for (int i = front; i <= rear; ++i) {
        total += Queue[i].grade;
        count++;
    }
    if (count == 0) {
        return 0;
    }
    return total / count;
}

void CalcAvgPass(){
    double sum = 0, n = 0, avg;
    for (int i = front;i <= rear; i++){
        if (Queue[i].grade >= 50){
            sum = sum + Queue[i].grade;
            n++;
        }
        if (n == 0) {
        cout<<"0";
        }  
    }
    avg = sum/n;
    cout<< avg;
}
    
void separatestudents(){

 student   passedqueue[size], failedqueue[size];
   int    passedrear = -1, failedrear=-1;
  for (int i=0;i<size;i++)
    if(Queue[i].grade>=50)
        enqueue(passedqueue[++passedrear]);
     else
       enqueue(failedqueue[++failedrear]);
} 

int main()
{
    addStudent();
    addStudent();
    addStudent();
    cout<<calculateGradeAverage();
    separatestudents();
    CalcAvgPass();
    
    return 0;}
