# Even / Odd Checker

Simple C++ console program that checks whether a given integer is even or odd.

## Features
- Reads a number from standard input
- Validates input (reports invalid input)
- Prints whether the number is even or odd

## Files
- `main.cpp` — program source

## Prerequisites
- Microsoft Visual Studio (2022/2026) or a C++ compiler (g++)

## Build and run
### Visual Studio
1. Open Visual Studio.
2. Open the project file `Even _Odd_ Checker.vcxproj` or open the folder `Even _Odd_ Checker`.
3. Build the project (Build -> Build Solution or Ctrl+Shift+B).
4. Run the program (Debug -> Start Without Debugging or Ctrl+F5).

### Command line (with g++)
```powershell
cd "Even _Odd_ Checker"
g++ -std=c++17 -O2 -o even_odd main.cpp
./even_odd
```

## Usage
When running the program, it prompts:

"please enter a number to check if it is even or odd"

Type an integer and press Enter. The program will print whether the number is even or odd, or report "invalid input" if the typed value is not a number.

## Contributing
Feel free to open issues or pull requests. Small improvements: better input loops, support for big integers, unit tests.

## License
MIT
