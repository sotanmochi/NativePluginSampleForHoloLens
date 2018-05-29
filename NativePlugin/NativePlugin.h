#define EXPORT_API __declspec(dllexport)

namespace SamplePlugin
{
	extern "C"
	{
		int EXPORT_API AddInt(int a, int b);
	}
}