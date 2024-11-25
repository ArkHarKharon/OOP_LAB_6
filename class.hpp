#pragma once

#include "includes.hpp"

template<class T>
class Vector
{
private:
	std::vector<T> m_vector;

public:
	Vector(T first_element)
	{
		push_back(first_element);
	}

	void push_back(T element)
	{
		m_vector.push_back(element);
	}

	void pop_back()
	{
		m_vector.pop_back();
	}

	size_t size()
	{
		return m_vector.size();
	}

	size_t capacity()
	{
		return m_vector.capacity();
	}

	T at(size_t index)
	{
		return m_vector.at(index);
	}

	void resize(size_t new_size)
	{
		m_vector.resize(new_size);
	}

	T max()
	{
		if (std::same_as<T, std::string>) //В контексте строк, наибольшая строка - строка наибольшей длины
		{
			size_t max_size = 0;
			size_t max_string_index = 0;

			for (size_t i = 0; i < m_vector.size(); i++)
			{
				if (m_vector.at(i).size() > max_size)
				{
					max_size = m_vector.at(i).size();
					max_string_index = i;
				}
			}
			return m_vector.at(max_string_index);
		}

		else
		{
			double max = 0;

			for (auto& element : m_vector)
			{
				if (element > max)
					max = element;
			}

			return max;
		}
	}
};