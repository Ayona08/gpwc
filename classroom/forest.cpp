#include<iostream>
using namespace std;

class Forest {
private:
    int trees;
    int birds;
    int men;

public:
    Forest(int t, int b, int m) : trees(t), birds(b), men(m) {}

    void standing() {
        cout << "The " << trees << " trees are standing." << endl;
    }

    void flying() {
        cout << "The " << birds << " birds are flying." << endl;
    }

    void moving() {
        cout << "The " << men << " men are walking." << endl;
    }

    void displayActivities() {
        standing();
        flying();
        moving();
    }
};

int main() {// Call the function to display the activities
    Forest myForest(10,20,30);
    myForest.displayActivities();
    return 0;
}
