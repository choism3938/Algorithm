n = int(input())

ans =0

while n % 5 != 0:
    if n < 0:
        print('-1')
        exit()
    n -= 3
    ans += 1
ans += n//5

print(ans)


