# StringsLibrary
Library consisted of puts, strlen, strcpy, strncpy and others
```
\include\ - foldes with strings library, and headers consisted of __assert__ macro and print defines
\src\ - dynamic unit-test system. Not completed due to lack of knowlegde about strict types of functions. Maybe someday i'll fix it
```
# To build:
```
git clone https://github.com/hK04/StringsLibrary/
cd StringsLibrary/
make 
./main
```

```diff
- [Note] make clean deletes not only *.d but also main itself (in order to be able to usa make again)
```
# Valgrind output:
```
valgrind ./main
==10324== Memcheck, a memory error detector
==10324== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10324== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==10324== Command: ./main
==10324== HEAP SUMMARY:
==10324==     in use at exit: 0 bytes in 0 blocks
==10324==   total heap usage: 4 allocs, 4 frees, 5,636 bytes allocated
==10324== 
... work of program
==10324== All heap blocks were freed -- no leaks are possible
==10324== 
==10324== For lists of detected and suppressed errors, rerun with: -s
==10324== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
