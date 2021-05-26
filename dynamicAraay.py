n,q=map(int,input().split())
quer=[]
s=[]
for _ in range(n):
    s.append([])
for _ in range(q):
    quer.append(list(map(int,input().split())))

last=0

for i in range(q):
    if quer[i][0]==1:
        j=((quer[i][1]^last)%n)
        s[j].append(quer[i][2])
    if quer[i][0]==2:
        j=((quer[i][1]^last)%n)
        last=s[j][quer[i][2]]
        print(last)
        
    
