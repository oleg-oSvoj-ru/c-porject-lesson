/*
hello.c
author: oleg <oleg@osvoj.ru>
license: MIT
*/
/*
Подключаем gettext
*/
#include <libintl.h>

/*!
\brief Макрос _ к функции gettext

\param[out] String Возвращает текст в текущей локали
\param[in] String Принимает строку, кодового текста
*/
#define _(String) gettext(String)

#include <stdio.h> /*  подключение библиотеки ввода вывода  */



/*!
\brief Выводит надпись "Привет мир!!!"

\param[out] int Возвращает код ошибки
\param[in]  void Не имеет входящих параметров
*/
int hello (void) /* объявление основной функции (точка входа) */
{
	printf (_("Hello world!!!\n")); /* печать в стандартный вывод */
  return 0; /* возвращаем код ошибки если ошибки нет то 0 */
}
