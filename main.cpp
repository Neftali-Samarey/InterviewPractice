#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
#include <bits/stdc++.h>

using namespace std;
using std::string;


string formatKey(string &key, int numberOfGroups);

int main() {
  string inputKey = "nsn8-dKns-93cL";
  cout << formatKey(inputKey, 4);
}

string formatKey(string &key, int numberOfGroups) {

  // Begin by checking the string and stripping away characters
  key.erase(std::remove(key.begin(), key.end(), '-'), key.end()); // O(n)

  // Uppercase the entire string
  transform(key.begin(), key.end(), key.begin(), ::toupper);  // O(n)

  for (int i = key.size()-1; i > 0; i--) {
    for (int x = key.size()-1; x > 0; x--) {
    
        if (key[i] == 5) {
           key.insert(key[x],"-"); 
        }
     
    }
    cout << key[i] << "\n";
  }
  
  cout << "\n\n";
  return key;
}