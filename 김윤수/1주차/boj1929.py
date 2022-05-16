def isPrime(num):
    if num == 1:
        return False
    else:
        for i in range(2, int(num ** 0.5)+1):
            if num % i == 0:
                return False
        return True
x, y  = input().split()
x = int(x)
y = int(y)
for i in range(x,y+1):
    if isPrime(i):
        print(i)