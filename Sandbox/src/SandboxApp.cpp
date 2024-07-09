#include "../../Hazel/src/Hazel.h"

namespace Hazel {
	//HAZEL_API void Print();
}

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}