def gcd(a,b):
    if b>a:
        return gcd(b,a)
    elif b==0:
        return a 
    else:
        return gcd(b,a%b)

def lcm(a,b):
    k=gcd(a,b)
    return (a//k)*(b//k)*k

t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    print(gcd(a,b),lcm(a,b))    