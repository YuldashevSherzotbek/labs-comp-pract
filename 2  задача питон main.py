p = int(input("Введите число p: "))
x = (p % 10) * 100 + ((p // 10) % 10) * 10 + p // 100
print("Число x:", x)
