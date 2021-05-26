
for _ in range(int(input())):
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    if sum(l)==x:
        print("NO")
    else:
        s=0
        for i in range(n):
            s+=l[i]
            if s==x:
                l[i],l[i+1]=l[i+1],l[i]
                break
        print("YES")
        print(*l)
