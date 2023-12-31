#include <iostream>
#include <string>
#include "middle_str.h"

using namespace std;

string itc_maxCharWord(string str)
{
    bool isThereSpaces = true;
    for(int i = 0; i<len(str); i++)
    {
        if(str[i]==32)
        {
            isThereSpaces = false;
        }
    }
    if(isThereSpaces)
    {
        return "error";
    }
    string maxString="", tempString="";
    for(int i = 0; i<len(str); i++)
    {
        if(str[i]==32 )
        {
            if(len(maxString)<len(tempString))
            {
                maxString=tempString;   
            }
            tempString="";
        }
        else if((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123)||(str[i]>127&&str[i]<176)||(str[i]>223&&str[i]<242))
        {
            tempString+=str[i];
        }
    }
    return maxString;
}

char itc_sameChar(string str)
{
    for(int i = 0; i<len(str); i++)
    {
        for(int j = 0; j<len(str); j++)
        {
            if(str[i]==str[j])
            {
                return str[i];
            }
        }
    }
}

bool itc_isFirstInSecond(string s1, string s2)
{
    if(s1=="")
    {
        return true;
    }
    if(len(s2)<len(s1))
    {
        return false;
    }
    bool isReal = true;
    for(int i = 0; i<len(s2); i++)
    {
        if(s2[i]==s1[0])
        {
            for(int j = 0; j<len(s1); j++)
            {
                if(s2[i+j]!=s1[j])
                {
                    isReal = false;
                }
            }
            if(isReal)
            {
                return true;
            }
            isReal = true;
        }
    }
    return false;
}

string itc_Cezar(string str, int k)
{
    string a = "";
    for(int i = 0; i<len(str); i++)
    {
        if(str[i]>64&&str[i]<91)
        {
            if(str[i]+k>90)
            {
                a+=str[i]+k-91+65;
            }
            else if(str[i]+k<=64)
            {
                a+=91-(64-str[i]+k);
            }
            else
            {
                a+=str[i]+k;
            }
        }
        else if(str[i]>96&&str[i]<123)
        {
            if(str[i]+k>122)
            {
                a+=str[i]+k-123+97;
            }
            else if(str[i]+k<=96)
            {
                a+=122-(98-str[i]+k);
            }
            else
            {
                a+=str[i]+k;
            }
        }
        else
        {
            a+=str[i];
        }
    }
    return a;
}
string itc_rmFreeSpace(string str)
{
    string a = "";
    for(int i = 0; i<len(str)-1; i++)
    {
        if(str[i]==32&&str[i+1]==32){}
        else
        {
            a+=str[i];
        }
    }
    return a;
}
