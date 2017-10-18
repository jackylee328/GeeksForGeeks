/* Majority Element
 *
 * Write a program to find the majority element in the array. A majority element
 * in an array A[] of size n is an element that appears more than n/2 times. If
 * input array doesn't contain a majority element, then output "NO Majority Element"
 */

 #include <iostream>

 using namespace std;

 int *array;

 void createHash(int n){
     int value;
     for (int i = 0; i < n; i++){
         cin >> value;
         array[value]++;
     }
 }

void findMajority(int n){
    for (int i = 0; i < 100; i++){
        if (array[i] > n / 2){
            cout << i << endl;
            return;
        }
    }
    cout << "NO Majority Element" << endl;
}

 int main(){
     int T, N;
     cin >> T;
     for (int i = 0; i < T; i++){
         cin >> N;
         array = new int[100];
         createHash(N);
         findMajority(N);
     }
     return 0;
 }
