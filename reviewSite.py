t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    res=0
    for i in l:
        if i==1:
            res+=1
        if i==3:
            res+=1
    print(res)
