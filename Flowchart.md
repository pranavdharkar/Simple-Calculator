``` mermaid
graph TD;

1[Simple Calculator];

1--> 2["Take the first number as input & ensure it is valid"]; 
2.1[Take the first number as input & ensure it is valid];

2 --> 3["Take the operator as input & ensude it is valid"];
3.1["Take the operator as input & ensude it is valid"];

3 --> 4["Take the second number as input & ensure it is valid"];
4.1["Take the second number as input & ensure it is valid"];

4 --> 5[If];

R[Print result];

5 --> 6[op = +] --> 7[result = num1 + num2] --> R;

5 --> 8[op = -] --> 9[result = num1 - num2] --> R;

5 --> 10[op = *] --> 11[result = num1 * num2] --> R;

5 --> 12[op = /];

12 --> 13[If num2 ==0];

13 -- Yes --> 14[Print undefined];

13 -- No --> R;



2.1 --> 2.2[Take the first number] --> 2.3[Valid];

2.3 -- Yes --> 2.4[Return];
2.3 -- No --> 2.2;



3.1 --> 3.2[Take the operator] --> 3.3[Valid];

3.3 -- Yes --> 3.4[Return];
3.3 -- No --> 3.2;



4.1 --> 4.2[Take the second number] --> 4.3[Valid];

4.3 -- Yes --> 4.4[Return];
4.3 -- No --> 4.2;


```

