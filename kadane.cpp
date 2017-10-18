/* Kadane's Algorithm
 * Given an array containing both negative and positive integers. Find the
 * contiguous sub-array with maximum sum.

 * The first line of input contains an integer T denoting the number of test
 * cases. The description of T test cases follows. The first line of each test
 * case contains a single integer N denoting the size of array. The second line
 * contains N space-separated integers A1, A2, ..., AN denoting the elements of
 * the array.
 */

#include <iostream>

using namespace std;

int *array;

void makeArray(int n){
    int value;
    for (int i = 0; i < n; i++){
        cin >> value;
        array[i] = value;
    }
}

void maxSum(int n){
    int max = 0;
    int sum = array[0];
    for (int i = 1; i < n; i++){
        if (array[i] > array[i-1]){
            sum += array[i];
        }
        else{
            if (sum > max){
                max = sum;
            }
        }
    }
    cout << sum << endl;
}

int main(){
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> N;
        array = new int[N];
        makeArray(N);
        maxSum(N);
    }
    return 0;
}
