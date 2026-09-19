//Create a Task class in your favorite OOP language (Java, Python, or C++) with properties: title and isDone.
// Add a method markDone() that sets isDone to true,
// and a method display() that prints the task with its status.

#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        if(isDone)
        {
            cout << title << " - DONE" << endl;
        }
        else
        {
            cout << title << " - NOT DONE" << endl;
        }
    }
};

int main()
{
    Task task1("Complete assignment");

    task1.display();

    task1.markDone();

    task1.display();

    return 0;
}