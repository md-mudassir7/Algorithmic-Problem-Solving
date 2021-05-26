# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    pos=[]
    neg=[]
    for _ in range(n):
        temp=list(map(int,input().split()))
        m=temp[0]
        l=temp[1:]
        for i in range(len(l)):
            if l[i]>0 and (l[i] not in pos):
                pos.append(l[i])
            if l[i]<0 and (l[i] not in neg):
                neg.append(l[i])
    print(len(pos)*len(neg))
