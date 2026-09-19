#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading content as an Instagram Reel." << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading video to YouTube channel." << endl;
    }
};

int main() {
    SocialMediaUploader* instagram = new InstagramUploader();
    SocialMediaUploader* youtube = new YouTubeUploader();

    instagram->uploadContent();
    youtube->uploadContent();

    delete instagram;
    delete youtube;

    return 0;
}