n = int(input())
mp = {}
for _ in range(n):
    s = input()
    if s not in mp:
        print("OK")
        mp[s]=1
    else:
        print(f"{s}{mp[s]}")
        mp[s]+=1