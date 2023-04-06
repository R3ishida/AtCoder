#include <bits/stdc++.h>
using namespace std;

int main(){
  int Z[5][3];
  for(int y=1; y<=3; y++){
    for(int x=1; x<=5; x++){
      cin >> Z[x][y];
    }
  }
  
  // yを固定してXの累積和をとる
  for(int y=1; y<=3; y++){
    Z[0][y] = 0; 
    for(int x=1; x<=5; x++){
      Z[x][y] += Z[x-1][y];
    }
  }
  
  // xを固定してyの累積和をとる
  for(int x=1; x<=5; x++){
    Z[x][0] = 0; 
    for(int y=1; y<=3; y++){
      Z[x][y] += Z[x][y-1];
    }
  }
  
  for(int y=1; y<=3; y++){
    for(int x=1; x<=5; x++){
      cout << Z[x][y] << " ";
    }
    cout << endl;
  }
  
  cout << "unko" << endl;
}
