#ifndef STRMIDDLE_H_INCLUDED
#define STRMIDDLE_H_INCLUDED

#include <string>

using namespace std;

int len(string a);
bool itc_isDigit(unsigned char a);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);

#endif // STRMIDDLE_H_INCLUDED
