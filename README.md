# Unconstrained-optimization

> C implementation of unconstrained optimization algorithms.

We are interested in the problem of optimizing a function f on a domain X and with values in R. We will always assume that X is a non-empty subset of R^d. Minimizing the function f is of course equivalent to maximizing −f.

--------------------------------------------

<p align="center">
    The problem therefore to be solved is: min f(x) = f (x*), x in X
</p>



-----------------------------------------------

The minimum argument is the set of values of X at which f reaches its minimum. When the minimum is reached at a single point x*, we frequently use
abuse of notation: arg min f(x) = x*.

We will always assume thereafter that the minimum is reached at a single point x* is therefore the problem to be solved will become:

----------------------------------------------


<p align="center">
    The problem therefore to be solved is: arg min f(x) = x*, x in X
</p>



-----------------------------------------------

Maximizing or minimizing a function is a common problem in many areas but it is not uncommon to encounter an optimization problem that does not allow of explicit solution. Numerical optimization techniques will then be used. To determine an optimum, these methods recursively construct a series of points (xn)n which converge towards a local minimum x* of the function f. These methods are based on knowledge of a given research direction, under these conditions the choice of the step of the gradient is very important, it conditions the good determination of the research direction.

------------------------------------------

<p align="center">
    xn+1 = xn + alpha * dn
</p>






------------------------------------------------


The direction of search dn often given by the gradient or the Hessian matrix. In particular, in the field of machine learning, the need to set a learning rate (size of steps) alpha  was recognized as problematic. Setting this too high parameter can cause the algorithm to diverge, the setting too low makes it slow to converge.



The correct step is the one that satisfies the following condition and it is usually found by a linear search algorithm.


------------------------------------------

<p align="center">
   min f(xn + alpha * dn) = alpha*, alpha>0
</p>



------------------------------------------------







# Implemented functions

## Numerical analysis for unidimensional functions

- [x] First order derivatives
- [x] Second order derivatives

## Numerical analysis for multidimensional functions

- [x] First order partial differential 
- [x] Second order partial differential 
- [x] Gradient 
- [x] Hessian
- [x] Determinant 
- [x] Positive definite matrix 
- [x] LU decomposition
- [x] Resolution of a lower triangular system
- [x] Resolution of a higher triangular system
- [x] Resolution of a system
- [x] Inverse of a matrix
- [x] Hessian inverse approximation (BFGS,DFP,SR1)



## Optimization for unidimensional functions

### Exact methods for optimization

- [x] Bisection method
- [x] Newton method
- [x] False position method

### Approximate methods for optimization

- [x] Armijo method
- [x] Goldstein method
- [x] Wolfe method (strong & weak)

## Optimization for multidimensional functions

- [x] Gradient descent method
- [x] Conjugate gradient method
- [x] Newton method
- [x] Quasi-Newton method 

