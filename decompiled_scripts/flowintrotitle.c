#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x24862A9CDC8F8874(83))
	{
		func_10();
	}
	unk_0x5D6486E91832EAEC(0);
	unk_0x77621132305B133B(&(Global_100976.f_8650.f_25), 1);
	func_7();
	unk_0x4A7FE215482FE126(1);
	if (!unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x00F9843B9C06C2E9(0);
	}
	iLocal_0 = unk_0x31DC2CEFEF13C96D("OPENING_CREDITS");
	while (!unk_0xF518F3C7FACD43B7(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xD5DFCA69ACAA20E3())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x693EBB4F13506457() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x308528B5CF35F306())
	{
		func_7();
		if (!unk_0xDCC86F723E82125E(Global_100976.f_8650.f_25, 1))
		{
			unk_0x16387DB49A36A0F3(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x693EBB4F13506457() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x693EBB4F13506457() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x693EBB4F13506457() > iLocal_1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_8650.f_25), 1);
				if (unk_0x5E552F383221E152() || unk_0x68B0A67658F2D9C2())
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
	Global_91145 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91145.f_7 = iParam0;
	Global_91145.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x7C38F93AF52620B1(iLocal_0, "HIDE_LOGO");
	unk_0x276F16E002D00C0C("STRING");
	unk_0x2DED6C1306496257(sParam0);
	unk_0x354E2E7AA52E941F();
	unk_0xD013AC29829DDC02();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x7C38F93AF52620B1(iLocal_0, "SHOW_LOGO");
	unk_0x276F16E002D00C0C("STRING");
	unk_0x2DED6C1306496257(sParam0);
	unk_0x354E2E7AA52E941F();
	unk_0x512B59C08EAFA3B9(fParam1);
	unk_0x512B59C08EAFA3B9(fParam2);
	unk_0x512B59C08EAFA3B9(fParam3);
	unk_0x512B59C08EAFA3B9(fParam4);
	unk_0x512B59C08EAFA3B9(fParam5);
	unk_0x512B59C08EAFA3B9(fParam6);
	unk_0x512B59C08EAFA3B9(fParam7);
	unk_0xD013AC29829DDC02();
}

void func_7()
{
	unk_0xD2423E2A80750319();
	unk_0x2BE3C7FA4FCCA784(2, 199, 1);
	unk_0x7F1F2564B5CE06AF(7);
	func_8();
}

void func_8()
{
	unk_0x5B53B03A14798328();
	func_9();
}

void func_9()
{
	Global_17118.f_134 = 1;
}

void func_10()
{
	unk_0x59A0729D503ED758(&(Global_100976.f_8650.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xEF145906684E3D72(&iLocal_0);
	}
	unk_0x7F1F2564B5CE06AF(4);
	unk_0x4A7FE215482FE126(0);
	unk_0x5D6486E91832EAEC(1);
	unk_0xA4E0D8FD51F2A6F7();
}

