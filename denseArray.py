
def fun(a,b):
    if (max(a,b)/min(a,b))<=2:
        return 0
    else:
        ret=0
        while (max(a,b)/min(a,b))>2:
            if a<b:
                a=a*2
            else:
                b=b*2
            ret+=1
        return ret
t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    res=0
    for i in range(len(l)-1):
        res+=fun(l[i],l[i+1])
    print(res)
