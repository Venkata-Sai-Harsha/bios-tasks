import re   
regex = '^[a-z0-9]+[\._]?[a-z0-9]+[@]\w+[.]\w{2,3}$'  
def check(email):   
    if(re.search(regex,email)):   
        print("True")   
    else:   
        print("false")   
      
if __name__ == '__main__' :   
      
    email = input("enter email: ") 
    check(email)
