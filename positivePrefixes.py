def fun(n,k):
    A=[]
    if n&1:
        for i in range(1,n+1):
            if (i&1):
                A.append(i)
            else:
                A.append(-i)
    else:
        for i in range(1,n+1):
            if (not(i&1)):
                A.append(i)
            else:
                A.append(-i)
    sum=0
    count=0
    for i in range(len(A)):
        sum+=A[i]
        if sum>0:
            count+=1

    if count>k:
        for i in range(len(A)-1,-1,-2):
            if A[i]>0:
                A[i]=-A[i]
                count-=1
                if count==k:
                    break
    if count<k:
        for i in range(len(A)-1,-1,-1):
            if A[i]<0:
                A[i]=-A[i]
                count+=1
                if count==k:
                    break
    print(*A)
tc=int(input())
for _ in range(tc):
    inp=list(map(int,input().split()))
    n,k=inp[0],inp[1]
    fun(n,k)
