#include <bits/stdc++.h>
using namespace std;

int N, A[100009];

int main(){
  cin >> N;
  for(int i=1; i<=N; i++) cin >> A[i];

  int B[100009];
  copy(A+1, A+N+1, B);
  sort(B+1, B+N+1);

  int C[100009];
  int index = 1;
  for(int i = 1; i <= N; i++){
    if(C[index-1] != B[i]){
      C[index] = B[i];
      index++;
    }
  }// Cの1~index-1までに値が入っている
  for(int i=1; i<=N; i++){
    int pos = lower_bound(C+1, C+index, A[i])-C;
    if(i==1){
      cout << pos;
    } else {
      cout << " " << pos;
    }
  }
  cout << endl;
}
