#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2C897F101BA20806(83))
	{
		func_10();
	}
	unk_0x4FB2D19B4D370969(0);
	unk_0x29DB79DD4D939B38(&(Global_97439.f_8270.f_25), 1);
	func_7();
	unk_0xD2238E59B5C4A250(1);
	if (!unk_0xF4C685E933068D23())
	{
		unk_0x271524E4281048DC(0);
	}
	iLocal_0 = unk_0x36ECDA4DD9A3F08D("OPENING_CREDITS");
	while (!unk_0xC8378A96673BCC40(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xF4C685E933068D23())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x09560C7DE2A384BD() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0xEC35DAD55FA4EEF2())
	{
		func_7();
		if (!unk_0x889D01384B54BCE3(Global_97439.f_8270.f_25, 1))
		{
			unk_0x27BDF28219C810BA(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x09560C7DE2A384BD() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x09560C7DE2A384BD() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x09560C7DE2A384BD() > iLocal_1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8270.f_25), 1);
				if (unk_0xD38C598E6351982D() || unk_0xF6BAF9F0C2863FFE())
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
	Global_90081 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_90081.f_7 = iParam0;
	Global_90081.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xB067107D878E9585(iLocal_0, "HIDE_LOGO");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam0);
	unk_0x9F94C7B5E8C04AB3();
	unk_0xD3DF251F2DF3B257();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xB067107D878E9585(iLocal_0, "SHOW_LOGO");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam0);
	unk_0x9F94C7B5E8C04AB3();
	unk_0x50050D925C27B388(fParam1);
	unk_0x50050D925C27B388(fParam2);
	unk_0x50050D925C27B388(fParam3);
	unk_0x50050D925C27B388(fParam4);
	unk_0x50050D925C27B388(fParam5);
	unk_0x50050D925C27B388(fParam6);
	unk_0x50050D925C27B388(fParam7);
	unk_0xD3DF251F2DF3B257();
}

void func_7()
{
	unk_0xCDDA76A8EADDFCB7();
	unk_0x4B404C739A9AFC7A(2, 199, 1);
	unk_0xFA5652FA48ED466D(7);
	func_8();
}

void func_8()
{
	unk_0xA7CEB400EFD58154();
	func_9();
}

void func_9()
{
	Global_17099.f_134 = 1;
}

void func_10()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8270.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x7559DFAB61B017F2(&iLocal_0);
	}
	unk_0xFA5652FA48ED466D(4);
	unk_0xD2238E59B5C4A250(0);
	unk_0x4FB2D19B4D370969(1);
	unk_0x82706E6C897B0FA1();
}

