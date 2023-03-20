#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x7547D7CF93115D6D(83))
	{
		func_10();
	}
	unk_0x6AE9435516202E12(0);
	unk_0xCD27BF29FB9012E2(&(Global_97173.f_8237.f_25), 1);
	func_7();
	unk_0x8311E913E07031CD(1);
	if (!unk_0xC2C705ED6124A7C2())
	{
		unk_0x7C69A4879766A867(0);
	}
	iLocal_0 = unk_0xAFBDE0BB5C885026("OPENING_CREDITS");
	while (!unk_0xE908465F9CDF4F1A(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xC2C705ED6124A7C2())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0xF976C624234A4AA8() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x3574DD38C5FAC832())
	{
		func_7();
		if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8237.f_25, 1))
		{
			unk_0x4A383EC377D451D0(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0xF976C624234A4AA8() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0xF976C624234A4AA8() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0xF976C624234A4AA8() > iLocal_1)
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8237.f_25), 1);
				if (unk_0x8969EF94F09C8981() || unk_0x80AD636AD4184F2B())
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
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_89823.f_7 = iParam0;
	Global_89823.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xF48C88BD1F0007E8(iLocal_0, "HIDE_LOGO");
	unk_0x44F4D219F8513945("STRING");
	unk_0xD1F22DD7F7363AB6(sParam0);
	unk_0x113A6F657EE871A3();
	unk_0xA52FC2467E672B55();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xF48C88BD1F0007E8(iLocal_0, "SHOW_LOGO");
	unk_0x44F4D219F8513945("STRING");
	unk_0xD1F22DD7F7363AB6(sParam0);
	unk_0x113A6F657EE871A3();
	unk_0xA8F7908868900538(fParam1);
	unk_0xA8F7908868900538(fParam2);
	unk_0xA8F7908868900538(fParam3);
	unk_0xA8F7908868900538(fParam4);
	unk_0xA8F7908868900538(fParam5);
	unk_0xA8F7908868900538(fParam6);
	unk_0xA8F7908868900538(fParam7);
	unk_0xA52FC2467E672B55();
}

void func_7()
{
	unk_0xB9127039E1155CEF();
	unk_0x500F4CA776CEBD0A(2, 199, 1);
	unk_0x070F78D7490C1013(7);
	func_8();
}

void func_8()
{
	unk_0x882182119EAE9ABF();
	func_9();
}

void func_9()
{
	Global_17098.f_134 = 1;
}

void func_10()
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8237.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x86FF04BBB2EC839F(&iLocal_0);
	}
	unk_0x070F78D7490C1013(4);
	unk_0x8311E913E07031CD(0);
	unk_0x6AE9435516202E12(1);
	unk_0x883793591E631A3B();
}

