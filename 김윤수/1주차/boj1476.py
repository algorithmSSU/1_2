e,s,m = input().split()
e = int(e)
s = int(s)
m = int(m)
year = 1
while True:
    if (year-e) % 15 == 0 and (year-s)% 28 == 0 and (year - m) % 19 == 0:
        break
    year += 1
print(year)