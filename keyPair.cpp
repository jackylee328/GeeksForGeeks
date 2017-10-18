/* Key Pair
 *
 * Given an array a[] of n number and another number x, determine whether
 * or not there exist two elements in A whose sum is exactly x.
 *
 * The first line of input contains an integer T denoting the number of test cases.
 * The first line of each test case is N and x, N is the size of array.
 * The second line of each test case contains N integers representing array
 * elements C[i].
 *
 * Print "Yes" if there exist two elements in A whose sum is exactly x, else
 * "No" without quotes.
 */

 #include <iostream>

 using namespace std;

 int *array;

 int partition(int left, int right){
     int pivot = left;
     for (int i = left + 1; i <= right; i++){
        if (array[i] < array[pivot]){
            int temp = array[i];
            array[i] = array[pivot];
            array[pivot] = temp;
            pivot++;
        }
     }
     return pivot;
 }

void quickSort(int left, int right){
    if (left < right){
        int mid = partition(left, right);
        quickSort(left, mid - 1);
        quickSort(mid + 1, right);
    }
}

void determine(int n, int target){
    int left = 0;
    int right = n - 1;
    int sum = array[left] + array[right];
    while (left < right){
        if (sum == target){
            cout << "Yes" << endl;
            return;
        }
        else if (sum < target){
            left++;
        }
        else{
            right--;
        }
        sum = array[left] + array[right];
    }
    cout << "No" << endl;
}

void makeArray(int n){
    int value;
    for (int i = 0; i < n; i++){
        cin >> value;
        array[i] = value;
    }
}

void printArray(int n){
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int test, N, x;
    cin >> test;
    for (int i = 0; i < test; i++){
        cin >> N;
        array = new int[N];
        cin >> x;
        makeArray(N);
        quickSort(0, N-1);
        determine(N, x);
    }
    return 0;
}
