BOOL WINAPI DllMain(HMODULE dll, DWORD reason, PVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(dll);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)init, NULL, NULL, NULL);
	}
	return TRUE;
}

void init()
{
// execute some shit code 
}
