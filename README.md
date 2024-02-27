# Deferent_Method_Using-C++
<h1><a href="https://github.com/Md-Rifat-Hossen/Deferent_Method_Using-C-/blob/master/Trapezoidal%20Rule%20using%20C%2B%2B/Main.cpp">Trapezoidal Rule</a></h1>
<details>


<img src="https://i.postimg.cc/YCWNzLqL/Screenshot-20231030-183008.jpg  " height="100" width="100%"/>
<p>where <br>1. n is the number of strips and can be any number. (1)<br><br> 2. yn = f (xn) are the values of f (xn) at the points xi where i = 0, 1,2, . . . , n.<br> <br>Note that x0 = a, xn = b.<br> <br>3. h is the width of each strip and<br><br> h = b−a/n .<br><br> 4. x1 = a+h, x2 = a+2h, x3 = a+3h,... and so on.</p>

  <h2>PDF : <a href="https://drive.google.com/file/d/1p3pu0YTtoKS7GBGgqZOznL_HQH4S4u1I/view?usp=drivesdk">Trapezoidal Rule</a></h2>

  
</details>

<h1><a href="https://github.com/Md-Rifat-Hossen/Deferent_Method_Using-C-/tree/master/Bisection%20Methode%20">Bisection Rule</a></h1>
<details>
<p>
The method is also called the interval halving method, the binary search method or the dichotomy method. This method is used to find root of an equation in a given interval that is value of ‘x’ for which f(x) = 0 . 
The method is based on The Intermediate Value Theorem which states that if f(x) is a continuous function and there are two real numbers a and b such that f(a)*f(b) 0 and f(b) < 0), then it is guaranteed that it has at least one root between them.

<br>
<br>
Assumptions: 
 
<br>
f(x) is a continuous function in interval [a, b]
f(a) * f(b) < 0<br>
Steps: 
 
<br>
<br>
Find middle point c= (a + b)/2 .
<br><br>
If f(c) == 0, then c is the root of the solution.<br><br>
Else f(c) != 0<br><br>
If value f(a)*f(c) < 0 then root lies between a and c. So we recur for a and c<br><br>
Else If f(b)*f(c) < 0 then root lies between b and c. So we recur b and c.<br><br><br>
Else given function doesn’t follow one of assumptions.
</p>
  
</details>

