#include <iostream>
using namespace std;
long factorial(long n)
{
    if(n>1)
        return (n*factorial(n+1));
    else
        return 1;
}
int main()
{
    long n=3;
    cout<<n<<"!= "<<factorial(n);
    return 0;
}
/*
Paul plays college volleyball and wants to go pro. Each season he maintains a record of his play. He tabulates the number of times he breaks his season record for most points and least points in a game. Points scored in the first game establish his record for the season, and he begins counting from there.

For example, assume his scores for the season are represented in the array scores = [10,20,15,20]. Scores are in the same order as the games played. He would tabulate his results as follows:

 Count
Game  Score  Minimum  Maximum   Min Max
 0      10     10       10       0   0
 1      20     10       20       0   1
 2      15     15       20       1   1
 3      20     15       20       1   1

Given Paul's scores for a season, find and print the number of times he breaks his records for most and least points scored during the season.
Input:
The first line contains an integer n , the number of games.
The second line contains n space-separated integers describing the respective values of scores

Output:
Print two space-seperated integers describing the respective numbers of times his best (highest) score increased and his worst (lowest) score decreased.

Constraints:
1<=n<=1000
0<=scores[i]<=10^8

Time Limit:
1 sec

Example 1:
Input
9
10 5 20 20 4 5 2 25 1

Output
2 4

Example 2:
Input
10
3 4 21 36 10 28 35 5 24 42

Output
4 0

Example 3:
Input
9
10 5 20 20 4 5 2 25 1



Output
2 4

Sample I/O Explanation:
He broke his best record four times (after games 1,2 ,3 , and 9) and his worst record zero times (no score during the season was lower than the one he earned during his first game), so we print 4 0 as our answer.
*/


/*
Problem Statement:
Given an array of integers, find the nearest smaller number for every element such that the smaller element is on left side.If no small element present on the left print -1.

Input:
The first line of input contains T test cases.

The first line of each test case contains the number of elements in the array.

The second line of each test case contains the elements of the array.




Output:
Print the n elements.

Constraints:
1<=T<=100

1<=N<=100

0<=A[i]<10000




Time Limit:
1 sec

Example 1:
Input
2
3
1 6 2
6
1 5 0 3 4 5




Output
-1 1 1
-1 1 -1 0 3 4



Sample I/O Explanation:

*/


/*
Problem Statement:
There are n candidates appearing for an exam.The number of candidates is even. The i-th candidate has technical skill equals to ci.

The examiner wants to form n/2 teams. There should be exactly two candidates in each team,and each candidate should belong to exactly one team. Two candidates can form a team only if their skills are equal (otherwise they cannot understand each other and cannot form a team).

Candidates can solve problems to increase their skill. One solved problem increases the skill by one.

The examiner wants to know the minimum total number of problems students should solve to form exactly n/2 teams (i.e. each pair of candidates should form a team). Your task is to find this number.






Input:
The first line of the input contains one integer n (2≤n≤100) — the number of candidates. It is guaranteed that n is even.The second line of the input contains n integers c1,c2,…,cn (1≤ci≤100), where ai is the skill of the i-th candidates.

Output:
Print one number — the minimum total number of problems students should solve to form exactly n/2

teams.

Constraints:
n (2≤n≤100)
c1,c2,…,cn (1≤ci≤100)

Time Limit:
1 sec

Example 1:
Input
4
1 4 2 3

Output
2

Sample I/O Explanation:
*/