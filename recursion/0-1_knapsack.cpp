// Given n items, each item has a certain value and weight. We have to maximize the
// value of the objects we can accommodate in a bag of weight W.
// Idea: For each item, we have two choices, either to include it or exclude it.
// Time Complexity: O(2 n )
// Space Complexity: O(2 n ) //space for call stack
#include<bits/stdc++.h>
using namespace std;

int knapsack(int val[], int wt[], int W, int n){
    if(n==0 || W==0)
        return 0;
    if(wt[n-1]>W)
        return knapsack(val, wt, W, n-1);
    return max(knapsack(val, wt, W-wt[n-1], n-1)+val[n-1], knapsack(val, wt, W, n-1));
}

int main(){
    int value[] = {100, 150, 50};
    int wt[] = {10, 20, 30};
    int W = 50;
    cout<<knapsack(value, wt, W, 3);
    return 0;
}