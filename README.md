# SberLabPlugin

Тестовое задание UE4C++ в Sber.

Плагин, позволяющий получать данные о персонажах из сериала Рик и Морти через публичный API.

Реализовано:
Отправка запроса на получение информации о случайном персонаже.
Отображение в UI.
Запрос в отдельной ноде.

Реализовано опциональное:
Проект оформлен как плагин.
Нода асинхронная, если я правильно понимаю суть асинхронных нод.

С картинкой не вышло. Планировал экспорт полученного изображения в FSlateBrush для отрисовки в UI, но столкнулся с некоторыми проблемами и времени на их решение не хватило.

Как юзать: создать и добавить PluginWidget в Viewport.
Желательно при этом включить курсор, иначе не юзабельно.
Нажимать на кнопку, пока не надоест или пока не переберете всех 826 персонажей.

Функция GetRequest возвращает данные о персонаже одной строкой, разделенной переносами строки.
