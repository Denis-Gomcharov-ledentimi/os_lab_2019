#include <unistd.h>
int main(int c, char** argv)
{
    execv("sequential_min_max" , argv);
	return 0;
}
