
def reverse_number(n):
    revNum = 0
    while n != 0:
        rem = n % 10
        revNum = revNum*10 + rem
        n //= 10
    return revNum

n = int(input("Enter a Number: "))
print("Reverse of {}: {}".format(n, reverse_number(n)))