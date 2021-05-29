# Pythagorean Triples Generator
## Source of algorithm*
[https://www.aimspress.com/article/doi/10.3934/math.2019.2.242](https://www.aimspress.com/article/doi/10.3934/math.2019.2.242)
### **\* There is a mistake in the article at `f=2n(2m-1)^2` when it should be `f=2n(2m-1)`**
## Performance
```
./a.out  1.24s user 3.13s system 48% cpu 9.105 total
```
to generate 1 Million triples, including time taken to output results
(`clang -O3 main.c && strip a.out` with Clang 11.1.0) 

(running on Arch Linux 64bit, Intel(R) Core(TM) i3-2350M CPU @ 2.30GHz)
