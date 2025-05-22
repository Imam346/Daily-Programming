t = int(input())
for _ in range(t):
    n = int(input())
    ar = list(map(int,input().split()))

    for i in range(n): ar[i] = ar[i]-i
    mp = {}
    for i in range(n):
        mp[ar[i]] = mp.get(ar[i],0)+1
    
    ans=0
    for key,val in mp.items():
        val-=1
        cur = (val*(val+1))//2
        ans+=cur
    print(ans)
    