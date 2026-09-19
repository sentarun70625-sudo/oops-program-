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

class YouTuber : public SocialMediaUser {
    string channelName;

public:
    YouTuber(string user, int f, string channel) {
        username = user;
        followers = f;
        channelName = channel;
    }

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

int main() {
    YouTuber y("Manan", 5000, "Manan Gaming");

    y.displayProfile();
    y.uploadVideo("GTA 5 Gameplay");

    return 0;
}