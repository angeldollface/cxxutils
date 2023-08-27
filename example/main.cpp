#include <map>
#include <string>
#include <iostream>
#include "../src/cxxutils.hpp"
using namespace std;

int main() {

    string numberString = "23";
    if (isInt(numberString)) {
        int msg = convertToInt(numberString);
        cout << msg << endl;
    }
    else {
        cout << "Is not an integer." << endl;
    }

    string fakeNumberString = "A3";
    if (isInt(fakeNumberString)) {
        cout << "Is an integer." << endl;
    }
    else {
        cout << "Is not an integer." << endl;
    }

    string x = "Hello World. My name is C++.";
    string splitter = " ";
    vector<string> split = cleanSplit(x, splitter);
    for (size_t i = 0; i < split.size(); i++) {
        cout << split[i] << endl;
    }

    cout << joinVec(split, "|");

    string item = "Hello";
    if (hasItem(split, item)){
        cout << item << endl;
    }
    else {
        cout << "Item does not exist." << endl;
    }

    cout << getIndex(split, item) << endl;

    if (hasIndex(split, 0)){
        cout << "Index exists." << endl;
    }
    else {
        cout << "Index does not exist." << endl;
    }
}