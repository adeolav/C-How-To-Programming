# Summary

## Section 3.1 Introduction
* Before writing a program to solve a particular problem, you must have a thorough under-
standing of the problem and a carefully planned approach to solving it.

## Section 3.2 Algorithms
* The solution to any computing problem involves executing a series of actions in a specific
order (p. 86).
* An algorithm (p. 86) is a procedure (p. 86) for solving a problem in terms of the actions
(p. 86) to execute and the order in which these actions should execute.

## Section 3.3 Pseudocode
* Pseudocode (p. 87) is an artificial and informal language that helps you develop algorithms.
* Pseudocode is similar to everyday English; it’s not an actual computer programming language.
* Pseudocode programs help you “think out” a program.
* Pseudocode consists purely of characters. You may type pseudocode using any text editor.
* Carefully prepared pseudocode can be converted easily to corresponding C programs.
* Pseudocode consists only of actions and decisions.

## Section 3.4 Control Structures
* Normally, statements in a program execute one after the other in the order in which they’re
written. This is called sequential execution (p. 88).
* Various C statements enable you to specify that the next statement to execute may be other
than the next one in sequence. This is called transfer of control (p. 88).
* Structured programming has become almost synonymous with “goto elimination” (p. 88).
* Structured programs are clearer, easier to debug and modify and more likely to be bug-free.
* All programs can be written using sequence, selection and iteration control structures (p. 88).
* Unless directed otherwise, the computer automatically executes C statements in sequence.
* A flowchart (p. 88) is a graphical representation of an algorithm drawn using rectangles,
diamonds, rounded rectangles and small circles connected by arrows called flowlines
(p. 88).
* The rectangle (action) symbol (p. 89) indicates any type of action, including a calculation
or an input/output operation.
* Flowlines indicate the order in which the actions are performed.
* When drawing a flowchart that represents a complete algorithm, we use as the first symbol
a rounded rectangle containing “Begin” and as the last a rounded rectangle containing
“End.” When drawing only a portion of an algorithm, we omit the rounded-rectangle sym-
bols in favor of using small circles called connector symbols.
* The if single-selection statement selects or ignores a single action (or group of actions).
* The if…else double-selection statement (p. 89) selects between two different actions (or
groups of actions).
* The switch multiple-selection statement (p. 89) selects among many different actions
based on the value of an expression.
* C provides three types of iteration statements (also called repetition statements), namely
while, do…while and for.
* Control-statement flowchart segments can be attached to one another with control-state-
ment stacking (p. 89)—connecting the exit point of one to the entry point of the next.
* Control statements also may be nested.
* C uses single-entry/single-exit control statements (p. 89).

## Section 3.5 The if Selection Statement
* Selection structures are used to choose among alternative courses of action.
* The diamond (decision) symbol (p. 91) indicates that a decision is to be made.
* The decision symbol’s expression typically is a condition that can be true or false. The de-
cision symbol has two flowlines emerging from it indicating the directions to take when the
expression is true or false.
* A decision can be based on any expression’s value—zero is false and nonzero is true.

## Section 3.6 The if…else Selection Statement
* The conditional operator (?:, p. 92) is closely related to the if…else statement.
* The conditional operator is C’s only ternary operator—it takes three operands. The first is
a condition. The second is the value for the conditional expression (p. 92) if the condition
is true. The third is the value for the conditional expression if the condition is false.
* Nested if…else statements (p. 93) test for multiple cases by placing if…else statements
inside if…else statements.
* A set of statements within a pair of braces is called a compound statement or a block (p. 94).
* A syntax error is caught by the compiler. A logic error has its effect at execution time. A fatal
logic error causes a program to fail and terminate prematurely. A nonfatal logic error allows
a program to continue executing but to produce incorrect results.

## Section 3.7 The while Iteration Statement
* The while iteration statement (p. 96) specifies that an action repeats while a condition is
true. Eventually, the condition will become false. At this point, the iteration terminates, and
the first statement after the iteration statement executes.

