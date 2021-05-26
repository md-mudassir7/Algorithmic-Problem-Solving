import math
def fun(l,x):
    i=1
    j=2
    while j<n:
        p=int(math.log2(l[i]))
        l[i]=l[i]^(2**p)
        l[j]=l[j]^(2**p)
        i+=1
        j+=1
    print(*l)
t=int(input())
for _ in range(t):
    t=list(map(int,input().split()))
    n,x=t[0],t[1]
    l=list(map(int,input().split()))
    fun(l,n)
