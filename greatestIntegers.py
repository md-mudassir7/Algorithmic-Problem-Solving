

for _ in range(int(input())):
    n=int(input())
    s=str(n)
    i=0
    while s[i]==s[i+1]:
        i+=1
        if i>=len(s)-1:
            break
    if i==len(s)-1:
        print(int(s[0]+1)*(i))
        
