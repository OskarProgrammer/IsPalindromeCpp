#include <iostream>
#include <string.h>

using namespace std;

bool isPalindrom(string napis){
    string reverseNapis;
    for (int i = napis.length()-1; i>=0;i--)reverseNapis+=napis[i];

    if (reverseNapis == napis){
        return true;
    }
    return false;
}

int main(){
    string napis;
    cin >> napis;   
    if (isPalindrom(napis)){
        cout<<"Palindrom : true"<<endl;
    }else{
        cout<<"Palindrom : false"<<endl;
    }
    return 0;
}