#pragma once
#include <initializer_list>

/**
 *  \brief Класс стек для хранения целых чисел.
 */

class StaticLib1

{
public:
	/**
	*  \brief Конструктор по умолчанию.
	*/
	StaticLib1();
	
	/**
	*  \brief Создание объекта из последовательности.
	*/
	StaticLib1(std::initializer_list<int> value);
	~StaticLib1();

	/**
	*  \brief Добавляем элемент в стек.
	*  \param value Целое значение.
	*/
	void Push(const int value);

	/**
	*  \brief Удаляем элемент в стек.
	*  \return value Целое значение.
	*/
	int Pop();

	/**
	*  \brief Возвращает верхний элемент стэка (без удаления элемента).
	*  \return value Целое значение.
	*/
	int Peek();

	/**
	*  \brief Возвращает количество элементов стэка.
	*  \return value Целое значение.
	*/
	int Count();

	/**
	*  \brief .
	*  \return .
	*/
	std::size_t GetSize() const;
	bool isEmpty() const;

private:
	/**
    *  \brief Элементы стека для хранения целых чисел.
    */
	
	class StaticLib1Element
	{
	public:
		/**
		*  \brief Конструктор по умолчанию.
		*/
		StaticLib1Element();

		/**
		*  \brief Конструктор с параметрами.
		*  \param value Целое значение.
		*/
		StaticLib1Element(int value);

		/**
		*  \brief Деструктор.
		*/
		~StaticLib1Element();

	private:
		int value;
		StaticLib1Element* next;
	};

	size_t size;

	StaticLib1Element* top;

	StaticLib1(const StaticLib1& rhs);

	StaticLib1 operator = (const StaticLib1& rhs);
};