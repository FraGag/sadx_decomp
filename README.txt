Sonic Adventure DX: Director's Cut (PC version) Decompilation
=============================================================

This project aims to recreate the main executable (sonic.exe) and the several
DLLs that make up the Windows port of Sonic Adventure DX: Director's Cut in C
and C++.

The DLLs are mostly comprised of data, which makes them easy to decompile.
sonic.exe also contains a lot of data, but it contains practically all of the
game's code. The data can easily be extracted from the modules to then generate
C code files that can be used to regenerate a module containing the same data
and behaving identically to the original module, even if the produced module
isn't necessarily a bitwise copy of the original module. The Sonic Adventure
Tools project provides a tool for extracting data from the modules
automatically and has been used to produce the code files corresponding to the
data.

The goal of this project is to provide complete Visual C++ projects that each
generate a compatible version of one of the DLLs or of the main executable.
Having source files allows for replacing some of them (or all of them!) and
recompiling the project to bring modifications to the code or data without
having to mess with the executable or DLL directly. This allows for much more
flexibility as the data will be automatically reorganized by the compiler.

The project is starting with CHRMODELS.DLL, which contains the model and
animation data for each character in the game. Decompiling the other DLLs is
planned, and ultimately decompiling the main executable could be done, even if
the code is only disassembled initially.
