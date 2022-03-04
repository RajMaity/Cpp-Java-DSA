/* 
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the 
relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/
#include<iostream>
using namespace std;
int main()
{
    string str1="ahbgdc";
    string str2="abc";
    int n1=str1.length();
    int n2=str2.length();
    int j=0;
    for(int i=0;i<n1 && j<n2;i++){
        if(str2[j]==str2[i])
            j++;
    }
    if(j==n2)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}
