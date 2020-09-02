#include<iostream>
int recurs(int a, int b, int count) {
	int widht = a, height = b;//присваиваем ширину и высоту соответствующим переменным
	if (widht > 0 && height > 0) {//если ширина и высота больше нуля выполняем этот блок
		if (widht < height) {//если высота > ширины
			return recurs(height, widht, count);//меняем их местами
		}
		else {//иначе выполняем этот блок
			widht -= height;//уменьшаем ширину на величину высоты
			count++;//увеличиваем счетчик
			return recurs(widht, height, count);//повторяем процедуру

		}
	}
	else {//если ширина или высота  = 0 - прекращаем выполнение 
		return count;// возвращаем величину счетчика
	}

}

int main()
{
	int xpr = 8, ypr = 5;//xpr - ширина прямоугольника, ypr - высота
	int count = 0, rez;//count - счетчик, rez - результат на печать
	rez = recurs(xpr, ypr, count);
	printf("%i", rez);
	return 0;
}