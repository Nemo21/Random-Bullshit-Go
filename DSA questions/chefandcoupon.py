t=int(input())
for _ in range(t):
    d,c=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    dc=d+d
    cwc=c
    suma=sum(a)
    sumb=sum(b)
    if(suma<150):
        cwc+=d
    if(sumb<150):
        cwc+=d
    if(cwc<dc):
        print("YES")
    else:
        print("NO")
    
    