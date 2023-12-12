#include <iostream>
#include <string>
#include "strMiddle.h"

using namespace std;

int len(string a)
{
    int size = 0;
    for(char b : a)
    {
        size++;
    }
    return size;
}

bool itc_isDigit(unsigned char a)
{
    if(a>47 && a<58)
    {
        return true;
    }
    return false;
}

unsigned char itc_toUpper(unsigned char c)
{
    return (c-'0'-32)+'0';
}

unsigned char itc_changeCase(unsigned char c)
{
    if(c>64 && c<91)
    {
        return (c-'0'+32)+'0';
    }
    else if(c>96 && c<123)
    {
        return (c-'0'-32)+'0';
    }
    else
    {
        return c;
    }
}

bool itc_compare(string s1, string s2)
{
    if(len(s1)!=len(s2))
    {
        return false;
    }
    for(int i = 0; i<len(s1); i++)
    {
        if(s1[i]!=s2[i])
        {
            return false;
        }
    }
    return true;
}

int itc_countWords(string str)
{
    bool brokenWord = false;
    bool isLastWord = false;
    int wordCounter = 0;
    for(int i = 0; i<len(str); i++)
    {
        if(str[i]==32||i==len(str)-1)
        {
            if(isLastWord&&!brokenWord)
            {
                wordCounter++;
            }
            brokenWord = false;
            isLastWord = false;
        }
        else if((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123)||(str[i]>127&&str[i]<176)||(str[i]>223&&str[i]<242))
        {
            if(!brokenWord)
            {
                isLastWord = true;
            }
        }
        else
        {
            brokenWord = true;
        }
    }
    return wordCounter;
}
