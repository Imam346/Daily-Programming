import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    ar = list(map(int,input().split()))
    mp = {0:1}
    sum=0
    for i in range(n):
        if(i&1): ar[i]*=-1
        sum+=ar[i]
        if sum in mp:
            print("YES")
            return
        mp[sum]=1
    
    print("NO")

t = int(input())
for _ in range(t): solve()