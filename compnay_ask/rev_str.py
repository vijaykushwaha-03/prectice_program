def rev(s):
    
    rev_str = ""
    
    for i in s:
        rev_str = i + rev_str
    return rev_str
    
s = "Hellow Vijay"
print(s)
print(rev(s))
 