void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}