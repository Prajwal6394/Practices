#include<bits/stdc++.h>
using namespace std;

int Trans(string A, string B){
  int sum = 0;
  int count = 0;
  for(int i = 0; i < A.size(); i++){
    sum += A[i];
    sum -= B[i];
  }
  if(sum != 0){
    return -1;
  }
  
  int i = A.size();
  int j = B.size();
  
  while(i >= 0 and j >= 0){
    if(A[i] != B[j]){
      count++;
      i--;
    }
    else{
      i--;
      j--;
    }
  }
  return count;
}
