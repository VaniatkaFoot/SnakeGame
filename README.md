# Snake Game

### 1 лабораторная работа

В данной работе определены структуры и классы игры, создан первый проект.

### 2 лабораторная работа

В данной работе я добавил заглушки для методов классов, определенных в первой лабораторной работе. Создан файл `makefile` для сборки проекта.

## Правила игры

Игрок управляет змейкой выбирая направление ее джижения кнопками WASD, задачей игрока является набирание очков поедая яблоки появляющиеся на поле

## Описание структуры

В проекте определены следующие классы:

* `Apple` - класс для определения яблок;
* `Field` - Класс Игрового поля;
* `Snake` - Класс змейки, хранит в себе координаты ее сегментов их количество и направления движения;
* `GameEngine` - движок игры;

## Зависимости

Для сборки проекта необходимо иметь установленные:

* `g++` - компилятор С++, рекомендуемая версия 10 или выше
* `MinGW` - система автоматизации сборки, рекомендуемая версия 4 или выше

## Сборка

1. Откройте консоль;
2. Склонируйте проект;
3. Перейдите в папку проекта;
4. Выполните сборку.

```shell
git clone https://github.com/VaniatkaFoot/SnakeGame.git
cd SnakeGame
mingw32-make
```