def fun(l):
    l.sort(reverse=True)
    x=[]
    y=[]
    x.append(l[0])
    for i in range(1,len(l)):
        if sum(x)>sum(y):
            y.append(l[i])
        else:
            x.append(l[i])
    return max(sum(x),sum(y))
x=int(input())
for _ in range(x):
    n=int(input())
    l=list(map(int,input().split()))
    print(fun(l))
