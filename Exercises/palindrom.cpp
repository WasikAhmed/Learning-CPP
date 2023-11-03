#include<iostream>
using namespace std;

bool is_palindrome(string text){

    int len = text.length();

    int j = len - 1;

    for(int i = 0; i < len; i++){
       if(text[i] == text[j]){
        return true;
       }
       j--;
    }
    return false;

}

int main(){

        cout << is_palindrome("bo ob") << "\n";
        cout << is_palindrome("ad a") << "\n";
        cout << is_palindrome("level") << "\n";
        cout << is_palindrome("thomas")<< "\n";

    return 0;
}