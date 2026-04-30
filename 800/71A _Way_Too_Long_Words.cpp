/*
1. Read an integer n representing the number of words.

2. Store all input words in a vector of strings using a loop.

3. Traverse the vector and process each word independently:
   - If the length of the word is greater than 10:
       • Replace it with its abbreviation:
         first character + (length - 2) + last character
   - Otherwise, keep the word unchanged.

4. Print the result for each word on a new line.

5. The solution treats each word separately and does not modify the original input storage.

Time Complexity: O(n)
Each word is processed once.

Space Complexity: O(n)
Vector stores all input words.

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    int n;
    cin>>n;
    vector <string> w(n);
    for (int i = 0; i < n; i++) {
        cin>>w[i];
        getchar();
    }


    for (int i = 0; i < n; i++) {
        if (w[i].size() > 10) {
            cout << w[i][0] << w[i].size() - 2 << w[i].back() << endl;
        } else {
            cout << w[i] << endl;
        }
    }  
    
    return 0;
}
