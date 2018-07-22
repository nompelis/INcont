# INcont
A small library that abstracts the use of some C++ containers in C & Fortran


SUMMARY

This is a library intended to enable the use of "vector" C++ STL containers
in plain ANSI C and in Fortran. It exists because I feel bad for people who
insist on using, or are forced to use, Fortran for tasks that would be greatly
simplified with some C++ constructs. The library has primitive functionality,
but it gets the job done.

If you want to keep adding double/real/integer*4/integer*8 items to an array
without worrying about its size, without knowing its final size ahead of time,
and want to still be able to address each item by index, this is what you are
looking for.

Multiple vector containers are managed via "handles" which are easily managed
atomic types in Fortran. The reason for this is that one may need to keep track
of multiple arrays of each type, corresponding to different semantics when it
comes to what they represent. The total number of arrays of each type is a
hard-wired constant at compile time, but it comes at little overhead. Any future
version of this library, should we all be unfortunate enough to need one, will
have this number managed dynamically.


LIMITATIONS

Lots...

If you are inquiring on this library's limitations, you are ready to learn C++
or other, more advanced programming languages.


IN 2018/07/22
