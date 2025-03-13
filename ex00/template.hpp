#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename Type>
void	swap(Type &firstValue, Type &secondValue)
{
	Type temp = firstValue;
	firstValue = secondValue;
	secondValue = temp;
}

template <typename Type>
Type	min(Type firstValue, Type secondValue)
{
	if (firstValue == secondValue)
		return (secondValue);

	if (firstValue < secondValue)
		return (firstValue);
	else
		return (secondValue);
}

template <typename Type>
Type	max(Type firstValue, Type secondValue)
{
	if (firstValue == secondValue)
		return (secondValue);

	if (firstValue > secondValue)
		return (firstValue);
	else
		return (secondValue);
}

#endif
