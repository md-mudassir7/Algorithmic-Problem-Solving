
t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    j=0
    for i in range(k):
        while j<n-1 and l[j]==0:
            j+=1
        l[j]-=1
        l[-1]+=1
    print(*l)
        
