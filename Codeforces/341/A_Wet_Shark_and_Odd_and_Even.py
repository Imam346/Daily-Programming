n = int(input())
ar = list(map(int,input().split()))
even=0
odd = []
for val in ar:
    if((val&1)==0):
        even+=val
    else: odd.append(val)
if((len(odd)&1)==0): print((even+sum(odd)))
else: 
    odd.sort()
    even += (sum(odd)-odd[0])
    print(even)
