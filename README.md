# C++ Programming Practice Problems
#### Created at 17/12/2016 by Zcalory
It is time to devote myself to coding to prepare for my pursuits and further study.
This repository is created to write codes in C++ language.    
##Stage 1: Programming problems on my textbook: C++ Programming Foundations(Fourth Edition)
###Note: 
####条件编译/conditional compilation  

1.

    #if 常量表达式  
    程序文本  
    #endif


若“常量表达式”为1，则“程序文本”参与编译。

1.

    #if constant    
    program  
    #endif  

If the "constant" equals 1 then compiles the "program". 

2.

    #if 常量表达式  
    程序文本1  
    #else  
    程序文本2  
    #endif  

若“常量表达式”为1，则“程序文本1”参与编译,否则“程序文本2”参与编译。

2.

    #if constant    
    program1    
    #else    
    program2    
    #endif

If the "constant" equals 1 then compiles the "program1", otherwise compiles the "program2". 

3.

    #ifndef 标识符    
    #define 标识符   
    程序文本    
    #endif  

若“标识符”未定义，则编译“程序文本”；若“标识符”已定义，则“程序文本”被忽略。

3.

    #ifndef identifier    
    #define identifier    
    program    
    #endif  

if the "identifier" has never been defined, compiles the "program"; otherwise ingores it.

The third kind of conditional compilation often used in the ".h" files to avoid the error of "redefinition".  
And to avoid this problem, try to separate **statement** and **definition**:

In the ".h" files, writes only **data type(s**) and **function statement(s)**;  
in the ".cpp" files, writes **definition(s) of variable and funtion**.
