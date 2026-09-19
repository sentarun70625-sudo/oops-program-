// Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the selected task to 'DONE' in the array, 
//then print the updated list.<br><br><em><strong>Hint:</strong> Use a separate status array or append ' - DONE' to the task string.</em>

#include <iostream>
using namespace std;

string tasks[5];
bool status[5] = {false};

void markTaskDone(int index)
{
    status[index] = true;
}

int main()
{
    cout << "Enter 5 tasks:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter task " << i + 1 << ": ";
        getline(cin, tasks[i]);
    }

    // Mark second task as DONE
    markTaskDone(1);

    cout << "\nUpdated Task List:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << tasks[i];

        if(status[i] == true)
        {
            cout << " - DONE";
        }

        cout << endl;
    }

    return 0;
}