def fun(l,n,k):
    if k==n:
        return max(l)
    else:
        j=0
        a=[]
        for i in range(n-k+1):
            if j>=n:
                break
            a.append(max(l[j:k+j]))
            j+=1
        return a

n,k=map(int,input().split())
l=list(map(int,input().split()))
print(fun(l,n,k))
