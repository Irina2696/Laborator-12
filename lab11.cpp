#include <iostream>
#include <vector>
#include <cstdlib>
#include <string.h>

using namespace std;

template <class T>
class Stack {
  private:
    vector<T> elems;

  public:
    void push(const T& elem)
    {
         elems.push_back(elem);
    }
    void pop();
    T top () const
    {
        if (elems.back() > (-1))
            return elems.back();
        else
            cout<<"Stiva de caractere este goala!"<<endl;
            exit(1);
    }
    bool empty()
    {
        return elems.empty();
    }


};
template <class T>

void Stack<T>::pop()
{
    elems.pop_back();
}

int main()
{
        Stack<int>	i;
		Stack<char> c;

        i.push(7);
        i.push(13);
        cout<<"Elementul din varful stivei de numere intregi"<<endl;
        cout<<i.top()<<endl;
		c.push('a');
		cout<<c.top()<<endl;
		c.push('b');
		cout << c.top() <<endl;
		c.pop();
		cout<<"Dupa o extragere, elementul din varful stivei este: "<<endl;
		cout<<c.top()<<endl;
		if (i.empty()==0)
            cout <<"Stiva de numere intregi nu este goala"<<endl;
		else
            cout<<"Stiva de numere intregi este goala"<<endl;
        i.pop();
        i.pop();
        if (i.empty()==0)
            cout <<"Stiva de numere intregi nu este goala"<<endl;
		else
            cout<<"Stiva de numere intregi este goala"<<endl;
		c.pop();
		cout<<c.top()<<endl;


        return 0;
}

