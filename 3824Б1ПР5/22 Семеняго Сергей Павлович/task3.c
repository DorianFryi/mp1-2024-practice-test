// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
size_t task3(char *s)
{
  return -1;
}
    size_t count = 0;
    while (*s) {
        if (*s >= '0' && *s <= '9') {
            count++;
        }
        s++;
    }
    return count;
}
