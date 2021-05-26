
for _ in range(int(input())):
    n=int(input())
    if n%4==0:
        print(1,n)
    elif n%4==1:
        print(1,1)
    elif n%4==2:
        print(2,n,1)
    elif n%4==3:
        print(0)
        
