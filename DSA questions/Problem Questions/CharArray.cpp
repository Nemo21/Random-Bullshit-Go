#include <iostream>
using namespace std;
// to check if specialcharacter or not
bool specialchar(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return false;
    }
    else
    {
        return true;
    }
}
// to convert a char to lower case
char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        char res = ch - 'A' + 'a';
        return res;
    }
    else
    {
        return ch;
    }
}
// valid character
bool validchar(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
// is palindrome
bool isPalindrome(string s)
{
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (validchar(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }
    return checkPalindrome(temp);
}
bool checkifequal(int arr1[26],int arr2[26])
    {
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                return 0;
            }
        }
        return 1;
    }
//function to check if there exists a permutation of s1 in s2
bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count1[index]++;
        }
        int i=0;
        int windowsize=s1.length();
        int count2[26]={0};
        while(i<windowsize && i<s2.length())
        {
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkifequal(count1,count2))
        {
            return 1;
        }
        while(i<s2.length())
        {
            char newch=s2[i];
            int index=newch-'a';
            count2[index]++;
            char oldch=s2[i-windowsize];
            index=oldch-'a';
            count2[index]--;
            if(checkifequal(count1,count2))
            {
                return 1;
            }
            i++;
        }
        return 0;
    }
// function to get maximum occuring character in a string
char GetMaxOccCharac(string str)
{
    int alpha[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char character = str[i];
        int occurance = 0;
        if (character >= 'a' && character <= 'z')
        {
            occurance = character - 'a';
        }
        else
        {
            occurance = character - 'A';
        }
        alpha[occurance]++;
    }
    int maximum = -1;
    int answer = 0;
    for (int j = 0; j < 26; j++)
    {
        if (maximum < alpha[j])
        {
            answer = j;
            maximum = alpha[j];
        }
    }
    char finalanswer = 'a' + answer;
    return finalanswer;
}
// function to remove spaces and add some character in place of it
string RemoveSpacesAddCharacter(string str)
{
    string tempnew = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            tempnew.push_back('@');
            tempnew.push_back('4');
            tempnew.push_back('0');
        }
        else
        {
            tempnew.push_back(str[i]);
        }
    }
    return tempnew;
}
// function to remove all occurences of a specific substring from the original string
string RemoveOccurencesSubstring(string strin, string substrin)
{
    while (strin.length() != 0 && strin.find(substrin) < strin.length())
    {
        strin.erase(strin.find(substrin), substrin.length());
    }
    return strin;
}
// or can do is take new string and remove all special character and white spaces then check that if that new string is palindrome or not

// function to check if string palindrome or not(this is NOT case sensitive function)
bool checkPalindrome1(char stri[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (specialchar(stri[start]))
        {
            start++;
            continue;
        }
        if (specialchar(stri[end]))
        {
            end--;
            continue;
        }
        if (toLowerCase(stri[start]) != toLowerCase(stri[end]))
        {
            return false;
        }
        start++;
        end--;
    }
    return 1;
}
// function to check if string palindrome or not(this is case sensitive function)
bool checkPalindrome(char stri[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (stri[start] != stri[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
// function to reverse a char array
void reversestring(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
// function to find the length of a char array
int GetLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Your name is " << name << endl;
    cout << "Length is: " << GetLength(name) << endl;
    return 0;
}
/*
banua's number system 
find product of the numbers such that there exists at max one decimal number
int test;
cin>>test;
while(test--){
    int n;
    cin>>n;
    while(n%10==0)
    {
        zero++;
        n=n/10;
    }
    ans=ans*n;
    cout<<ans;
    while(zero){
        cout<<0;
        zero--;
    }
}









*/