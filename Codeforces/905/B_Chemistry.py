t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    s = input()

    mp = {}
    for i in range(n):
        mp[s[i]] = mp.get(s[i],0)+1
    odd=0
    for key,val in mp.items():
        # print(key,val)
        if(val%2==1):
            odd+=1
    if(odd<k or odd==k or (odd-1)==k): print("YES")
    else: print("NO")