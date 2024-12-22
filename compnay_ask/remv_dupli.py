 
 
def rev(ls):
    rs = []
    
    for i in ls:
        if i not in rs:
            rs.append(i)
    return rs
 
ls = [1,2,3,3,4,5,5,6,6]
print(ls)
print(rev(ls))
