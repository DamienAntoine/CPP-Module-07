#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename Reference, typename Length, typename F>
void	iter(Reference* array, Length len, F function)
{
	Length i = 0;
	while (i < len)
	{
		function(array[i]);
		i++;
	}
}

#endif
