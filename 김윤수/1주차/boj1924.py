monthToDay = [0,31,28,31,30,31,30,31,31,30,31,30,31]
dayOfWeek = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
x, y = input().split()
month = int(x)
day = int(y)

for i in range(1,month):
    day += monthToDay[i]
print(dayOfWeek[day%7])