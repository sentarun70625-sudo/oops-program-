#include <iostream>
using namespace std;

class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main() {
    SocialMediaUser user;

    return 0;
}