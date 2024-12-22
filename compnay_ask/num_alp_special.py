
def countn(str):
    
    chr = 0
    num = 0
    sp_spc = 0
    
    for char in str:
        if char.isalpha():
            chr += 1
        elif char.isdigit():
            num += 1
        else:
            sp_spc += 1
            
    return chr , num , sp_spc
    
    
    
str = "Hello My Name 123 !@# ino `12=323290"
chr,num,sp_spc = countn(str)


print(f"characters : {chr}")
print(f"Numbers : {num}")
print(f"Special And Spacr : {sp_spc}")

