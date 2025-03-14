template <typename T>
void swap(T &a, T &b)
{
	T buff = a;
	a = b;
	b = buff;
}
template <typename T>
T &min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}
template <typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}
