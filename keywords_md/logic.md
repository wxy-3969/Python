# 逻辑与判断关键字详细介绍
1. if  
if语句用于判断一个条件是否为成立, 如果条件成立, 则执行if语句后的代码块, 否则执行else语句后的代码块.
```python
n = 10
if n > 0:
    print("n is positive")
else:
    print("n is negative")

# 输出：n is positive
```  

2. elif  
elif是else if的缩写, 用于在if语句中添加多个条件判断.
```python
n = -1
if n > 0:
    print("n is positive")
elif n < 0:
    print("n is negative")
else:
    print("n is zero")

# 输出：n is negative
```  

3. else  
else语句用于在if语句中处理所有不满足if条件的情况.
```python
n = 0
if n > 0:
    print("n is positive")
elif n < 0:
    print("n is negative")
else:
    print("n is zero")

# 输出：n is zero
```  

4. in  
in关键字用于判断一个元素是否在一个序列中.
```python
if 1 in [1, 2, 3]:
    print("1 is in the list")
else:
    print("1 is not in the list")

# 输出：1 is in the list
```  

5. is  
is关键字用于判断两个变量是否指向同一个对象.
```python
a = 1
b = 1
if a is b:
    print("a and b are the same object")
else:
    print("a and b are not the same object")

# 输出：a and b are the same object
```  

6. not  
not关键字用于对一个条件取反.
```python
n = -1
if not (n > 0):
    print("n is not positive")
else:
    print("n is positive")
# 输出：n is not positive
```  

7. and  
and关键字用于对多个条件进行逻辑与操作.
```python
if n > 0 and n < 10:
    print("n is positive and less than 10")
else:
    print("n is not positive or greater than or equal to 10")
# 输出：n is not positive or greater than or equal to 10
```  

8. or  
or关键字用于对多个条件进行逻辑或操作.
```python
if n > 0 or n < 0:
    print("n is positive or negative")
else:
    print("n is zero")
# 输出：n is positive or negative
```  

9. true  
true关键字用于表示True, 表示条件成立.
```python
if True:
    print("True示条件成立")
else:
    print("False表示条件不成立")
# 输出：True表示条件不成立
```  

10. false
false关键字用于表示False, 表示条件不成立.
```python
if False:
    print("False表示条件不成立")
else:
    print("True表示条件成立")
# 输出：False表示条件不成立
```  

11. None
None关键字用于表示空值, 表示没有值.
```python
x = None
print(x)
# 输出：None
```  
