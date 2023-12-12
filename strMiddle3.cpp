#include <iostream>
#include <string>
#include "strMiddle.h"

using namespace std;

bool itc_isIp(string str)
{
    int numCount = 0;
    int dotCount = 0;
    bool isNumLast = false;
    bool isDotLast = false;
    for(int i = 0; i<len(str); i++)
    {
        if(str[i]>47 && str[i]<58)
        {
            if(!isNumLast)
            {
                numCount++;
            }
            isNumLast = true;
            isDotLast = false;
        }
        else if(str[i]==46)
        {
            if(!isDotLast)
            {
                dotCount++;
            }
            else
            {
                return false;
            }
            isDotLast = true;
            isNumLast = false;
        }
        else
        {
            return false;
        }
    }
    if(numCount==4&&dotCount==3)
    {
        return true;
    }
    return false;
}
