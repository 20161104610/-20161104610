// 韩雪鑫20161104610.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;

struct Student
{
	string name;
	string num;
	int age;
	struct Student *next;
};

int main()
{
	struct Student *p, *q, *head;
	int n, i;
	head = NULL;
	q = NULL;
	cout << " Input number: " << endl;
	cin >> n;
	for (i = 0;i<n;i++)
	{
		p = new Student;
		cout << " Input the message of Student " << i + 1 << " : " << endl;
		cout << " name: " << endl;
		cin >> p->name;
		cout << " num: " << endl;
		cin >> p->num;
		cout << " age: " << endl;
		cin >> p->age;
		cout << endl;
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			q->next = p;
		}
		q = p;
		p->next = NULL;

	}
	p = head;
	i = 0;
	while (p != NULL)
	{
		cout << " Student " << i + 1 << " message: " << endl;
		cout << " name: " << p->name << endl;
		cout << " num: " << p->num << endl;
		cout << " age: " << p->age << endl << endl;
		p = p->next;
		i++;
	}

	while (p != NULL)
	{
		q = p->next;
		delete p;
		p = q;
		while (q);
	}
	return 0;
}