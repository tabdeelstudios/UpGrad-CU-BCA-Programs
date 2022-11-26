#Printing on the screen
#print("Hello");
#---------------------

#Dynamic Typing

#num1 = int(input("Enter the first number : "));
#print(num1);

#---------------------

#Arithmetic Operatos
#num1=10
#num2=2
#print(num1+num2)
#print(num1-num2)
#print(num1*num2)
#print(num1/num2)
#print(num1**num2)

#---------------------

#Decision Making

#num=0

#if num>10:
#print("Greater than 10!")
#print("Same if block")
#else	/* : */
#print("Smaller than 10!")

#amount = int(input("Enter the total amount : "))
#discount = 10

#if amount>1000:
#discount=30
#elif amount>750:
#discount=20
#elif amount>500:
#discount=15
#else	/* : */
#discount=10

#print("Your discount is : "+ str(discount))

#num=50

#if num==50 : print("Number is 50!")

#print("Number is 50!") if num==50 else print("Number is not 50")



#---------------------

#Loops

#count=1
#productCount = int(input("How many products do you have? (max 10)"))

# while productCount<10:
# print(count)
# count=count+1
# productCount=productCount+1

#break and continue

productCount = int (input ("How many products do you have? (max 10)"))
while productCount < 10:
    productCount+=1
    # productCount = productCount+1
    if productCount == 6:
        continue
    print (productCount)
    
print ("Out of the loop at 9")
