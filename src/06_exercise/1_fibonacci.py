
first = 0
second = 1

print(first)
print(second)
for i in range(0, 10):
    new = first + second
    first = second
    second = new
    print(second)