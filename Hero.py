t=int(input())
for _ in range(t):
    a,b,c=map(int,input().split())
    l=list(map(int,input().split()))
    l1=list(map(int,input().split()))
    if c==1:
        if l1[0]>b:
            print('NO')
        elif l1[0]<=b:
            print('YES')
    else:
        for i in range(len(l)):
            b-=(l1[i]//a)*l[i]
            if b<0:
                break
        if i==len(l)-1:
            print('YES')
        else:
            print('NO')
