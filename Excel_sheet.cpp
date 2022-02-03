string Excellsheet(int n){
  string ans = "";
  while(n){
    int rem = n%26;
    if(rem == 0){
      ans = "Z" + ans;
      n = n/26 - 1;
    }
    else{
      char c = 'A' + (rem - 1);
      N /= 26;
      ans = c + ans;
    }
    return ans;
  }
  
  int main(){
    int n;
    cin >> n;
    cout<<Excellsheet(n)<<endl;
  }
