//write a c++ program to append the content of one file into another file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string sourceFile, destinationFile, line;

    // Ask user for file names
    cout << "Enter the name of the source file: ";
    cin >> sourceFile;
    cout << "Enter the name of the destination file: ";
    cin >> destinationFile;

    // Open the source file in read mode
    ifstream source(sourceFile);
    if (!source) {
        cerr << "Error: Could not open the source file!" << endl;
        return 1;
    }

    // Open the destination file in append mode
    ofstream destination(destinationFile, ios::app);
    if (!destination) {
        cerr << "Error: Could not open the destination file!" << endl;
        return 1;
    }

    // Read content from the source file and write to the destination file
    while (getline(source, line)) {
        destination << line << endl;
    }

    cout << "Content has been appended successfully!" << endl;

    // Close the files
    source.close();
    destination.close();

    return 0;
}
