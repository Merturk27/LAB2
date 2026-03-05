
num = int(input("Enter a positive integer greater than 1: "))

steps = 0

print(num, end="")

while num != 1:
    if num % 2 == 0:
        num = num // 2
    else:
        num = num * 3 + 1

    print("->", num, end="")
    steps += 1

print("\nTotal steps:", steps)






while True:
    n = int(input("Enter a number between 10 and 100: "))
    if 10 <= n <= 100:
        break
    print("Invalid input. Try again.")


fizzcount = 0
buzzcount = 0
fizzbuzzcount = 0


for i in range(1, n + 1):
    if i % 7 == 0:
        continue
    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz")
        fizzbuzzcount += 1
    elif i % 3 == 0:
        print("Fizz")
        fizzcount += 1
    elif i % 5 == 0:
        print("Buzz")
        buzzcount += 1
    else:
        print(i)

# Summary
print("\nSummary:")
print(f"Fizz: {fizzcount}")
print(f"Buzz: {buzzcount}")
print(f"FizzBuzz: {fizzbuzzcount}")



x = int(input("Please enter a number between 3 and 9: "))


for i in range(1, x + 1):
    print("*" * i)


for i in range(x - 1, 0, -1):
    print("*" * i)



