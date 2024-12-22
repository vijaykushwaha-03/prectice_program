# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.

def isPrime(num):
    
    for i in range(2,num):
        if num % i == 0:
            return False
    return True
        
count  = 0
num = 2

n = int(input("Enter Numberth Element : "))

while count < n:
    if isPrime(num):
        count += 1
    if count == n:
        print(num)
    num += 1