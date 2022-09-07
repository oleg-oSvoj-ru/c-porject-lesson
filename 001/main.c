/*!
Коментарий для системы автоматического документирования
\authors   Олег Лесков <oleg@oSvoj.ru>
\version   0.0.1a
\date      09.2022
\bug       Известные ошибки
\warning   Данный код написан в учебных целях
\copyright MIT
\example   приеры использования
\todo      Что нужно сделать
\brief     Краткое описание
\details   Подробное описание
*/
/*
main.c
author: oleg <oleg@osvoj.ru>
license: MIT
*/
/// коментарий для системы автоматического документирования
//однострочный коментарий

#include "hello.h"
#include <libintl.h>
#define _(String) gettext (String)
#define PACKAGE "hello.osvoj.ru"
#define LOCALEDIR "locale"
#include <stdlib.h>


int main (void) /* объявление основной функции (точка входа) */
{
  setlocale (LC_ALL, getenv("LC_CTYPE"));
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);

  int a;
  a = hello();
  return a; /* возвращаем код ошибки если ошибки нет то 0 */
}
