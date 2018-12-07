#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int countDecoding(vector<char> digits, int n){
if (n==0 || n==1){
    return 1; }

int count =0;
if (digits[n-1]>'0') {
    //count=countDecoding(digits, n-1);
    count++;
}
if (digits[n-2]=='1' || digits[n-2]=='2' && digits[n-1]<'7'){
    //count+=countDecoding(digits, n-2);
    count+=2;
}
return count;
}
int main(){
int n;
cin>>n;
vector<char> digits(n);
for (int i=0; i<n; i++){
    cin>>digits[i];
}
cout<<"Count is "<< countDecoding(digits, n);
return 0;
}
