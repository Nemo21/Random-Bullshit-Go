t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    mx=-float('INF')
    for i in range(1,k+1):
        r=n%i
        if r>mx:
            mx=r
    print(mx)