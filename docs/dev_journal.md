# Simple Calculator - Dev Journal
Tracks the developement process, including version history, bugs/issues, and ideas.
> Use this journal to stay informed about the project's current state and future plans.


# `v0.1.1 [Unreleased]`
GitHub Branch : `v0.1.1_dev`

## Features 
- Do you want to perform another calculation? (y/n): 
    - Solution : `goto exitloop; exitloop:`

## Bugs/ Issues
+ `simpleCalculator.exe` file closes after entering the input (Can't able to read the result).
    + Solution : Ask user at the end  `Do you want to perform another calculation? (y/n): `
        + y - call `main()`
        + n - `exit(0)`

## Code Improvements
+ Function Reanaming : 
*(The function not only validates the input but also takes it)*
    + `isNum1Valid()` → `get_valid_num1()`
    + `isNum2Valid()` → `get_valid_num2()`
    + `isOpValid()` → `get_valid_op()`
    + `isCalculationCon()` → `get_valid_yn_to_continue()` 

+ Spelling Corrections
    + undifined → `undefined`

## README.md
- Add details of windows exucutable file & docs fils with links.


# [`v0.1.0`](https://github.com/pranavdharkar/simple_calculator/releases/tag/v0.1.0)
Release Date : 04 Feb 25 <br/>
GitHub Branch : **[`v0.1.0`](https://github.com/pranavdharkar/simple_calculator/tree/v0.1.0)** <br/>
Download the Windows executable : **[`simpleCalculator.exe`](https://github.com/pranavdharkar/simple_calculator/releases/download/v0.1.0/simpleCalculator.exe)**

## Features
- Basic command-line calculator that supports: Addition (+), Subtraction (-), Multiplication (*) & Division (/) (Handles division by zero),
- Ensures valid user input, preventing errors caused by invalid characters or operations.