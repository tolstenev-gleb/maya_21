#include <stdio.h>
#include <stdbool.h>

void welcome() {
  printf("Добро пожаловать на борт!\n");
}

void instructions() {
  printf("Пристегнуться\n");
  printf("Аварийные выходы\n");
  printf("Поведение в случае аварии\n");
}

void serve_drink(char *drink, char *number) {
  printf("1. Приготовить %s\n", drink);
  printf("2. Принести на место %s\n", number);
}

bool pereves_bool(int ves, int limit) {
  bool status;
  int diff;
  diff = limit - ves;
  if (diff > 0) {
    // всё ок
    status = false;
  } else {
    // есть перевес
    status = true;
  }
  return status;
}

int pereves_int(int ves, int limit) {
  int diff;
  diff = limit - ves;
  if (diff < 0) {
    printf("ПЕРЕВЕС!!!\n");
  }
  return diff;
}

// Синтаксис:

// тип_функции имя_функции(тип1 имя_аргумента1, тип2 имя_аргумента2) {
    // тело функции
    // конкретные действия, что функция должна сделать
// }

// Если от функции не нужен никакой результат, то return отсутствует.
// В этом случае тип функции - void

// Если от функции НУЖЕН результат, то return пишем.
// В этом случае тип функции точно такой же, какого типа переменная в return


// Параметры и аргументы

// Отчёт

// Дата отчёта: 27.09.2026
// Задание: "Собрать размеры"
// Дедлайн: 28.09.2026

// Дата отчёта: 12.10.2026
// Задание: "Собрать фотографии"
// Дедлайн: 19.10.2026



// Анкета

// Имя: 
// Размер ноги: 
// Размер головы: 
// Размер одежды: 




int main() {
  int ves_maya;
  int ves_gleb;
  int limit_s7;
  int limit_aeroflot;

  printf("Введите текущий лимит для S7: ");
  scanf("%d", &limit_s7);

  printf("Майя, введите вес багажа: ");
  scanf("%d", &ves_maya);

  int diff_maya_s7 = pereves_int(ves_maya, limit_s7);

  if (diff_maya_s7 > 0) {
    printf("Запас: %d\n", diff_maya_s7);
  } else if (diff_maya_s7 < 0) {
    printf("Перевес: %d\n", diff_maya_s7);
  } else if (diff_maya_s7 == 0) {
    printf("Впритык!\n");
  }

  return 0;
}
