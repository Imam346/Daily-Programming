def solve():
    l1,b1,l2,b2,l3,b3=map(int,input().split())
    flag=False
    if(l1==(b1+b2+b3) and l1==l2 and l2==l3): flag=True
    if(b1==(l1+l2+l3) and b1==b2 and b2==b3): flag=True
    if(b1==(l1+l2) and b1==(b2+b3) and l2==l3): flag=True
    if(l1==(b1+b3) and l1==(l2+l3) and b2==b3): flag=True
    
    if(flag): print("YES")
    else: print("NO")

t = int(input())
for _ in range(t): solve()