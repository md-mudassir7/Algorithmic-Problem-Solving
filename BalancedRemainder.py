
def fun(c0,c1,c2,n):
    n=n//3
    res=0
    while c0!=n or c1!=n or c2!=n:
        if c0>n:
            c0-=1
            c1+=1
            res+=1
        if c1>n:
            c1-=1
            c2+=1
            res+=1
        if c2>n:
            c2-=1
            c0+=1
            res+=1
    print(res)
t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    c0,c1,c2=0,0,0
    for i in range(len(l)):
        if l[i]%3==0:
            c0+=1
        if l[i]%3==1:
            c1+=1
        if l[i]%3==2:
            c2+=1
    fun(c0,c1,c2,n)
