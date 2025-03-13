class whatever
{
private:
	/* data */
public:
	whatever();
	~whatever();

	void swap(int &a, int &b);
	int &min(int &a, int &b);
	int &max(int &a, int &b);
};

whatever::whatever()
{

}

whatever::~whatever()
{
}

void whatever::swap(int &a, int &b)
{
	int buff = a;
	b = a;
	a = b;
}

int &whatever::min(int &a, int &b)
{
	if (a < b)
		return a;
	return b;
}

int &whatever::max(int &a, int &b)
{
	if (a > b)
		return a;
	return b;
}
