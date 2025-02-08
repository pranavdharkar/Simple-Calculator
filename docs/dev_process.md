# development_process
Outlines the development process for a **Simple Calculator**.

## Project Setup
1. Name the project: **Simple Calculator**
2. Create a GitHub repository.

## Application Overview
- A basic command-line calculator that supports: `+`, `-`, `*`, `/`

## Features
- Perform one operation at a time.
- Allows continuous calculations without restarting the program. 

## Considerations

### Mathematical
- Handle division by zero appropriately.

### Input Validation
- Ensure `num1` and `num2` are valid numeric values.
- Prompt the user until valid numbers are entered.

### Operator Validation
- Accept only the four basic operators.
- Prompt the user until valid operator are entered.

## Development Steps

### Design
- Create a **[`flowchart`](./flowchart.md)** outlining the program logic.
- Write pseudocode.

### Coding
- Use snake_case for variable and function names.
- Write modular and maintainable code.

### Testing
- Test with both valid and invalid inputs.
- Cover edge cases such as division by zero.

## Bug and Idea Tracking
- Log improvement ideas, identified bugs in **[`dev_journal.md`](./docs/dev_journal.md)**.
- Continue this process until there are no outstanding bugs or ideas.

## Release
* Build the Windows executable
* Create a GitHub release

### Documentation
- Update the **[`dev_journal.md`](./docs/dev_journal.md)** and **[`README.md`](../README.md)**.

## Release
* Update main branch links in all documentation
* Create a release branch from the main branch
