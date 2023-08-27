#ifndef CXXUTILS_HPP
#define CXXUTILS_HPP

#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

bool isInt(string subject){
    bool result = true;
    for (size_t i = 0; i < subject.size(); i++){
        if (isdigit(subject[i])) {}
        else {
            result = false;
        }
    }
    return result;
}

int convertToInt(string subject){
    int result = 0;
    if (isInt(subject)){
        result = stoi(subject);
    }
    else {}
    return result;
}

vector<string> cleanSplit(string subject, string splitter){
    vector<string> result;
    size_t pos = 0;
    string token;
    while ((pos = subject.find(splitter)) != string::npos) {
        token = subject.substr(0, pos);
        result.push_back(token);
        subject.erase(0, pos + splitter.length());
    }
    result.push_back(subject);
    return result;
}

string joinVec(vector<string> arr, string delim){
    string result = "";
    int arrLength = static_cast<int>(arr.size());
    int last_elem = arrLength - 1;
    for (size_t i = 0; i < arr.size(); i++){
        int curr_index = static_cast<int>(i);
        string snippet = arr[i] + delim;
        result = result + snippet;
        snippet.clear();
    }
    return result;
}

bool hasItem(vector<string> arr, string item){
    bool result = false;
    if ((find(arr.begin(), arr.end(), item) != arr.end())){
        result = true;
    }
    else {}
    return result;
}

int getIndex(vector<string> arr, string item){
    int result = 0;
    for (size_t i = 0; i < arr.size();i++){
        if (arr[i] == item){
            result = static_cast<int>(i);
        }
        else {}
    }
    return result;
}

bool hasIndex(vector<string> arr, int index){
    bool result = false;
    for (size_t i = 0; i < arr.size(); i++){
        int currIndex = static_cast<int>(i);
        if (currIndex == index){
            result = true;
        }
        else {}
    }
    return result;
}

#endif