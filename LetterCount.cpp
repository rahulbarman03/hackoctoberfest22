#include <iostream> 

using namespace std; 

  

int countLetters(string s) 

{ 

    int res = 0; 

  

    for (int i=0; i<s.length(); i++) 

        if (s[i] != ' ') 

            res++; 

  

    return res; 

} 

  

int main() 

{ 

    string str = "w3resource "; 

    cout << countLetters(str); 

    return 0; 

} 
