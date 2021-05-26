t=int(input())
for _ in range(t):
    n,m=map(int,input().split())
    cnt=0
    l=[1 for x in range(n+1)]
    for i in range(2,n+1):
        temp=m%i
        cnt+=l[temp]
        for j in range(temp,n+1,i):
            l[j]+=1
    print(*l)
    print(cnt)
