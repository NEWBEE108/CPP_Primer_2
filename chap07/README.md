# Answers To Non-programming Exercises

## Contents
- [Exercise 7.1](#exercise-71)
- [Exercise 7.2](#exercise-72)
- [Exercise 7.3](#exercise-73)
- [Exercise 7.4](#exercise-74)
- [Exercise 7.5](#exercise-75)
- [Exercise 7.6](#exercise-76)
- [Exercise 7.7](#exercise-77)
- [Exercise 7.8](#exercise-78)
- [Exercise 7.9](#exercise-79)
- [Exercise 7.10](#exercise-710)
- [Exercise 7.11](#exercise-711)
- [Exercise 7.12](#exercise-712)
- [Exercise 7.13](#exercise-713)
- [Exercise 7.14](#exercise-714)
- [Exercise 7.15](#exercise-715)
- [Exercise 7.16](#exercise-716)
- [Exercise 7.17](#exercise-717)
- [Exercise 7.18](#exercise-718)
- [Exercise 7.19](#exercise-719)
- [Exercise 7.20](#exercise-720)
- [Exercise 7.21](#exercise-721)
- [Exercise 7.22](#exercise-722)
- [Exercise 7.23](#exercise-723)
- [Exercise 7.24](#exercise-724)
- [Exercise 7.25](#exercise-725)
- [Exercise 7.26](#exercise-726)
- [Exercise 7.27](#exercise-727)
- [Exercise 7.28](#exercise-728)
- [Exercise 7.29](#exercise-729)
- [Exercise 7.30](#exercise-730)
- [Exercise 7.31](#exercise-731)
- [Exercise 7.32](#exercise-732)
- [Exercise 7.33](#exercise-733)
- [Exercise 7.34](#exercise-734)
- [Exercise 7.35](#exercise-735)
- [Exercise 7.36](#exercise-736)
- [Exercise 7.37](#exercise-737)
- [Exercise 7.38](#exercise-738)
- [Exercise 7.39](#exercise-739)
- [Exercise 7.40](#exercise-740)
- [Exercise 7.41](#exercise-741)
- [Exercise 7.42](#exercise-742)
- [Exercise 7.43](#exercise-743)
- [Exercise 7.44](#exercise-744)
- [Exercise 7.45](#exercise-745)
- [Exercise 7.46](#exercise-746)
- [Exercise 7.47](#exercise-747)
- [Exercise 7.48](#exercise-748)
- [Exercise 7.49](#exercise-749)
- [Exercise 7.50](#exercise-750)
- [Exercise 7.51](#exercise-751)
- [Exercise 7.52](#exercise-752)
- [Exercise 7.53](#exercise-753)
- [Exercise 7.54](#exercise-754)
- [Exercise 7.55](#exercise-755)
- [Exercise 7.56](#exercise-756)
- [Exercise 7.57](#exercise-757)
- [Exercise 7.58](#exercise-758)

## Exercise 7.1

> Write a version of the transaction-processing program from §
1.6 (p. 24) using the Sales_data class you defined for the exercises in §
2.6.1 (p. 72).

[Exer07_01.cpp](Exer07_01.cpp) 

## Exercise 7.2

> Add the combine and isbn members to the Sales_data
class you wrote for the exercises in § 2.6.2 (p. 76).

[Exer07_02_03.cpp](Exer07_02_03.cpp) 

## Exercise 7.3

> Revise your transaction-processing program from § 7.1.1 (p.
256) to use these members.

[Exer07_02_03.cpp](Exer07_02_03.cpp) 

## Exercise 7.4

> Write a class named Person that represents the name and
address of a person. Use a string to hold each of these elements.
Subsequent exercises will incrementally add features to this class.

[Exer07_04_Person.h](Exer07_04_Person.h) 

## Exercise 7.5

> Provide operations in your Person class to return the name
and address. Should these functions be const? Explain your choice.

## Exercise 7.6

> Define your own versions of the add, read, and print
functions.

[Exer07_06.cpp](Exer07_06.cpp) 

## Exercise 7.7

> Rewrite the transaction-processing program you wrote for the
exercises in § 7.1.2 (p. 260) to use these new functions.

## Exercise 7.8

> Why does read define its Sales_data parameter as a plain
reference and print define its parameter as a reference to const?

## Exercise 7.9

> Add operations to read and print Person objects to the code
you wrote for the exercises in § 7.1.2 (p. 260).

[Exer07_09.cpp](Exer07_09.cpp) 

## Exercise 7.10

> What does the condition in the following if statement do?
if (read(read(cin, data1), data2))

## Exercise 7.11

> Add constructors to your Sales_data class and write a
program to use each of the constructors.

[Exer07_11.cpp](Exer07_11.cpp) 

## Exercise 7.12

> Move the definition of the Sales_data constructor that
takes an istream into the body of the Sales_data class.

[Exer07_12.cpp](Exer07_12.cpp) 

## Exercise 7.13

> Rewrite the program from page 255 to use the istream
constructor.

[Exer07_13.cpp](Exer07_13.cpp) 

## Exercise 7.14

> Write a version of the default constructor that explicitly
initializes the members to the values we have provided as in-class initializers.

[Exer07_14.cpp](Exer07_14.cpp) 

## Exercise 7.15

> Add appropriate constructors to your Person class.

## Exercise 7.16

> What, if any, are the constraints on where and how often an
access specifier may appear inside a class definition? What kinds of members
should be defined after a public specifier? What kinds should be private?

## Exercise 7.17

> What, if any, are the differences between using class or
struct?

## Exercise 7.18

> What is encapsulation? Why is it useful?

## Exercise 7.19

> Indicate which members of your Person class you would
declare as public and which you would declare as private. Explain your
choice.

## Exercise 7.20

> When are friends useful? Discuss the pros and cons of using
friends.

## Exercise 7.21

> Update your Sales_data class to hide its implementation.
The programs you’ve written to use Sales_data operations should still
continue to work. Recompile those programs with your new class definition to
verify that they still work.

[Exer07_21.cpp](Exer07_21.cpp) 

## Exercise 7.22

> Update your Person class to hide its implementation.

## Exercise 7.23

> Write your own version of the Screen class.

[Exer07_23_Screen.h](Exer07_23_Screen.h) 

## Exercise 7.24

> Give your Screen class three constructors: a default
constructor; a constructor that takes values for height and width and
initializes the contents to hold the given number of blanks; and a constructor
that takes values for height, width, and a character to use as the contents of
the screen.

[Exer07_24_Screen.h](Exer07_24_Screen.h) 

## Exercise 7.25

> Can Screen safely rely on the default versions of copy and
assignment? If so, why? If not, why not?

## Exercise 7.26

> Define Sales_data::avg_price as an inline function.

[Exer07_26_Sales_data.h](Exer07_26_Sales_data.h) 

## Exercise 7.27

> Add the move, set, and display operations to your
version of Screen. Test your class by executing the following code:
```cpp
Screen myScreen(5, 5, 'X');
myScreen.move(4,0).set('#').display(cout);
cout << "\n";
myScreen.display(cout);
cout << "\n";
```

[Exer07_27.cpp](Exer07_27.cpp) | [Exer07_27_Screen.h](Exer07_27_Screen.h) 

## Exercise 7.28

> What would happen in the previous exercise if the return
type of move, set, and display was Screen rather than Screen&?

## Exercise 7.29

> Revise your Screen class so that move, set, and display
functions return Screen and check your prediction from the previous
exercise.

[Exer07_29.cpp](Exer07_29.cpp) | [Exer07_29_Screen.h](Exer07_29_Screen.h) 

## Exercise 7.30

> It is legal but redundant to refer to members through the
this pointer. Discuss the pros and cons of explicitly using the this pointer
to access members.
```cpp
struct First {
    int memi;
    int getMem();
};
struct Second {
    int memi;
    int getMem();
};
First obj1;
Second obj2 = obj1; // error: obj1 and obj2 have different types
```

## Exercise 7.31

> Define a pair of classes X and Y, in which X has a pointer to
Y, and Y has an object of type X.

[Exer07_31.cpp](Exer07_31.cpp) 

## Exercise 7.32

> Define your own versions of Screen and Window_mgr in
which clear is a member of Window_mgr and a friend of Screen.

[Exer07_32.cpp](Exer07_32.cpp) | [Exer07_32_Screen.h](Exer07_32_Screen.h) 

## Exercise 7.33

> What would happen if we gave Screen a size member
defined as follows? Fix any problems you identify.
```cpp
pos Screen::size() const
{
    return height * width;
}
```

## Exercise 7.34

> What would happen if we put the typedef of pos in the
Screen class on page 285 as the last line in the class?

[Exer07_34.cpp](Exer07_34.cpp) 

## Exercise 7.35

> Explain the following code, indicating which definition of
Type or initVal is used for each use of those names. Say how you would
fix any errors.
```cpp
typedef string Type;
Type initVal();
class Exercise {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};
Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
```

## Exercise 7.36

> The following initializer is in error. Identify and fix the
problem.
```cpp
struct X {
    X (int i, int j): base(i), rem(base % j) { }
    int rem, base;
};
```

## Exercise 7.37

> Using the version of Sales_data from this section,
determine which constructor is used to initialize each of the following
variables and list the values of the data members in each object:
```cpp
Sales_data first_item(cin);
int main() {
    Sales_data next;
    Sales_data last("9-999-99999-9");
}
```

## Exercise 7.38

> We might want to supply cin as a default argument to the
constructor that takes an istream&. Write the constructor declaration that
uses cin as a default argument.

## Exercise 7.39

> Would it be legal for both the constructor that takes a
string and the one that takes an istream& to have default arguments? If
not, why not?

## Exercise 7.40

> Choose one of the following abstractions (or an abstraction
of your own choosing). Determine what data are needed in the class. Provide
an appropriate set of constructors. Explain your decisions.
```cpp
(a) Book
(b) Date
(c) Employee
(d) Vehicle
(e) Object
(f) Tree
```

[Exer07_40_Book.h](Exer07_40_Book.h) 

## Exercise 7.41

> Rewrite your own version of the Sales_data class to use
delegating constructors. Add a statement to the body of each of the
constructors that prints a message whenever it is executed. Write
declarations to construct a Sales_data object in every way possible. Study
the output until you are certain you understand the order of execution among
delegating constructors.

[Exer07_41.cpp](Exer07_41.cpp) | [Exer07_41_Sales_data.h](Exer07_41_Sales_data.h) 

## Exercise 7.42

> For the class you wrote for exercise 7.40 in § 7.5.1 (p. 291),
decide whether any of the constructors might use delegation. If so, write the
delegating constructor(s) for your class. If not, look at the list of abstractions
and choose one that you think would use a delegating constructor. Write the
class definition for that abstraction.

## Exercise 7.43

> Assume we have a class named NoDefault that has a
constructor that takes an int, but has no default constructor. Define a class
C that has a member of type NoDefault. Define the default constructor for
C.

[Exer07_43_1.cpp](Exer07_43_1.cpp) | [Exer07_43_2.cpp](Exer07_43_2.cpp) 

## Exercise 7.44

> Is the following declaration legal? If not, why not?
```cpp
vector<NoDefault> vec(10);
```

## Exercise 7.45

> What if we defined the vector in the previous execercise to
hold objects of type C?

## Exercise 7.46

> Which, if any, of the following statements are untrue? Why?
(a) A class must provide at least one constructor.
(b) A default constructor is a constructor with an empty parameter list.
(c) If there are no meaningful default values for a class, the class should not
provide a default constructor.
(d) If a class does not define a default constructor, the compiler generates
one that initializes each data member to the default value of its associated
type.

## Exercise 7.47

> Explain whether the Sales_data constructor that takes a
string should be explicit. What are the benefits of making the
constructor explicit? What are the drawbacks?

## Exercise 7.48

> Assuming the Sales_data constructors are not explicit,
what operations happen during the following definitions
```cpp
string null_isbn("9-999-99999-9");
Sales_data item1(null_isbn);
Sales_data item2("9-999-99999-9");
```
What happens if the Sales_data constructors are explicit?

## Exercise 7.49

> For each of the three following declarations of combine,
explain what happens if we call i.combine(s), where i is a Sales_data
and s is a string:
```cpp
(a) Sales_data &combine(Sales_data);
(b) Sales_data &combine(Sales_data&);
(c) Sales_data &combine(const Sales_data&) const;
```

[Exer07_49.cpp](Exer07_49.cpp) | [Exer07_49_Sales_data.h](Exer07_49_Sales_data.h) 

## Exercise 7.50

> Determine whether any of your Person class constructors
should be explicit.

## Exercise 7.51

> Why do you think vector defines its single-argument
constructor as explicit, but string does not?

## Exercise 7.52

> Using our first version of Sales_data from § 2.6.1 (p. 72),
explain the following initialization. Identify and fix any problems.
```cpp
Sales_data item = {"978-0590353403", 25, 15.99};
```

## Exercise 7.53

> Define your own version of Debug.

[Exer07_53_Debug.h](Exer07_53_Debug.h) 

## Exercise 7.54

> Should the members of Debug that begin with set_ be
declared as constexpr? If not, why not?

## Exercise 7.55

> Is the Data class from § 7.5.5 (p. 298) a literal class? If
not, why not? If so, explain why it is literal.

## Exercise 7.56

> What is a static class member? What are the advantages
of static members? How do they differ from ordinary members?

## Exercise 7.57

> Write your own version of the Account class.

[Exer07_57.cpp](Exer07_57.cpp) 

## Exercise 7.58

> Which, if any, of the following static data member
declarations and definitions are errors? Explain why.
```cpp
// example.h
class Example {
public:
static double rate = 6.5;
static const int vecSize = 20;
static vector<double> vec(vecSize);
};
// example.C
#include "example.h"
double Example::rate;
vector<double> Example::vec;
```

[Exer07_58_example.cpp](Exer07_58_example.cpp) | [Exer07_58_example.h](Exer07_58_example.h) 

