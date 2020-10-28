//
//  main.cpp
//  Sandbox_C
//
//  Created by Luke Clover on 10/27/20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

vector<char> findUniqueCharacters(string str) {
    
    sort(str.begin(), str.end());
    string::iterator it;
    it = str.begin();
    vector<char> uniqueChars;
    
    while (!str.empty()) {
        char firstChar = *it;
        str.erase(it);
        if (!(find(uniqueChars.begin(), uniqueChars.end(), firstChar) != uniqueChars.end())) {
            uniqueChars.push_back(firstChar);
        }
    }
    
    return uniqueChars;
}

//int findUniqueCommonChars(string s1, string s2) {
//    sort(s1.begin(), s1.end());
//    sort(s2.begin(), s2.end());
//    int numCommonChars = 0;
//    
//    return numCommonChars;
//}

int main(int argc, const char * argv[]) {
    string testString1 = "thisisatest";
    string testString2 = "bleeeeeeeha";
    //string codeTest1 = "aabcc";
    //string codeTest2 = "aabcc";

    vector<char> uniqueS1 = findUniqueCharacters(testString1);
    cout << "Unique chars testString1\n";
    for (int i = 0; i < uniqueS1.size(); ++i) {
        cout << uniqueS1[i] << " ";
    } cout << endl << endl;
    
    vector<char> uniqueS2 = findUniqueCharacters(testString2);
    cout << "Unique chars testString2\n";
    for (int i = 0; i < uniqueS2.size(); ++i) {
        cout << uniqueS2[i] << " ";
    } cout << endl << endl;
    
    return 0;
}
