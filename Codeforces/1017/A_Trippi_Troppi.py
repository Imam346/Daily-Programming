t = int(input())
for _ in range(t):
    s = input().split()
    ans=""
    for word in s:
        # print(val)
        ans+=word[0]
    print(ans)