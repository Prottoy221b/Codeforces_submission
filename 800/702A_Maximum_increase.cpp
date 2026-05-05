/* 
Approach:
I track the length of increasing subarrays ending at each index using an auxiliary array.

If arr[i] < arr[i+1], I extend the previous increasing sequence.
Otherwise, I reset the count to 1, which is already initialized.

Finally, I take the maximum value from the count array.

Time Complexity: O(n)
Space Complexity: O(n)

Note:
This solution uses extra space. It can be optimized to O(1) space by tracking only the current streak and maximum length.
*/



#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
  
    cin>>n;
    vector<int> arr(n);
   
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    vector<int> count(n);
    for (int i = 0; i < n; i++) {
        count[i]=1;
    }
    for (int i = 0; i < n-1; i++) {
        if(arr[i]<arr[i+1]){
            count[i+1]=count[i]+1;
        }
    }
    int result=-1;
    for (int i = 0; i < n; i++) {
        if(result<count[i]){
           result=count[i];
        }
    }

    cout<<result;
    return 0;
}
