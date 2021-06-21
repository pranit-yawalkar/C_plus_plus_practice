#include<bits/stdc++.h>
using namespace std;

// Approach 1
bool isPowerOfFour(int n) { // O(log n)
        if (n<=0) return false;
        int i=0;
        
        while (n>1) {
			//if there is more than 1 '1' in the binary representation of 1
            if (n%2==1) return false;
            n>>=1;
            ++i;
        }
        //if the number of bit shifts was even, then n is a power of 4
        if (i%2==0) return true;
        return false;
    }

// Approach 2
bool isPowerOfFour2(int num){  // O(log n)
    if (num<1) return 0;
    int n = num, count = 0;
    while (n>1)
    {
        n>>=2;
        count+=2;
    }
    return (n<<count) == num;
}

// Approach 3
bool isPowerOf4(int num){ // O(1)
    return (num>0) && ((num & (num-1)) == 0) && (num%3 == 1);
}


int main(){
    int num;
    cin>>num;
    cout<<isPowerOfFour(num)<<endl;
    return 0;
}