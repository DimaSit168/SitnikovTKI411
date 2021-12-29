#pragma once
#include <initializer_list>
#include <iostream>

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
	StaticLib1(const std::initializer_list<int> value);
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
	int Peek() const;

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
		*  \brief Конструктор с параметрами.
		*  \param value Целое значение.
		*  \param next
		*/
		StaticLib1Element(int value, StaticLib1Element* next = nullptr);

		/**
		*  \brief Деструктор.
		*/
		~StaticLib1Element();

		/**
		*  \brief Хранящееся значение.
		*/
		int value;

		/**
		*  \brief Ссылка на следующий элемент.
		*/
		StaticLib1Element* next;
	};

	size_t size;

	StaticLib1Element* top;

	StaticLib1(const StaticLib1& rhs);

	StaticLib1(const StaticLib1&&);

	void Remove();

	StaticLib1 operator = (const StaticLib1& rhs);
};