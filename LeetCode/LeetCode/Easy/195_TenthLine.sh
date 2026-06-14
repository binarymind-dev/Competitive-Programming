#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("file.txt");
    string line;

    for (int i = 1; i <= 10 && getline(file, line); i++) {
        if (i == 10) {
            cout << line << endl;
        }
    }

    return 0;
}
