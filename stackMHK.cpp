//
//
//  main.cpp
//  stackMHK
//  7/14/2017
//  
//  Created by Mohammad Hossein Komeili on 7/14/2017
//     
//  Copyright (C) 2017 ,Mohammad Hossein Komeili,All rights reserved.
//
#include<iostream>
#include"Header.h"
using namespace std;

stack::stack() {
	tes = 0;
}

void stack::push(int a) {
	if (tes == 100)
		cout << "Sorry,your stack is full !!";
	else {
		S[tes] = a;
		tes++;
	}
}

int stack::pop() {
	if (tes != 0) 
		return S[tes--];
}

int stack::peek() {
	if (tes != 0)
		return S[tes - 1];
}

bool stack::swap(stack sec) {
	stack temp1;
	stack temp2;
	while (tes!=0) {
		temp1.push(pop());
	}
	while (sec.tes != 0) {
		temp2.push(sec.pop());
	}
	while (temp1.tes != 0) {
		sec.push(temp1.pop());
	}
	while (temp2.tes != 0) {
		push(temp2.pop());
	}
	return true;
}
