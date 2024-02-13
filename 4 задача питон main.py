def is_palindrome(number):
    return str(number) == str(number)[::-1]

number = int(input("Введите число: "))

if is_palindrome(number):
    print("Число является палиндромом.")
else:
    print("Число не является палиндромом.")
