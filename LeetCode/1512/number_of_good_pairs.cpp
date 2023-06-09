//
// Created by Denis Malyavin on 23.04.2023.
//

/* ФОРМУЛИРОВКА ЗАДАЧИ:
На вход даётся массив целых чисел nums, в ответ необходимо вернуть количество совпавших пар чисел.

Совпавшей парой чисел (i, j) называется такая пара, для которой nums[i] == nums[j] и i < j.
*/

/* Решение №1. Через хеш-таблицу

АЛГОРИТМ
1. Создаем хеш-таблицу <int, int>.
2. Помещаем каждый элемент в хеш-таблицу, ключами для которой будут значения nums.
3. В цикле проходим по каждому элементу массива и при совпадении с nums увеличиваем значение элемента
хеш-таблицы на единицу.
4. Возвращаем самое большое значение элемента в хеш-таблице.

АНАЛИЗ СЛОЖНОСТИ

Сложность по времени
O(n)

Сложность по памяти
O(n)

*/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter = 0;
        unordered_map<int,int>total_map;
        for (int i: nums) {
            counter += total_map[i]++;
        }
        return counter;
    }
};

// TODO: Продумать решение с использованием accumulate обновленного в c++ 23