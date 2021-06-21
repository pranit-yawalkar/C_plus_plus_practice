// Q3. Write a program to find a unique number in an array where all numbers
// except one, are present thrice.
// 1. We will maintain an array of 64 size which will store the number of times i th
// bit has occurred in the array.
// 2. Take the modulo of each element of this array with 3. Resultant array will
// represent the binary representation of the unique number.
// 3. Convert that binary number to decimal number and output it.

#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int unique(int arr[], int n){
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum%3!=0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main(){
    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr, 10)<<endl;
    return 0;
}