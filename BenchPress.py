

t=int(input())
for _ in range(t):
    n,w,wr=map(int,input().split())
    l=list(map(int,input().split()))
    if wr>=w:
        print('YES')
    else:
        l.sort()
        j=0
        flag=0
        for i in range(n):
            if j>=n-1:
                break
            if l[j]==l[j+1]:
                wr+=2*l[i]
                if wr>=w:
                    flag=1
                    print('YES')
                    break
                j+=2
            else:
                j+=1
        if flag==0:
            print('NO')
