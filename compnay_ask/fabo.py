 
 
 
def fabo(n):
    
    f1 = 0
    f2 = 1
    
    if n < f1 or n <f2:
        print("Number Shuld be larg !")
        exit()
    
    print(f1)
    print(f2)
    
    for i in range(2,n):
        f3 = f1+f2
        print(f3)
        f1 = f2
        f2 = f3


n = int(input("Enter Number =>"))
fabo(n)