## Section 3.8 Formulating Algorithms Case Study 1: Counter-Controlled It-
eration
* Counter-controlled iteration (p. 97) uses a variable called a counter (p. 97) to specify the
number of times a set of statements should execute.
* Counter-controlled iteration is often called definite iteration (p. 97) because the number of
iterations is known before the loop begins executing.
* A total (p. 99) is a variable used to accumulate the sum of a series of values. Variables used
to store totals should be initialized to zero.
* A counter is a variable used to count. Counter variables typically are initialized to zero or
one, depending on their use.
* An uninitialized variable contains a “garbage” value (p. 99)—the value last stored in the
memory location reserved for that variable.

## Section 3.9 Formulating Algorithms with Top-Down, Stepwise Refine-
ment Case Study 2: Sentinel-Controlled Iteration
* A sentinel value (p. 99; also called a signal value, a dummy value, or a flag value) is used
in a sentinel-controlled loop to indicate the “end of data entry.”
* Sentinel-controlled iteration is often called indefinite iteration (p. 99) because the number
of iterations is not known before the loop begins executing.
* The sentinel value must be chosen so that it cannot be confused with an acceptable input
value.
* In top-down, stepwise refinement (p. 100), the top is a statement that conveys the pro-
gram’s overall function. It’s a complete representation of a program. In the refinement pro-
cess, we divide the top into smaller tasks and list these in execution order.
* The type double (p. 102) represents floating-point numbers with decimal points.
* When two integers are divided, any fractional part of the result is truncated (p. 104).
* To produce a floating-point calculation with integer values, you can cast the integers to
floating-point numbers. C provides the unary cast operator (double) to accomplish this
task.
* Cast operators (p. 104) perform explicit conversions.
* C requires the operands in arithmetic expressions to have the same data type. To ensure this,
the compiler performs implicit conversion (p. 104) on selected operands.
* A cast operator is formed by placing parentheses around a type name. The cast operator is
a unary operator—it takes only one operand.
* Cast operators group right-to-left and have the same precedence as other unary operators
such as unary + and unary -. This precedence is one level higher than that of *, / and %.
* The printf conversion Specification %.2f specifies that a floating-point value will be dis-
played with two digits to the right of the decimal point. If the %f conversion specification
is used (without specifying the precision), the default precision (p. 105) is 6.
* When floating-point values are printed with precision, the printed value is rounded
(p. 105) to the indicated number of decimal positions for display purposes.

## Section 3.11 Assignment Operators
* C provides several assignment operators for abbreviating assignment expressions (p. 110).
* The += operator adds the value of the expression on its right to the value of the variable on
its left and stores the result in the variable on its left.
* Assignment operators are provided for each of the binary operators +, -, *, / and %.

## Section 3.12 Increment and Decrement Operators
* C provides the unary increment operator, ++ (p. 111), and the unary decrement operator,
-- (p. 111), for use with integral types.
* If ++ or -- operators are placed before a variable, they’re referred to as the preincrement or
predecrement operators, respectively. If ++ or -- operators are placed after a variable,
they’re referred to as the postincrement or postdecrement operators, respectively.
* Preincrementing (predecrementing) a variable causes it to be incremented (decremented) by
1, then the new value of the variable is used in the expression in which it appears.
* Postincrementing (postdecrementing) a variable uses the current value of the variable in the
expression in which it appears, then the variable value is incremented (decremented) by 1.
* When incrementing or decrementing a variable in a statement by itself, pre- and postincre-
ment have the same effect. When a variable appears in the context of a larger expression, pre-
and postincrementing have different effects (and similarly for pre- and postdecrementing).

## Section 3.13 Secure C Programming
* Adding integers can result in a value that’s too large to store in an int variable. This is
known as arithmetic overflow and can cause unpredictable runtime behavior, possibly leav-
ing a system open to attack.








