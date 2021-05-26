def xor(l):
    res=0
    for i in range(len(l)):
        res^=l[i]
    return res
t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    for i in range(n):
        for j in range(i+1,n+1):
            s=xor(l[i:j])
            print(s)
