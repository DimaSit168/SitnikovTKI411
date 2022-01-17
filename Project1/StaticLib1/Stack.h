#pragma once
#include <initializer_list>
#include <iostream>

/**
 *  \brief Класс стек для хранения целых чисел.
 */

class Stack

{
public:
	Stack();
	/**
	*  \brief Конструктор по умолчанию.
	*  \param value Последовательность значений, добавляемых в стек при инициализации.
	*/
	//Stack(const std::initializer_list<int> value);
	
	/**
	*  \brief Создание объекта из последовательности.
	*/
	Stack(const std::initializer_list<int> value);
	//~Stack();

	/**
	*  \brief Деструктор.
	*/
	~Stack();

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
	*  \brief Возвращает значение послэднего элемента.
	*  \return .
	*/
	void Edit(const int value);

	/**
	*  \brief Возвращает значение послэднего элемента.
	*  \return .
	*/
	std::size_t GetSize() const;
	int Get() const;
	bool isEmpty() const;
	friend std::ostream& operator << (std::ostream& out, const Stack& stack);

private:
	/**
    *  \brief Элементы стека для хранения целых чисел.
    */
	
	class StackElement
	{
	public:
		/**
		*  \brief Конструктор с параметрами.
		*  \param value Целое значение.
		*  \param next
		*/
		StackElement(int value, StackElement* next = nullptr);

		/**
		*  \brief Деструктор.
		*/
		~StackElement();

		/**
		*  \brief Хранящееся значение.
		*/
		int value;

		/**
		*  \brief Ссылка на следующий элемент.
		*/
		StackElement* next;
	};

	size_t size;

	StackElement* top;

	Stack(const Stack& rhs);

	Stack(const Stack&&);

	void Remove();

	Stack operator = (const Stack& rhs);
};