

n,a,x=map(int,input().split())
if x>(a*(n-a)):
    print(-1)
else:
    b=n-a
    p,q=x//b,x%b
    s='0'*(n-b-p-1)+'1'*q+'0'+'1'*(b-q)+'0'*p
    l=list(s)
    print(*l)
