# Summary
This chapter introduced many important C features, including displaying data on the
screen, inputting data from the user, performing calculations and making decisions. In
the next chapter, we build upon these techniques as we introduce structured program-
ming. You’ll become more familiar with indentation techniques. We’ll study how to
specify the order in which statements are executed—this is called flow of control.
Section 2.1 Introduction
• C facilitates a structured and disciplined approach to computer-program design.
Section 2.2 A Simple C Program: Printing a Line of Text
• Comments (p. 56) begin with //. They document programs (p. 56) and improve program
readability. Multi-line comments begin with /* and end with */ (p. 57).
• Comments are ignored by the compiler.
• The preprocessor processes lines beginning with # before the program is compiled. The
#include directive tells the preprocessor (p. 57) to include the contents of another file.
• The <stdio.h> header (p. 57) contains information used by the compiler to ensure that you
correctly use standard input/output library functions, such as printf.
• The function main is a part of every program. The parentheses after main indicate that main
is a program building block called a function (p. 57). Programs contain one or more func-
tions, one of which must be main, which is where the program begins executing.
• Functions can return information. The keyword int to the left of main indicates that main
“returns” an integer (whole number) value.
• Functions can receive information when they’re called upon to execute. The void in paren-
theses after main indicates that main does not receive any information.
• A left brace, {, begins every function’s body (p. 57). A corresponding right brace, }, ends
each function (p. 57). A pair of braces and the code between them is called a block.
• The printf function (p. 58) instructs the computer to display information on the screen.
• A string is sometimes called a character string, a message or a literal (p. 58).
• Every statement (p. 58) must end with the semicolon statement terminator (p. 58).
• In \n (p. 58), the backslash (\) is an escape character (p. 58). When encountering a backs-
lash in a string, the compiler combines it with the next character to form an escape sequence
(p. 58). The escape sequence \n means newline.
• When a newline appears in a string output by printf, the output cursor positions to the
beginning of the next line.
• The double backslash (\\) escape sequence places a single backslash in a string.
• The escape sequence \" represents a literal double-quote character.
Section 2.3 Another Simple C Program: Adding Two Integers
• A variable (p. 61) is a location in memory where a value can be stored for use by a program.
• Variables of type int (p. 61) hold whole-number integer values.
• All variables must be defined with a name and a type before they can be used in a program.
• A variable name in C is any valid identifier (p. 61). An identifier is a series of characters con-
sisting of letters, digits and underscores ( _ ) that does not begin with a digit.
• C is case sensitive (p. 61).
• Function scanf (p. 62) gets input from the standard input—usually the keyboard.
• The scanf format control string (p. 62) indicates the type(s) of data to input.
• The %d conversion specification (p. 62) indicates an integer (the letter d stands for “decimal
integer”). The % begins each conversion specification.
• The arguments that follow scanf’s format control string begin with an ampersand (&) fol-
lowed by a variable name. In this context, the ampersand—called the address operator
(p. 62)—tells scanf the variable’s memory location. The computer then stores the value at
that location.
• Most calculations are performed in assignment statements (p. 63).
• The = operator and the + operator are binary operators—each has two operands (p. 63).
• In a printf that specifies a format control string as its first argument, the conversion spec-
ifications indicate placeholders for data to output.
Section 2.4 Memory Concepts
• Every variable has a name, a type, a value and a memory location.
• When a value is placed in a memory location, it replaces the location’s previous value, which
is lost. So this process is said to be destructive (p. 64).
• Reading a value from a memory location is nondestructive (p. 65).
Section 2.5 Arithmetic in C
• Most programming languages denote multiplication with the * operator, as in a * b.
• Arithmetic expressions must be written in straight-line form (p. 66) to facilitate entering
programs into the computer.
• Parentheses group terms in C expressions in much the same manner as in algebraic expres-
sions.
• C evaluates arithmetic expressions in a precise sequence determined by the following rules
of operator precedence (p. 66), which are generally the same as those followed in algebra.
• Expressions containing several +, / and % operations evaluate left-to-right. These three op-
erators are on the same level of precedence.
• Expressions containing several + and - operations evaluate left-to-right. These two operators
have the same level of precedence, which is lower than that of *, / and %.
• Operator grouping (p. 67) specifies whether operators evaluate left-to-right or right-to-left.
Section 2.6 Decision Making: Equality and Relational Operators
• Executable C statements either perform actions or make decisions.
• C’s if statement (p. 69) allows a program to make a decision based on whether a condition
(p. 69) is true (p. 69) or false (p. 69). If the condition is true, the if statement’s body exe-
cutes; otherwise, it does not.
• You form conditions in if statements using the equality and relational operators (p. 69).
• The relational operators all have the same level of precedence and group left-to-right. The
equality operators have lower precedence than the relational operators and also group left-
to-right.
• To avoid confusing assignment (=) and equality (==), the assignment operator should be
read “gets,” and the equality operator should be read “double equals.”
• The compiler usually ignores white-space characters such as tabs, newlines and spaces.
• Keywords (p. 72; or reserved words) have special meaning to the C compiler, so you cannot
use them as identifiers such as variable names.
Section 2.7 Secure C Programming
• One practice to help avoid leaving systems open to attacks is to avoid using printf with a
single string argument.
• To display a string followed by a newline character, use the puts function (p. 74), which
displays its string argument followed by a newline character.
• To display a string without a trailing newline character, use printf with the "%s" conversion
specification (p. 74) as the first argument and the string to display as the second argument.
