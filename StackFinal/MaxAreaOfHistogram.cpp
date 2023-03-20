#include <bits/stdc++.h>
#include <vector>
#include <stack>
#include <stdlib.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<ll, ll>
#define vi vector<ll>
#define vt(type) vector<type>
#define si set<ll>
int MaxAReaOfHistogram(int hist[], int n)
{
    /*
    Step1: take a stack
    Step2: To find maxarea so initialise maxarea with 0
    Step3: var to store top value of the stack
    Step4: var to find area of rectangle with the top value of stack
    Step5: iter through all the historgram
    Step6:  if as long as stack is empty or the top of stack for historgram is less than current iter of historgram
    Step6(1): push index++
    Step7: else update value of topcalue with current top of stack
    Step8: and pop that element
    Step9: calculate area of top rectangle with that if stack is empty then areaa would be hist[topvalue]*i
    Step9(1):  area=hist[topvalue]*(i-stack's top value-1)
    Step10:if maxarea<areatop update maxarea with value of area of top
    Step11: if stack still not empty , repeat
    */
    stack<int> check;
    int MaxArea = 0;
    int topvalue;
    int AreaaWithTop = 0;
    int i = 0;
    while (i < n)
    {
        if (check.empty() || hist[check.top()] <= hist[i])
        {
            check.push(i++);
        }
        else
        {
            topvalue = check.top();
            check.pop();
            if (check.empty())
            {
                AreaaWithTop = hist[topvalue] * i;
            }
            else
            {
                AreaaWithTop = hist[topvalue] * (i * check.top() - 1);
            }
            if (MaxArea < AreaaWithTop)
            {
                MaxArea = AreaaWithTop;
            }
        }
    }
    while (check.empty() == false)
    {
        topvalue = check.top();
        check.pop();
        if (check.empty())
        {
            AreaaWithTop = hist[topvalue] * i;
        }
        else
        {
            AreaaWithTop = hist[topvalue] * (i * check.top() - 1);
        }
        if (MaxArea < AreaaWithTop)
        {
            MaxArea = AreaaWithTop;
        }
    }
    return MaxArea;
}
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int hist[n];
        for (int i = 0; i < n; i++)
        {
            cin >> hist[i];
        }
        cout << "Maximum area is" << MaxAReaOfHistogram(hist, n);
    }
    return 0;
}
