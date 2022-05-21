

n = int(input())
arr = []
star = "*"
blank = " "
for i in range(1,n):
    line = ""
    for j in range(i):
        line += "*"
    for j in range(2*(n-i)):
        line += " "
    for j in range(i):
        line += "*"
    arr.append(line)
line = ""
for i in range(2*n):
    line += "*"
arr.append(line)
for i in reversed(range(n)):
    line = ""
    for j in range(i):
        line += "*"
    for j in range(2*(n-i)):
        line += " "
    for j in range(i):
        line += "*"
    arr.append(line)

for string in arr:
    print(string)