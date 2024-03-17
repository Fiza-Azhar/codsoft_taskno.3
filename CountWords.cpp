//words count in a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream obj;
    obj.open(filename.c_str()); // Open the file using the provided filename
    if (!obj.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int count = 0;
    string word;
    while (obj >> word) { // Read words from file
        count++;
    }

    cout << "Number of words in file = " << count << endl;

    obj.close();
    return 0;
}
