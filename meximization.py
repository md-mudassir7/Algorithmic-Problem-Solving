t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    res=[]
    temp=[]
    l.sort()
    for i in range(len(l)):
        if l[i] not in res:
            res.append(l[i])
        else:
            temp.append(l[i])
    print(*(res+temp))
