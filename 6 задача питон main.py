def sum_of_digits(number):
    return sum(int(digit) for digit in str(number))

num1 = int(input("Введите первое натуральное число: "))
num2 = int(input("Введите второе натуральное число: "))

sum1 = sum_of_digits(num1)
sum2 = sum_of_digits(num2)

if sum1 > sum2:
    print("Сумма цифр первого числа больше.")
elif sum2 > sum1:
    print("Сумма цифр второго числа больше.")
else:
    print("Суммы цифр обоих чисел равны.")
