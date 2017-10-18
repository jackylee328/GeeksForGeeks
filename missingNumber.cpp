/* Missing Number in Array
 *
 * Given an array of size n-1 and given that there are number from 1 to n with
 * one missing, the missing number is to be found.
 */

 #include <iostream>

 using namespace std;

 void findNumber(int n){
     int value;
     for (int i = 1; i < n; i++){
         cin >> value;
         if (i != value){
             cout << i << endl;
             return;
         }
     }
 }

 int main(){
     int T, N;
     cin >> T;
     for (int i = 0; i < T; i++){
         cin >> N;
         findNumber(N);
     }
     return 0;
 }
