def isNice(temp):
    for i in range(1,len(temp)):
        if sum(temp[:i])==sum(temp[i:]):
            return True
    return False
def fun(s):
    cnt=0
    temp=s
    for i in range(len(s)):
        for j in range(i+1,len(s)):
            temp[i],temp[j]=temp[j],temp[i]
            if isNice(temp):
                cnt=cnt+1
            temp[i],temp[j]=temp[j],temp[i]
    print(cnt)

t=int(input())
for _ in range(t):
    n=int(input())
    s=[x for x in range(1,n+1)]
    if sum(s)%2!=0:
        print('0')
    else:
        fun(s)
