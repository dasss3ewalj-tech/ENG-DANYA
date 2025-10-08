// A simple C++ program to find N maximum
// combinations from two arrays,
#include <bits/stdc++.h>
using namespace std;

// function to display first N maximum sum
// combinations
void KMaxCombinations(int A[], int B[],
                      int N, int K)
{
//max heap
priority_queue <int> pq;
for(int i=0;i<N;i++){
        for(int j = 0;j<N ;j++){
            pq.push(A[i] + B[j]);
        }
}
// pop first N elements from max heap and display them.
int count = 0 ;
while(count <K){
    cout<<pq.top() <<" ";
    pq.pop();
    count++;
}
}

// Driver Code.
int main()
{
    int A[] = { 4, 2, 5, 1 };
    int B[] = { 8, 0, 5, 3 };
    int c[] = {1,2,3,4};
    int N = sizeof(A) / sizeof(A[0]);
    int K = 3;

    // Function call
    KMaxCombinations(A, B, N, K);
    return 0;
}
