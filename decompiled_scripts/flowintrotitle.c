#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xC968670BFACE42D9(83))
	{
		func_10();
	}
	unk_0x717CD6E6FAEBBEDC(false);
	unk_0xE80492A9AC099A93(&(Global_97173.f_8237.f_25), 1);
	func_7();
	unk_0x5262CC1995D07E09(true);
	if (!unk_0xB16FCE9DDC7BA182())
	{
		unk_0x891B5B39AC6302AF(0);
	}
	iLocal_0 = unk_0x11FE353CF9733E6F("OPENING_CREDITS");
	while (!unk_0x85F01B8D5B90570E(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xB16FCE9DDC7BA182())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x9CD27B0045628463() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0xD3C2E180A40F031E())
	{
		func_7();
		if (!unk_0xA921AA820C25702F(Global_97173.f_8237.f_25, 1))
		{
			unk_0x0DF606929C105BE1(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x9CD27B0045628463() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x9CD27B0045628463() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x9CD27B0045628463() > iLocal_1)
			{
				unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8237.f_25), 1);
				if (unk_0x6FDDF453C0C756EC() || unk_0x48AF36444B965238())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_10();
}

void func_1()
{
	Global_89823 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_89823.f_7 = iParam0;
	Global_89823.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xF6E48914C7A8694E(iLocal_0, "HIDE_LOGO");
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	unk_0xC6796A8FFA375E53();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xF6E48914C7A8694E(iLocal_0, "SHOW_LOGO");
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	unk_0xD69736AAE04DB51A(fParam1);
	unk_0xD69736AAE04DB51A(fParam2);
	unk_0xD69736AAE04DB51A(fParam3);
	unk_0xD69736AAE04DB51A(fParam4);
	unk_0xD69736AAE04DB51A(fParam5);
	unk_0xD69736AAE04DB51A(fParam6);
	unk_0xD69736AAE04DB51A(fParam7);
	unk_0xC6796A8FFA375E53();
}

void func_7()
{
	unk_0x4B0311D3CDC4648F();
	unk_0xFE99B66D079CF6BC(2, 199, true);
	unk_0x61BB1D9B3A95D802(7);
	func_8();
}

void func_8()
{
	unk_0xEB2D525B57F42B40();
	func_9();
}

void func_9()
{
	Global_17098.f_134 = 1;
}

void func_10()
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8237.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x1D132D614DD86811(&iLocal_0);
	}
	unk_0x61BB1D9B3A95D802(4);
	unk_0x5262CC1995D07E09(false);
	unk_0x717CD6E6FAEBBEDC(true);
	unk_0x1090044AD1DA76FA();
}

