#include "posrednik.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	KolkoiKrzyzyk::MyForm Gra;
	Application::Run(% Gra);

}