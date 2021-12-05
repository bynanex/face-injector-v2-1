#pragma once

void start_driver()
{
	driver().handle_driver();

	if (!driver().is_loaded())
	{
		cout << xor_a("loading driver wait kid..") << endl;
		mmap_driver();
	}

	driver().handle_driver();
	driver().is_loaded() ? cout << xor_a("driver loaded cool now loading cheat xd") << endl : cout << xor_a("pooperrorsendthistodamo=<") << endl;
}

