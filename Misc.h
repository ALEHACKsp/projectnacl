#pragma once
#include "SDK.h"

namespace Global {
	extern CBaseEntity*	Local;
	extern CUserCmd*	Command;
	extern CUserCmd		OGCommand;
}

class CMisc
{
public:

	void Run(CBaseEntity* pLocal, CUserCmd* pCommand);

	Checkbox bhop = Checkbox("Bunnyhop");
	Checkbox astrafer = Checkbox("Autostrafer");
	Checkbox nspam = Checkbox("Noisemaker Spam");
	Checkbox tauntslide = Checkbox("Taunt Slide");
	Checkbox speedcrouch = Checkbox("Speed Crouch");
	Checkbox nopush = Checkbox("No Push");
	Checkbox cscreenshots = Checkbox("Clean Screenshots");
	Checkbox purebypass = Checkbox("Pure Bypass");
	Checkbox sfreezing = Checkbox("Time Shift");
	Listbox sfreezing_key = Listbox("Time Shift Key", { "None", "Mouse 3", "Mouse 4", "Mouse 5", "Shift", "Alt", "F", "E"}, 0);
	Slider sfreezing_value = Slider("Time Shift Value", 1, 1, 2500, 1);


	Checkbox backtrack = Checkbox("Backtrack");
	Slider backtrack_ticks = Slider("Backtrack Ticks", 0, 0, 12, 1);

	Checkbox flag = Checkbox("Fakelag");
	Slider flagamount = Slider("Fakelag Amount", 0, 0, 15, 1);

private:

	//Other funcs

	void NoisemakerSpam(PVOID kv);
	void AntiAim();
	void AntiAim2();
};

extern CMisc gMisc;