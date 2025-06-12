t = int(input())
for _ in range(t):
    n,m,l,r = map(int,input().split())
    if(r>=m):
        x = r-m
        print(0,r-x)
    else:
        print(-(m-r),r)