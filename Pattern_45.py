# Test Pattern Question

n = int(input("Enter the Number of Rows : "))
ans = []
count = 1
for i in range(n):
    lst = []
    for num in range(0,4):
        lst.append(str(count))
        count += 1
    ans.append(lst)
        
# Printing Even Indexes
for i in range(0,len(ans)):
    if(i%2 == 0):
        x = "*".join(ans[i])
        print(x)

# Printing Odd Indexes
for i in range(len(ans)-1,0,-1):
    if(i%2 != 0):
        x = "*".join(ans[i])
        print(x)
            
'''
Output
Enter the Number of Rows : 5
1*2*3*4
9*10*11*12
17*18*19*20
13*14*15*16
5*6*7*8
'''
            
            