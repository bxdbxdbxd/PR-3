# 750A - Новый год и спешка
В последний день уходящего 2016 года Лимак собирается принять участие в соревновании по спортивному программированию. Соревнование начнётся в 20:00 и будет продолжаться четыре часа, то есть ровно до полуночи. Участникам будет предложено n задач, упорядоченных по возрастанию сложности, то есть задача 1 будет самой лёгкой, а задача номер n — самой сложной. Лимак знает, что ему потребуется 5·i минут на решение i-й задачи.

Друзья Лимака планирую устроить роскошную новогоднюю вечеринку и Лимак хочет прибыть в полночь или ранее. Он знает, что ему требуется ровно k минут чтобы добрать до места проведения вечеринки от своего дома, где он собирается участвовать в соревновании.

Сколько максимум задач может успеть решить Лимак, так чтобы не опоздать на новогоднюю вечеринку?

### Входные данные
В первой строке входных данных записаны два целых числа n и k (1 ≤ n ≤ 10, 1 ≤ k ≤ 240) — количество задач в соревновании и количество минут, за которое Лимак доберётся от дома до места проведения вечеринки.

### Выходные данные
Выведите одно целое число, равное максимальному количеству задач, которое может решить Лимак, так чтобы прибыть на новогоднюю вечеринку ровно в полночь или раньше.

# 469A - I Wanna Be the Guy
Есть такая игра под названием «I Wanna Be the Guy», в ней n уровней. Little X и его друг Little Y подсели на эту игру. Каждый из них хочет пройти игру полностью.

Little X может пройти только p уровней этой игры. А Little Y может пройти только q уровней этой игры. Вам даны номера уровней, которые может пройти Little X, и номера уровней, которые может пройти Little Y. Могут ли Little X и Little Y пройти игру полностью, если объединят свои усилия?

### Входные данные
В первой строке записано единственное целое число n (1 ≤  n ≤ 100).

В следующей строке сначала записано целое число p (0 ≤ p ≤ n), затем следуют p различных целых чисел a1, a2, ..., ap (1 ≤ ai ≤ n). Эти числа обозначают номера уровней, которые может пройти Little X. В следующей строке содержатся номера уровней, которые может пройти Little Y, в аналогичном формате. Предполагается, что уровни пронумерованы от 1 до n.

### Выходные данные
Если друзья могут пройти все уровни вместе, выведите «I become the guy.». Если это невозможно, выведите «Oh, my keyboard!» (без кавычек).

# 1328A - Задача о делимости
Вам даны два целых положительных числа a и b. За один ход вы можете увеличить a на 1 (заменить a на a+1). Ваша задача — найти минимальное количество ходов, которое необходимо сделать, чтобы получить значение a, которое делится на b без остатка. Возможно, вам придётся сделать 0 ходов, так как a уже делится на b.

Вам нужно ответить на t независимых наборов входных данных.

### Входные данные
Первая строка теста содержит одно целое число t (1≤t≤104) — количество наборов входных данных. Затем следуют t наборов входных данных. Единственная строка каждого набора содержит два целых числа a и b (1≤a,b≤109).

### Выходные данные
Для каждого набора входных данных выведите ответ — минимальное количество ходов, которое нужно сделать, чтобы получить значение a, которое без остатка делилось бы на b.

# 705A - Халк
Доктор Брюс Беннер ненавидит своих врагов (сильнее, чем это делают другие). Как мы знаем, он с трудом общается, когда превращается в Халка. Поэтому он просит вас помочь ему с выражением своих чувств.

Халк очень любит погружение, и его чувства крайне сложные. Они состоят из n уровней, первый из них — это ненависть, второй — любовь, третий снова ненависть и так далее...

Например, для n = 1 чувства Халка выражаются как "I hate it", для n = 2 это уже "I hate that I love it", а для n = 3 — "I hate that I love that I hate it".

Помогите Брюсу выразить свои чувства на n-м уровне погружения.

### Входные данные
В единственной строке входных данных записано единственное целое число n (1 ≤ n ≤ 100) — количество уровней погружения.

### Выходные данные
Выведите строку, описывающую чувства доктора Бреннера.

# 148A - Средство от бессонницы
«Раз дракон. Два дракон. Три дракон», — считала принцесса. У нее была бессонница, а считать барашков ей надоело еще в девять лет.

Впрочем, считать драконов просто так тоже было скучно, поэтому она развлекалась как могла. Этой ночью она представляла, что все посчитанные драконы явились сюда, чтобы ее украсть, а она отбивается от них, как может. Каждого k-ого дракона она била сковородкой по морде. Каждому l-ому — прищемляла хвост балконной дверью. Каждому m-ому — наступала на лапу острым каблучком. Наконец, каждому n-ому она грозила позвать мамочку, и он в ужасе ретировался.

Скольким воображаемым драконам успела нанести моральный или физический ущерб принцесса, если всего она насчитала d драконов?

### Входные данные
Входные данные содержат целые числа k, l, m, n и d, каждое число в отдельной строке (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).

### Выходные данные
Выведите количество пострадавших драконов.
