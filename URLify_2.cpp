/*Jan 10, 2019
Neftali Samarey
Tiny problem practice
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using std::string;


string urlify(string &input);
int j;

int main() {
  string url = "Coding is super fun    ";
  cout << urlify(url);
}

string urlify(string &input) {
  
  int s = input.size(); // O(1)
  int spaceCount = 1;   // O(1)
  for(int i = s; i >= 0; i--) { // O(n)
    if(input[i] == ' ' && input[i+1] == ' ') {spaceCount += 1; input.erase(i);} // O(n)
  }

  // Replacing all the empty spaces with char '-' O(n)
  for (j = 0; j < input.size(); j++) {
    if (input[j] == ' ') { replace(input.begin(), input.end(), ' ', '-'); }
  }

  //

  return input;
}