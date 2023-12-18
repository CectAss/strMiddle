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
        if(str[i]+k>90 && ((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123)||(str[i]>127&&str[i]<176)||(str[i]>223&&str[i]<242)))
        {
            a+=(64+(str[i]-'0'+k-90))+'0';
        }
        if(str[i]+k>122 && ((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123)||(str[i]>127&&str[i]<176)||(str[i]>223&&str[i]<242)))
        {
            a+=(96+(str[i]-'0'+k-122))+'0';
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
    bool isWordLast = false;
    for(int i = 0; i<len(str); i++)
    {
        if(str[i]!=32)
        {
            a+=str[i];
            isWordLast = true;
        }
        else if(str[i]==32&&i<len(str)&&i!=0)
        {
            if(isWordLast)
            {
                a+=str[i];
                isWordLast = false;
            }
        }
    }
    return a;
}
