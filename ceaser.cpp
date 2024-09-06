#include<bits/stdc++.h>
using namespace std;

string encrypt(string text, int shift)
{
    string str;
    for (int i=0;i<text.size();i++)
    {
        if(isupper(text[i])){
            char ch=(text[i]+shift-'A')%26 +'A';
            str+=ch;
        }
        else if(islower(text[i])){
            char ch=(text[i]+shift-'a')%26 + 'a';
            str+=ch;
        }
        else
        str+=text[i];
    }
    return str;
}

int main()
{
    string text,str;
    cout<<"enter the original text:";
    getline(cin,text);
    int shift;
    cout<<"enter how many shift:";
    cin>>shift;
    shift=shift%26;
    cout<<"plian text:"<<text<<endl;
    cout<<endl;
    string namr=encrypt(text,shift);
    cout<<"encrypted text:"<<namr<<endl;
    string origin=encrypt(namr,26-shift);
    cout<<"original text:"<<origin<<endl;
    return 0;
}