# work23
Задание 1. Реализация продвинутый ввод и вывод дней недели


Что нужно сделать

Используя макросы, реализуйте небольшую программу по вводу дня недели и выводу этого дня недели в текстовом виде в консоль.

В начале программы пользователь вводит день недели в виде его порядкового номера. В результате в консоли появляется буквенное отображение этого дня недели.

В этом упражнении запрещается использовать классические переменные, кроме как для хранения ввода пользователя. Использовать строковые литералы напрямую тоже нельзя. Всё должно быть реализовано исключительно на макросах.

Советы и рекомендации

Конкатенация двух фрагментов может породить токен, который в свою очередь является именем макроса, и этот макрос тоже раскроется. Используйте данное свойство для перевода константы дня недели в строковый литерал.
Обязательно просмотрите итоговый код после препроцессинга из CLion с помощью “Shift-Shift -> Preprocess current TU
Что оценивается

Корректность работы программы. Модульность и элегантность решения с помощью макросов.


Задание 2. Анализ заполненности вагонов в поезде


Что нужно сделать

В поезде всего 10 вагонов. В каждом из этих вагонов может находиться до 20-ти пассажиров — это оптимальное их количество. Проанализируйте количество людей в каждом из вагонов и сначала сообщите об излишне заполненных вагонах, далее о вагонах с пустыми пассажирскими местами. В заключении выведите общее количество пассажиров во всех вагонах.

При старте программы пользователь вводит количество пассажиров в каждом из вагонов. Замечания о вагонах должны выводиться в стандартную консоль.

При выполнении задания пользоваться for-циклами напрямую не разрешается, только опосредованно, через макросы.

Советы и рекомендации

С помощью макроса реализуйте модульный способ вызова функции-предиката над элементами массива. Сами функции-предикаты реализуйте отдельно, в виде обычных классических функций (не макросов).

Обязательно просмотрите итоговый код после препроцессинга из CLion с помощью “Shift-Shift -> Preprocess current TU”.


Корректность работы программы. Модульность и элегантность решения с помощью макросов.

Задание 3. Вывод времени года


Что нужно сделать

Используя макросы вместе с условными директивами прекомпиляции (#if / #endif), реализуйте простую программу по выводу названия времени года в консоль.

Пользователь программы в данном случае сам программист. С помощью определения одного из макросов: SPRING, SUMMER, AUTUMN или WINTER, он задаёт сезон, название которого хочет увидеть на экране. При компиляции и запуске программы на экране должно появиться название именно этого сезона и только его.



Советы и рекомендации

Так как препроцессор работает вообще до компиляции, то в #if / #endif директивы вы можете обернуть всю функцию main сразу.

Обязательно просмотрите итоговый код после препроцессинга из CLion с помощью “Shift-Shift -> Preprocess current TU”.
