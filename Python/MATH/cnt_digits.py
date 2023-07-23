import math as m

# Approach 1
def cnt_digits1(n):
    cnt = 0
    while n != 0:
        n //=  10
        cnt += 1 
    return cnt

# Apporach 2
def cnt_digits2(n):
    return len(str(n))

# Approach 3
def cnt_digits3(n):
    return m.floor(m.log10(n) + 1)


n = int(input("Enter Number: "))
print("Number of digits in {}: {}".format(n,cnt_digits1(n)))
print("Number of digits in {}: {}".format(n,cnt_digits2(n)))
print("Number of digits in {}: {}".format(n,cnt_digits3(n)))