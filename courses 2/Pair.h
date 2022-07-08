#ifndef PAIR_H
#define PAIR_H

template <class A,class B> 
class Pair
{
private:
	A m_key;
	B m_value;

public:
	Pair()
	{
	}
	 
	Pair(const A& a, const B& b)
	{
		this->m_key = a;
		this->m_value = b;
	}
	
	const A& getKey() const
	{
		return m_key;
	}
	
	const B& getValue() const
	{
		return m_value;
	}
	
};

#endif
