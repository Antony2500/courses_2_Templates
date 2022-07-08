#ifndef LIST_H
#define LIST_H
#include<assert.h>

template <class T,size_t N>
class List
{
private:
	T m_data[N];
	size_t m_arr_capacity = N;
	size_t m_arr_size = 0;

public:
	List()
	{
	}

	size_t size() const
	{
		return m_arr_size;
	}
	
	const T& operator[](int index)const
	{
		assert(index >= 0 && index < m_arr_capacity);
		return m_data[index];
	}

	void operator +=(const T& element)
	{
		if (m_arr_size < m_arr_capacity)
		{
			m_data[m_arr_size] = element;
			m_arr_size += 1;
		}
	}

};

#endif