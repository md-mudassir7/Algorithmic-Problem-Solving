t=int(input())
for _ in range(t):
    n=int(input())
    if n==1:
        print(20)
        continue
    if n==2:
        print(36)
        continue
    if n==3:
        print(51)
        continue
    if n==4:
        print(60)
        continue
    else:
        temp=n//4
        res=(temp-1)*44
        temp=n%4
        if temp==0:
            res+=60
        if temp==1:
            res+=76
        if temp==2:
            res+=88
        if temp==3:
            res+=99
        print(res)
