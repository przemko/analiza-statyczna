# analiza-statyczna

## Kompilator Clang

### Przykład 1

Plik [ex1.c](ex1.c)


```bash
clang -Wall --pedantic -std=c11  -lm  ex1.c   -o ex1
ex1.c:4:10: warning: variable 'x' is uninitialized when used here
      [-Wuninitialized]
  return x;
         ^
ex1.c:3:8: note: initialize the variable 'x' to silence this warning
  int x;
       ^
        = 0
1 warning generated.
```

