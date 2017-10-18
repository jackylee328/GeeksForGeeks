/* Is Binary Number Multiple of 3
 *
 * Given a binary number, write a program that prints 1 if given binary number
 * is a multiple of 3. Else prints 0. The given number can be big upto 2^100
 */

 #include <iostream>
 #include <string>
 #include <cmath>

 using namespace std;

 int convertToInt(string str){
     int sum = 0;
     int n = str.length();
     for (int i = 0; i < n; i++){
         sum += pow(2, i) * str.at(i);
     }
     return sum;
 }

 void isMultiple(int value){
     if (value % 3 == 0){
         cout << "1" << endl;
     }
     else{
         cout << "0" << endl;
     }
 }

int main(){
    int T;
    string binary_number;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> binary_number;
        int integer = convertToInt(binary_number);
        isMultiple(integer);
    }
    return 0;
}
