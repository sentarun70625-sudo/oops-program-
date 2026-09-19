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
};

class Podcaster : public SocialMediaUser {
};

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string user, int f) {
        username = user;
        followers = f;
    }

    void postStory(string storyTitle) {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer i("Manan", 8000);

    i.displayProfile();
    i.postStory("New Travel Vlog");

    return 0;
}