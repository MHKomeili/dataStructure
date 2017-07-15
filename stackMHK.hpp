//
//
//  header file
//  stackMHK
//  7/14/2017
//  
//  Created by Mohammad Hossein Komeili on 7/14/2017
//     
//  Copyright (C) 2017 ,Mohammad Hossein Komeili,All rights reserved.



#ifndef stackMHK

#define stackMHK

#include<stdio.h>


class stack {

private :
	int S[100];
	int tes;

public:

//constructor of the stack class.
	stack(){}

//by calling this function,the integer passed by push,would be the topmost element in the stack.
	void push(int) {}

//by calling this function,topmost element in the stack would be deleted and returned.
	int pop(void){}

//this function returns the topmost element in stack without deleting it.
	int peek(void){}

//change the elements of two stack.
	bool swap(stack){}
};
#endif
