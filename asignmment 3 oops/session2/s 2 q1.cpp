// Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean).
// Instantiate an object of Playlist and print all its properties.

#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main()
{
    Playlist playlist1;

    playlist1.name = "My Favorite Songs";
    playlist1.createdOn = "18-09-2026";
    playlist1.isPublic = true;

    cout << "Playlist Name: " << playlist1.name << endl;
    cout << "Created On: " << playlist1.createdOn << endl;
    cout << "Is Public: " << boolalpha << playlist1.isPublic << endl;

    return 0;
}
