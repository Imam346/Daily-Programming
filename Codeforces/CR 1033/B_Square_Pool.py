def solve():
    n,s=map(int,input().split())
    ans=0
    for i in range(n):
        dx,dy,x,y = map(int,input().split())
        if(dx==-1 and dy==1 or dx==1 and dy==-1):
            if x+y==s: ans+=1
        elif(x==y): ans+=1
        
    print(ans)

t = int(input())
for _ in range(t): solve()