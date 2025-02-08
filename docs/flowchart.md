``` mermaid

graph TD;

1{{Simple Calculator}} --> 2{{Get valid num1}}; 
2.1{{Get valid num1}} --> 2.2{{Take the first number}} --> 2.3{{Valid?}};

2.3 -- Yes --> 2.4{{Return}};
2.3 -- No --> 2.2;

2 --> 3{{Get valid op}};
3.1{{Get Valid op}} --> 3.2{{Take the operator}} --> 3.3{{Valid?}};

3.3 -- Yes --> 3.4{{Return}};
3.3 -- No --> 3.2;

3 --> 4{{Get valid num2}};
4.1{{Get Valid num2}} --> 4.2{{Take the second number}} --> 4.3{{Valid?}};

4.3 -- Yes --> 4.4{{Return}};
4.3 -- No --> 4.2;

4 --> 5{{Check Operator}}; 

5 --> 6{{op = +}} --> 7{{result = num1 + num2}} --> R{{Print result}};
5 --> 8{{op = -}} --> 9{{result = num1 - num2}} --> R;
5 --> 10{{op = *}} --> 11{{result = num1 * num2}} --> R;
5 --> 12{{op = /}} --> 13{{Check num2 == 0?}};

13 -- Yes --> 14{{Print undefined}};
13 -- No --> 15{{result = num1 / num2}} --> R;

R --> 16{{"Get valid (y/n) to continue?"}};

16 -- Yes --> 2;
16 -- No --> 17{{Exit}};


classDef customNode fill:#2E4E2E,stroke:#4CAF50,stroke-width:4px,color:#DFFFD6;
class 1,2,2.1,2.2,2.3,2.4,3,3.1,3.2,3.3,3.4,4,4.1,4.2,4.3,4.4,5,6,7,8,9,10,11,12,13,14,15,16,17,R customNode;

linkStyle default stroke:#4CAF50,stroke-width:4px;




```
