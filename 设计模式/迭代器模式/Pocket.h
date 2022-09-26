#pragma once

template <class T>
class Pocket
{
public:
	template <class T>
	class Iterator {
	private:
		const Pocket<T>* m_pocket;
		int current;
	public:
		Iterator(const Pocket<T>& pocket) {
			m_pocket = &pocket;
			backToFirst();
		}
		void backToFirst() {
			current = 0;
		}
		T* next() {
			return m_pocket->find(current++);
		}
		bool hasNext() {
			return current != m_pocket->getCount() ;
		}

	};
private:
	T** m_point;
	Iterator<T>* m_iterator;
	int m_count,m_size;
public:
	Pocket(int size);
	void add(T* t);
	bool isFull()const;
	bool isEmpty()const;
	T* find(int index)const;
	int getSize()const;
	int getCount()const;
	Iterator<T>* GetIterator();
};

template<class T>
inline Pocket<T>::Pocket(int size)
{
	m_count = 0;
	m_size = size;
	m_point = new T*[m_size];

}

template<class T>
inline void Pocket<T>::add(T * t)
{
	m_point[m_count++] = t;
}

template<class T>
inline bool Pocket<T>::isFull()const
{
	return m_count == m_size;
}

template<class T>
inline bool Pocket<T>::isEmpty()const
{
	return m_count == 0;
}

template<class T>
inline T * Pocket<T>::find(int index)const
{
	return m_point[index];
}

template<class T>
inline int Pocket<T>::getSize()const
{
	return m_size;
}

template<class T>
inline int Pocket<T>::getCount()const
{
	return m_count;
}

template<class T>
inline Pocket<T>::Iterator<T>* Pocket<T>::GetIterator()
{
	m_iterator = new Iterator<T>(*this);
	return m_iterator;
}
