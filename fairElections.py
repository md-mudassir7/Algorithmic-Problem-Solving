t=int(input())
for _ in range(t):
    n,m=map(int,input().split())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    l1.sort()
    l2.sort(reverse=True)
    res=0
    for i in range(len(l1)):
        if sum(l1)>sum(l2):
            break
        else:
            l1[i],l2[i]=l2[i],l1[i]
            res+=1
    if sum(l1)>sum(l2):
        print(res)
    else:
        print(-1)
