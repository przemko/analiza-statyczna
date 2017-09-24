# analiza-statyczna

## Kompilator Clang

Przykłady kompilowano z opcjami ```-Wall --pedantic -std=c11```. 

Analizę statyczną przeprowadzano z opcją ```--analyze```.

### Przykład 1

Plik [ex1.c](ex1.c)

Zarówno kompilacja jak i analiza statyczna wykryły błąd polegający na niezainicjowaniu zmiennej ```x```.

### Przykład 2

Plik [ex2.c](ex3.c)

Tylko analiza statyczna wykryła błąd polegający na niezainicjowaniu zmiennej ```x```.

### Przykład 3

Plik [ex3.c](ex3.c)

Tylko analiza statyczna wykryła błąd polegający na zarezerwowaniu zbyt małego obszaru pamięci (nie ma miejsca na znak ```\0``` kończący łańcuch znaków).
