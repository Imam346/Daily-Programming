t = int(input())
for _ in range(t):
    n = int(input())
    if((n&1)==0): print(-1)
    else:
        for i in range(1,n+1,2): print(i, end=" ")
        for i in range(2,n,2): print(i, end=" ")
        print()