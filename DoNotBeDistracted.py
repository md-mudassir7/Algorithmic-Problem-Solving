
t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    l=list(s)
    res=[l[0]]
    flag=0
    for i in range(1,n):
        if l[i]!=l[i-1] and l[i] not in res:
            res.append(l[i])
        elif l[i]!=l[i-1] and l[i] in res:
            flag=1
            break
    if flag==1:
        print("NO")
    else:   
        print("YES")
