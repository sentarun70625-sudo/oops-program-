#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

// Add new content
void addContent() {
    Content c;

    cout << "\nEnter content title: ";
    getline(cin, c.title);

    cout << "Enter platform: ";
    getline(cin, c.platform);

    cout << "Enter views: ";
    cin >> c.views;
    cin.ignore();

    cout << "Enter status: ";
    getline(cin, c.status);

    ofstream file("content_list.txt", ios::app);

    file << c.title << "|" 
         << c.platform << "|"
         << c.views << "|"
         << c.status << endl;

    file.close();

    cout << "\nContent added successfully!\n";
}

// View all content
void viewContent() {
    ifstream file("content_list.txt");

    Content c;
    int number = 1;

    cout << "\n--- Content List ---\n";

    while (getline(file, c.title, '|')) {
        getline(file, c.platform, '|');
        file >> c.views;
        file.ignore();
        getline(file, c.status);

        cout << number << ". "
             << c.title << " - "
             << c.platform << endl;

        number++;
    }

    file.close();

    if (number == 1) {
        cout << "No content found.\n";
    }
}

// Update status
void updateStatus() {
    Content content[100];
    int count = 0;

    ifstream file("content_list.txt");

    while (getline(file, content[count].title, '|')) {
        getline(file, content[count].platform, '|');
        file >> content[count].views;
        file.ignore();
        getline(file, content[count].status);

        count++;
    }

    file.close();

    if (count == 0) {
        cout << "\nNo content available.\n";
        return;
    }

    cout << "\n--- Content List ---\n";

    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". "
             << content[i].title << " - "
             << content[i].platform << endl;
    }

    int choice;

    cout << "\nEnter content number to update: ";
    cin >> choice;
    cin.ignore();

    if (choice < 1 || choice > count) {
        cout << "Invalid choice.\n";
        return;
    }

    cout << "Enter new status: ";
    getline(cin, content[choice - 1].status);

    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++) {
        outFile << content[i].title << "|"
                << content[i].platform << "|"
                << content[i].views << "|"
                << content[i].status << endl;
    }

    outFile.close();

    cout << "\nStatus updated successfully!\n";
}

// Delete content
void deleteContent() {
    Content content[100];
    int count = 0;

    ifstream file("content_list.txt");

    while (getline(file, content[count].title, '|')) {
        getline(file, content[count].platform, '|');
        file >> content[count].views;
        file.ignore();
        getline(file, content[count].status);

        count++;
    }

    file.close();

    if (count == 0) {
        cout << "\nNo content available.\n";
        return;
    }

    cout << "\n--- Content List ---\n";

    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". "
             << content[i].title << " - "
             << content[i].platform << endl;
    }

    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > count) {
        cout << "Invalid choice.\n";
        return;
    }

    for (int i = choice - 1; i < count - 1; i++) {
        content[i] = content[i + 1];
    }

    count--;

    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++) {
        outFile << content[i].title << "|"
                << content[i].platform << "|"
                << content[i].views << "|"
                << content[i].status << endl;
    }

    outFile.close();

    cout << "\nContent deleted successfully!\n";

    cout << "\n--- Updated Content List ---\n";

    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". "
             << content[i].title << " - "
             << content[i].platform << endl;
    }
}

int main() {

    int choice;

    do {
        cout << "\n==============================\n";
        cout << "   CREATOR DASHBOARD LITE\n";
        cout << "==============================\n";

        cout << "1. Add Content\n";
        cout << "2. View Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1:
            addContent();
            break;

        case 2:
            viewContent();
            break;

        case 3:
            updateStatus();
            break;

        case 4:
            deleteContent();
            break;

        case 5:
            cout << "\nThank you for using Creator Dashboard Lite!\n";
            break;

        default:
            cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
