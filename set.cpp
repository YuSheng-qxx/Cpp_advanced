#include<iostream>
#include<set>
#include<functional>
using namespace std;

//template<class T>
//void printSet(const set<T>& set)
//{
//	for (T s : set)
//	{
//		cout << s << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	set<int> s;
//	s.insert(2);
//	s.insert(3);
//	s.insert(4);
//	s.insert(5);
//	s.insert(6);
//	auto it = s.find(5);
//	cout << (it == s.end()) << endl;
//	it = s.find(10);
//	cout << (it == s.end()) << endl;
//
//	cout << s.count(5) << endl;
//	cout << s.count(10) << endl;
//
//	pair<set<int>::iterator, set<int>::iterator> p = s.equal_range(5);
//	cout << *(p.first) << endl;
//	cout << *(p.second) << endl;
//
//}
//void test()
//{
//	set<int> s;
//
//	int arr[] = { 18, 2, 34, 55, 29 };
//	set<int> s2(arr, arr + sizeof(arr) / sizeof(arr[0]));
//
//	set<int> copy(s2);
//
//	//���������������
//	//����
//	set<int>::iterator sit = s2.begin();
//	while (sit != s2.end())
//	{
//		cout << *sit << " ";
//		++sit;
//	}
//	cout << endl;
//
//	//����˳�򣺵ݼ�
//	set<int, greater<int>> s3(arr, arr + sizeof(arr) / sizeof(arr[0]), greater<int>());
//	set<int, greater<int>>::iterator sit2 = s3.begin();
//	while (sit2 != s3.end())
//	{
//		cout << *sit2 << " ";
//		++sit2;
//	}
//	cout << endl;
//
//	//����������ݼ�
//	set<int>::reverse_iterator rit = s2.rbegin();
//	while (rit != s2.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//}

//void test()
//{
//	set<int> s;
//	//����Ԫ�أ�ʧ��->����ֵ��bool ��true��iterator���Ѿ����ڵ�Ԫ��λ��
//	pair<set<int>::iterator, bool> kvRet = s.insert(1);
//	bool ret = kvRet.second;
//	cout << ret << endl;
//	set<int>::iterator it = kvRet.first;
//	cout << *it << endl;
//
//	//�ظ�Ԫ�ز���ʧ��
//	kvRet = s.insert(1);
//	ret = kvRet.second;
//	cout << ret << endl;
//	it = kvRet.first;
//	cout << *it << endl;
//	s.insert(2);
//	s.insert(3);
//	s.insert(4);
//	s.insert(5);
//	s.insert(6);
//	s.insert(7);
//	it = s.begin();
//	//insert(iterator,value):iteratorֻ��һ���ο�λ��
//	it = s.insert(it, 12);
//	cout << *it << endl;
//	++it;
//	//cout << *it << endl;
//
//	//��������µ�Ԫ�أ�����Ԫ���Ѿ�����
//	s.insert(s.begin(), s.end());
//	set<int> s2;
//	//��������Ԫ��
//	s2.insert(s.begin(), s.end());
//
//	s.erase(3);
//	printSet(s);
//	s.erase(s.begin());
//	printSet(s);
//	s.erase(s.begin(), s.end());
//	printSet(s);
//}

//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}