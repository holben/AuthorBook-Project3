#pragma once
class Exception
{
	
	int error;
public:
	const int read_error = 11;
	const int not_open = 22;
	const int end_file = 33;
	Exception();
	~Exception();
};

