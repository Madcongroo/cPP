# C++ Piscine / Modules (cpp00 → cpp09)

This repository contains my C++98 learning exercises, organized by module (`cpp00` … `cpp09`).
Each exercise focuses on one core concept; below is a one-line summary per exercise.

## Build

Each `exXX` is standalone.

```sh
cd cpp01/ex03
make
./Violence
```

(Names/binaries depend on each exercise’s `Makefile`.)

## Modules & Exercises (one-line notions)

### cpp00 — Basics, I/O, first classes
- `cpp00/ex00` — CLI args + basic `std::string` transformations and output.
- `cpp00/ex01` — First OOP project: small data model + user input + formatted display.

### cpp01 — Memory, references, composition, file streams
- `cpp01/ex00` — Stack vs heap allocation (`new`/`delete`) with a simple class.
- `cpp01/ex01` — Dynamic arrays of objects (allocation patterns + lifecycle).
- `cpp01/ex02` — Pointers vs references: addresses, dereference, aliasing.
- `cpp01/ex03` — Composition and references in classes (lifetime/const correctness).
- `cpp01/ex04` — File I/O + string search/replace using `std::ifstream`/`std::ofstream`.
- `cpp01/ex05` — Member-function dispatch (e.g., function pointers / message levels).

### cpp02 — Fixed-point, canonical form, operator overloading
- `cpp02/ex00` — Orthodox Canonical Form (rule of three) on a fixed-point type.
- `cpp02/ex01` — Constructors + conversion logic + basic operator overloading.
- `cpp02/ex02` — Full operator set (comparisons/arithmetic/inc-dec) + helpers (min/max).

### cpp03 — Inheritance, method overriding, reuse
- `cpp03/ex00` — Encapsulation and stateful behavior in a base “Trap” class.
- `cpp03/ex01` — Single inheritance + specialization/overrides in a derived class.
- `cpp03/ex02` — Extending the hierarchy with another derived type + reuse.

### cpp04 — Polymorphism, virtuals, deep copy, abstract interfaces
- `cpp04/ex00` — Polymorphism with virtual methods (and a “wrong” non-virtual example).
- `cpp04/ex01` — Deep copy with dynamic members (copy ctor/assignment/destructor).
- `cpp04/ex02` — Abstract base classes and pure virtual interfaces.

### cpp05 — Exceptions, abstract forms, interaction between classes
- `cpp05/ex00` — Exceptions + invariants + custom `what()` messages.
- `cpp05/ex01` — Two-class collaboration with exceptions and access control.
- `cpp05/ex02` — Abstract base class + concrete implementations (inheritance + behavior).
- `cpp05/ex03` — Simple factory pattern to create the right derived type at runtime.

### cpp06 — Casting, serialization, RTTI
- `cpp06/ex00` — Scalar parsing + explicit conversions + edge cases (NaN/inf).
- `cpp06/ex01` — Pointer serialization via `uintptr_t` (`reinterpret_cast`).
- `cpp06/ex02` — RTTI and `dynamic_cast` to identify derived types safely.

### cpp07 — Templates
- `cpp07/ex00` — Function templates (generic operations/types).
- `cpp07/ex01` — Template functions over arrays/iterables (apply a callable).
- `cpp07/ex02` — Class templates + bounds checking + exception safety.

### cpp08 — STL containers, iterators, algorithms
- `cpp08/ex00` — Template helper over STL containers (search with iterators).
- `cpp08/ex01` — Range algorithms + storing many values + min/max span computation.
- `cpp08/ex02` — Container adapters + exposing iteration (stack-like interface).

### cpp09 — Parsing, containers, algorithms, performance
- `cpp09/ex00` — Parsing data files + associative containers (maps) for lookups.
- `cpp09/ex01` — Stack-based evaluation (Reverse Polish Notation).
- `cpp09/ex02` — Merge-insert style sorting + comparing container performance.

## Notes
- Target standard is **C++98** (as used in the module Makefiles).
- Most exercises emphasize correct resource management, copy semantics, and clear APIs.
