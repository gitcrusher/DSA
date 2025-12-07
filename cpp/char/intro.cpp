#include<bits/stdc++.h>
using namespace std;

bool palindrome(char ch[],int n){
    int a = 0;
    int l = n-1;
    while(l>=a){
        if(ch[l] != ch[a]){
            return 0;
        }else{
            a++;
            l--;

        }
    }
    return 1;
}
    

void reverse(char ch[], int n){
    for(int i = n-1; i>=0; i--){
        cout << ch[i];
    }
}


int getlength(char ch[]){
    int count = 0 ;
    for(int i = 0; ch[i]!='\0';i++){
        count++;
    }

    return count;
}


int main() {
    char ch[20];
    cout << "Enter name: ";
    cin >> ch;
    int length = getlength(ch);
    cout << "length: " << length << endl;
    reverse(ch, length);
    cout<<"paliendrome or not "<<palindrome(ch,length);

    return 0;
}