def func(arr , n , key):
    for i in range(n):
        if(arr[i]==key):
            return i 
        
    return -1
arr=[5,93,57,9,0,1,4]
key=int(input("ENTER ELEMENT TO FIND "))
n=len(arr)
index=func(arr, n , key)
if (index==-1):
    print("ELEMENT NOT FOUND ")
else:
    print("ELEMENT FOUND AT POSITION "+ str(index+1))    