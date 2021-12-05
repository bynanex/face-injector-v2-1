#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

int main()
{
	// driver init
	start_driver();
	cout << endl;

	// injector (Respawn001 - apex legends window class name)
	face_injecor_v2(xor_a("UnrealWindow"), xor_w(L"gaysex.dll"));

	cout << endl;
	system("pause");
}