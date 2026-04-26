#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int q ;
cin>>q;

int hash[200]={0};
for(int i =0;i<s.length();i++){
    hash[s[i]]++;
}






while(q--){
    char c ;

    cin>>c;
    cout<<hash[c]<<endl;

}


return 0;
}

