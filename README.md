# Simple Calculator (C++)
A basic command-line calculator that supports:

+ Addition (+)

- Subtraction (-)

* Multiplication (*)

* Division (/) (Handles division by zero)

This project ensures valid user input, preventing errors caused by invalid characters or operations.



## Design Considerations
### 1. Input Validation
+ Check that num1 and num2 are valid numeric values. <br/>
+ If a user enters a string or character, the program will repeatedly prompt for a valid number.

### 2. Operator Validation
+ Accepts only four basic operators: +, -, *, /. <br/>
+ If an invalid operator is entered, the program prompts the user until a valid operator is provided.

### 3. Mathematical Consideration
+ Standard division (a / b) works only if b ≠ 0. <br/>
+ If b = 0, the program displays an result as undefined:

### 4. Single Operation Only
+ This calculator performs only one operation at a time. <br/>
+ If the user wants to perform another calculation, they need to restart the program.

## Flowchart

Created the `flowchart.md` with help of mermaid (Mermaid is a JavaScript-based tool that allows you to create diagrams and flowcharts using simple text syntax within Markdown files).

[View Flowchart](Flowchart.md)


## How to Compile & Run

- Using g++ (Linux/macOS/Windows) 

**1. Clone this repository**

```
git clone https://github.com/pranavdharkar/Simple-Calculator.git
cd Simple-Calculator
```

**2. Compile the program**
```
g++ simpleCalculator.cpp -o simpleCalculator
```
**3. Run the executable**
```
./simpleCalculator  # Linux/macOS  
./simpleCalculator.exe # Windows 
```


## Example

``` 
Enter a first number: abc
Invalid input. Please enter a valid first number: 10

Enter an operator (+ - * /): x
Invalid Operator. Please enter a valid operator (+ - * /): *

Enter a second number: hello
Invalid input. Please enter a valid second number: 5

Result: 50 
```
