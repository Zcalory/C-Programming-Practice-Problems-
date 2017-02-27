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

#### 数组的动态内存分配  
利用  `new` 与 `delete` 进行动态内存的分配与删除  
动态创建一维数组：
```C++
int num=20；//num可作为变量，并随时对其进行赋值
int *A=NULL；//利用NULL对指针进行初始化
A=new int [num];
...  
delete []A;//释放内存
```
动态创建二维数组：
```C++
动态创建double[Row][Col]二维数组
int ROW = 2;
int COL = 3;
double **pvalue  = new double* [ROW]; // 为行分配内存

// 为列分配内存
for(int i = 0; i < COL; i++) {
    pvalue[i] = new double[COL];
}
//释放内存
for(int i = 0; i < COL; i++) {
    delete[] pvalue[i];//需对每行进行一次释放
}
delete [] pvalue; 
```
