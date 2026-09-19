/ Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it is called. 
//Demonstrate by toggling the value twice and printing the result each time.

#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    void togglePublic()
    {
        isPublic = !isPublic;
    }
};

int main()
{
    Playlist playlist1;

    playlist1.name = "My Favorite Songs";
    playlist1.createdOn = "18-09-2026";
    playlist1.isPublic = true;

    cout << "Initial Public Status: " << boolalpha << playlist1.isPublic << endl;

    playlist1.togglePublic();
    cout << "After First Toggle: " << playlist1.isPublic << endl;

    playlist1.togglePublic();
    cout << "After Second Toggle: " << playlist1.isPublic << endl;

    return 0;
}