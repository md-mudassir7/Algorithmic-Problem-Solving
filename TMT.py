
t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    s=list(s)
    t,m,f=0,0,1
    for i in range(n):
        if s[i]=='T':
            t+=1
        if s[i]=='M':
            m+=1
        if m>t:
            f=0
            break
    t,m=0,0
    for i in range(n-1,-1,-1):
        if s[i]=='T':
            t+=1
        if s[i]=='M':
            m+=1
        if m>t:
            f=0
            break
    if t!=2*m:
        f=0
    if f==0:
        print('NO')
    else:
        print('YES')
