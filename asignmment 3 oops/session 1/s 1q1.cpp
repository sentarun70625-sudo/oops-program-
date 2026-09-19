// Write a simple C program tasklist_c.c that allows you to add up to 5 tasks (as strings) to a global array and print all tasks using a for loop.

#include <iostream>
using namespace std;

string tasks[5];
int taskCount = 0;

int main()
{
    cout << "Enter 5 tasks:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter task " << i + 1 << ": ";
        getline(cin, tasks[i]);

        taskCount++;
    }

    cout << "\nTask List:" << endl;

    for(int i = 0; i < taskCount; i++)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }

    return 0;
}