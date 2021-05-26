s=input()
s1=input()
s,s1=s.lower(),s1.lower()
if s==s1:
    print(0)
elif s<s1:
    print(-1)
else:
    print(1)
