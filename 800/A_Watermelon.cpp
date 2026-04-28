#include <iostream>
using namespace std;
/*
Problem: 4A - Watermelon

Approach:
We need to check if the given weight can be split into two EVEN parts.
Conditions:
1. Weight must be even
2. Weight must be greater than 2 (because 2 = 1 + 1, both odd)

So:
if (weight % 2 == 0 && weight > 2) → YES
else → NO

Time Complexity: O(1)
*/



int main()
{
    int weight;

    cin >> weight;
    
      if(weight> 2 && weight%2==0){
        cout<<"YES";
      }
      else{
        cout<<"NO";
      }
    
    

    return 0;
}
