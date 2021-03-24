#include<bits/stdc++.h>
using namespace std;

int roman_to_decimal(string s)
{
    unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };


    int n=s.size();
    int sum=T[s[n-1]];

    for(int i=n-2;i>=0;i--)
    {
        if(T[s[i]]<T[s[i+1]])
            sum-=T[s[i]];
        else
            sum+=T[s[i]];
    }

    return sum;
    
}

int main()
{
    string s="VIII";
    cout<<roman_to_decimal(s);
}
