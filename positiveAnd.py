import math
from sys import stdin, stdout 
from time import perf_counter
def is2(n):
    x=math.log10(n)/math.log10(2)
    if x-int(x)==0:
    	return True
    return False

t=int(input())
for _ in range(t):
    n=int(input())
    if is2(n):
        print(-1)
    elif n==1:
        print(1)
    else:
        if n==3:
            print(2,3,1)
        else:
            s='2 3 1 '
            for i in range(4,n+1):
                if is2(i):
                    s=s+str(i+1)+' '
                    continue
                elif is2(i-1):
                    s=s+str(i-1)+' '
                    continue
                else:
                    s=s+str(i)+' '
            print(s)
        
    
