# Array
1. array values are stored into contigious memory if ---
 first element -----> x And Size of an Array element -----> y.
 Therefore,
    the first element == x.
    then second element == x+y.
    third element == x+2y.
    fourth element == x+3y.
    fifth element == x+4y.

2. Advantage -->
    1. Random Access.
    2. cache freindliness.

# Types of Arrays -->
--> there are two tyes of arrays-->
1. fixed sized arrays --> these dont allow more elements more than its current capacity.
    ex. int arr[100]    ----> these  are stack allocated memory based.
        int arr[n]  ----> these  are stack allocated memory based.
        int *arr = new int[n] // malloc. ----> these are heap allocated memory based
        int arr[] = {10,20,30,40,50}    ----> these  are stack allocated memory based.
2. Dynamic sized arrays --> these resizze on assignment of new elements.
    in this  Vector is a type of dynamic sizex arrays