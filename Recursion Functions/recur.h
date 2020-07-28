#pragma once
#ifndef recur_h

#include <iostream>
#include <string>
using namespace std;

int prod(unsigned int m, unsigned int n)
{
    if (n > 1)
    {
        return m + prod(m, n - 1);
    }
    else if (n == 1)
    {
        return m;
    }
}

int numberOfAppearances(int num, int digit)
{
    if (num != 0)
    {
        int last = num % 10;
        if (last == digit)
            return 1 + numberOfAppearances(num / 10, digit);
        else
            return numberOfAppearances(num / 10, digit);
    }
    else {
        return 0;
    }
}

string allPlus(string n)
{
    if (n.length() > 1)
    {
        string s;
            s += n[0];
            s += "+";
            s += allPlus(n.substr(1));
        return s;
    }
    else
    {
        return n;
    }
}

int numStringAppearances(string str, string sub)
{ 
    int index = str.find(sub);
    int length = sub.length();

    if (index != -1) {
        return 1 + numStringAppearances(str.substr(0, index)+str.substr(index + length, str.length()), sub);
    }
    else {
        return 0;
    }
}

#endif